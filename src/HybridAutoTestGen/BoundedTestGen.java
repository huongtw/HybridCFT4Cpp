package HybridAutoTestGen;

import cfg.CFG;
import cfg.CFGGenerationforSubConditionCoverage;
import cfg.ICFG;
import cfg.object.ICfgNode;
import cfg.testpath.INormalizedTestpath;
import cfg.testpath.NormalizedTestpath;
import config.AbstractSetting;
import config.FunctionConfig;
import config.ISettingv2;
import config.Paths;
import javafx.util.Pair;
import normalizer.FunctionNormalizer;
import org.apache.log4j.Logger;
import org.eclipse.cdt.internal.core.model.Variable;
import org.junit.Test;
import parser.projectparser.ProjectParser;
import testdatagen.se.ISymbolicExecution;
import testdatagen.se.Parameter;
import testdatagen.se.PathConstraint;
import testdatagen.se.SymbolicExecution;
import testdatagen.se.solver.RunZ3OnCMD;
import testdatagen.se.solver.SmtLibGeneration;
import testdatagen.se.solver.Z3SolutionParser;
import tree.object.FunctionNode;
import tree.object.IFunctionNode;
import tree.object.INode;
import tree.object.IVariableNode;
import utils.Utils;
import utils.search.FunctionNodeCondition;
import utils.search.Search;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.time.Duration;
import java.time.LocalDateTime;
import java.util.*;

public class BoundedTestGen
{
	final static Logger logger = Logger.getLogger(BoundedTestGen.class);
	private IFunctionNode function;
	private ICFG cfg;
	private List<TestData> testCases;
	private LocalDateTime beforeTestDataGenerationTime;
	private LocalDateTime afterTestDataGenerationTime;
	public BoundedTestGen(int maxloop, String functionName, String sourceFolder) throws Exception {
		CFG cfg = null;
		ProjectParser parser = new ProjectParser(new File(sourceFolder));
		IFunctionNode function;
		
		function = (IFunctionNode) Search
				.searchNodes(parser.getRootTree(), new FunctionNodeCondition(), functionName)
				.get(0);
//		function.getAST().toString().replaceAll("<", "==");
		FunctionConfig functionConfig = new FunctionConfig();
		functionConfig.setSolvingStrategy(ISettingv2.SUPPORT_SOLVING_STRATEGIES[0]);
		((IFunctionNode ) function).setFunctionConfig(functionConfig);
		FunctionNormalizer fnNorm = ((IFunctionNode) function).normalizedAST();
		String normalizedCoverage = fnNorm.getNormalizedSourcecode();
		((IFunctionNode ) function).setAST(fnNorm.getNormalizedAST());
		IFunctionNode clone = (IFunctionNode) function.clone();
		clone.setAST(Utils.getFunctionsinAST(normalizedCoverage.toCharArray()).get(0));
		CFGGenerationforSubConditionCoverage cfgGen = new CFGGenerationforSubConditionCoverage(clone);
		this.function = function;
		this.cfg = cfgGen.generateCFG();
		this.testCases = new ArrayList<TestData>();
		
	}
	public static void main(String[] args) throws Exception {
		BoundedTestGen gen = new BoundedTestGen(1, "maxx(int)", Paths.TSDV_R1_2);
		gen.analyze();
				
	}
	public void analyze() throws Exception {
		this.beforeTestDataGenerationTime = LocalDateTime.now();
		Hashtable<IVariableNode, HashSet<Number>> dict = new Hashtable<IVariableNode, HashSet<Number>>();
		List<IVariableNode> arguments = this.function.getArguments();
		for(IVariableNode variable : arguments) {
			dict.put(variable, new HashSet<Number>());
		}
		
		for(IVariableNode variable:arguments) {
			if(variable.getFullType().equals("int") || variable.getFullType().equals("float") ||
					variable.getFullType().equals("double")) {
				for(ICfgNode node: cfg.getAllNodes()) {
					if(node.toString().contains(variable.toString()) && 
					(node.toString().contains(">")||node.toString().contains(">=")||
							node.toString().contains("<")||node.toString().contains("<=")||
							node.toString().contains("==")||node.toString().contains("!="))) {
						this.analyzeNode(node, dict.get(variable),variable, cfg, this.function, dict);
					}
					
				}
			}
			
			
		}
		
		for(IVariableNode variable : dict.keySet()) {
			logger.debug(variable.toString() + dict.get(variable).toString());
		}
		int maxSize=0;
		for(IVariableNode variableNode:dict.keySet()) {
			if(dict.get(variableNode).size()>maxSize) {
				maxSize = dict.get(variableNode).size();
			}
		}
		Random random = new Random();

		List<String> testCasees = new ArrayList<String>();
		Hashtable<IVariableNode, String> dict2 = new Hashtable<IVariableNode, String>();
		String replace = "nosolution";
		for(IVariableNode variableNode: arguments) {
			String testString = "";
			for(IVariableNode variableNode2:arguments) {
				if(variableNode2!=variableNode) {
					testString+=variableNode2.toString()+"="+this.getNorm(dict.get(variableNode2),variableNode2)+";";
				}
				else {
					testString+=variableNode2.toString()+"="+replace+";";
				}
			}
			dict2.put(variableNode, testString);
		}
		System.out.println("result: ");
		Map<String, List<String>> paramMidValueList = new HashMap<>();
		Map<String, List<String>> paramValueList = new HashMap<>();
		for(IVariableNode variable: dict2.keySet()) {
			List<String> valueLists = new ArrayList<String>();
			for(Number number: dict.get(variable)) {
//				System.out.println(dict2.get(variable).toString().replace(replace, number.toString()));
				TestData testData = new TestData();
				testData.add(new Pair<>(variable.getName(), number.toString()));
//				this.testCases.add(testData);
				valueLists.add(number.toString());
			}
			paramValueList.put(variable.getName(), valueLists);

		//	int max = "";
		//	int min ="";
			String max = "";
			String  min ="";
			switch (variable.getRealType())
			{
				case "char":
					//max = Integer.toString(Integer.MAX_VALUE);
					//min = Integer.toString(Integer.MIN_VALUE);
					max = Integer.toString(127);
					min = Integer.toString(-128);
					break;
				case "unsigned char":
					//max = Integer.toString(Integer.MAX_VALUE);
					//min = Integer.toString(Integer.MIN_VALUE);
					max = Integer.toString(255);
					min = Integer.toString(0);
					break;
				case "int":
					//max = Integer.toString(Integer.MAX_VALUE);
					//min = Integer.toString(Integer.MIN_VALUE);
					max = Integer.toString(32767);
					min = Integer.toString(-32768);
					break;
				case "long":
//					max = Long.toString(Long.MAX_VALUE);
					//min = Long.toString(Long.MIN_VALUE);
					max = Long.toString(2147483647);
					min = Long.toString(-2147483648);

					break;
				case "float":
					//max = Float.toString(Float.MAX_VALUE);
					//min = Float.toString(Float.MIN_VALUE);
					max = Float.toString((float) 340000000000000000000000000000000000000.0);
					min = Float.toString((float) 1.2E-38);
					break;
				case "double":
					//max = Double.toString(Double.MAX_VALUE);
					//min = Double.toString(Double.MIN_VALUE);
					max = Double.toString(1.7E+308);
					min = Double.toString(2.3E-308);
					break;
				case "short":
					//max = Short.toString(Short.MAX_VALUE);
					//min = Short.toString(Short.MIN_VALUE);
					max = Short.toString((short) 32767);
					min = Short.toString((short)-32768);
					break;
			}

			String paramName = variable.getName();

			if (paramValueList.containsKey(paramName))
			{
				if (!paramValueList.get(paramName).contains(max))
				{
					paramValueList.get(paramName).add(max);
				}
				if (!paramValueList.get(paramName).contains(min))
				{
					paramValueList.get(paramName).add(min);
				}
			}
			else
			{
				List<String> valueList = new ArrayList<>();
				if (!"".equals(max))
				{
					valueList.add(max);
				}
				if (!"".equals(min))
				{
					valueList.add(min);
				}

				paramValueList.put(paramName, valueList);
			}
			paramValueList.put(variable.getName(), valueLists);
			Utils.sortValueList(paramValueList.get(paramName));
			List<String> midValueList = Utils.createMidValueList(paramValueList.get(variable.getName()), variable.getRealType());
			paramMidValueList.put(variable.getName(), midValueList);
		}


		for(IVariableNode variable: dict2.keySet()){
			Map<String, List<String>> otherVarMidValueList = new HashMap<>();
			for (IVariableNode midValueNode: dict2.keySet())
			{
				if (!midValueNode.getName().equals(variable.getName()))
				{
					otherVarMidValueList.put(midValueNode.getName(), paramMidValueList.get(midValueNode.getName()));
				}
			}
			List<String> listValue = paramValueList.get(variable.getName());

			List<TestData> testDataListforBoundValue = new ArrayList<>();

			for (String value: listValue)
			{
				TestData testData = new TestData();

				testData.add(new Pair<>(variable.getName(), value));

				testDataListforBoundValue.add(testData);
			}

			for (Map.Entry entry : otherVarMidValueList.entrySet()) {
				List<TestData> newList = new ArrayList<>();

				newList = CombineTestDataList(testDataListforBoundValue, entry.getKey().toString(), Utils.CloneStringList ((List<String>)entry.getValue()));

				testDataListforBoundValue = newList;
				this.testCases.addAll(newList);
			}
			if(dict2.keySet().size()==1){
				for(Number number: dict.get(variable)) {
					TestData testData = new TestData();
					testData.add(new Pair<>(variable.getName(), number.toString()));
					this.testCases.add(testData);
				}
			}
//			this.testCases.addAll(testDataListforBoundValue);
		}


		System.out.println(this.testCases);
		this.afterTestDataGenerationTime = LocalDateTime.now();
		this.ExportReport();
	}
	public static List<TestData> CombineTestDataList(List<TestData> testDataList, String paramName, List<String> valueList)
	{
		List<TestData> returnList = new ArrayList<>();

		for (TestData testData: testDataList)
		{
			List<TestData> newList = new ArrayList<>();

			for (String value: valueList)
			{
				TestData testData1 = testData.clone();

				testData1.add(new Pair<>(paramName, value));

				newList.add(testData1);
			}

			returnList.addAll(newList);
		}

		return returnList;
	}
	
	public void analyzeNode(ICfgNode node, HashSet<Number> aList, IVariableNode variable, ICFG cfg, IFunctionNode function, Hashtable<IVariableNode, HashSet<Number>> dict) throws Exception {
		
		String leftSide = node.toString().split(">=|<=|==|!=|<|>")[0];
		String rightSide = node.toString().split(">=|<=|==|!=|<|>")[1];
		String number="";
		if(leftSide.matches("[-+]?[0-9]*\\.?[0-9]+")) {
			number=leftSide;
			if(!rightSide.replaceAll("\\s+","").equals(variable.toString())) {
				return ;
			}
		}
		else if(rightSide.matches("[-+]?[0-9]*\\.?[0-9]+")) {
			number=rightSide;
			if(!leftSide.replaceAll("\\s+","").equals(variable.toString())) {
				return ;
			}
		}
		else {
			this.solveTestPath(cfg, node, dict,function);
			return ;
		}
		
		
		
		try {
			if(number.matches("[+-]?([0-9]+\\.([0-9]+)?|\\.[0-9]+)([eE][+-]?[0-9]+)?")) {
				aList.add((float)Float.parseFloat(number));
			}
			else {
				int intNumber = Integer.parseInt(number);
				aList.add(intNumber);
				aList.add(intNumber+1);
				aList.add(intNumber-1);
			}
		}catch (NumberFormatException e) {
			// TODO: handle exception
			
		}
		
	}

	public void ExportReport() throws IOException
	{
		Duration duration = Duration.between(beforeTestDataGenerationTime, afterTestDataGenerationTime);

		float diff = Math.abs((float) duration.toMillis() / 1000);

		FileWriter csvWriter = new FileWriter(AbstractSetting.getValue("TEST_REPORT") + ".html", false);

		String valueString = "<!DOCTYPE html>\r\n" +
				"<html>\r\n" +
				"\r\n" +
				"<head> <link rel=\"stylesheet\" type=\"text/css\" href=\"hmm_report.css\">\r\n" +
				"\r\n" +
				"</head>\r\n" +
				"\r\n" +
				"<body>\r\n" +
				"    <h2>BVTG: TEST REPORT</h2>\r\n" +

				"    <div class=\"table-wrapper\">\r\n" +
				"        <table class=\"fl-table\">\r\n" +
				"            <thead>\r\n" +
				"                <tr>\r\n" +
				"                    <th>Boundary generated test data</th>\r\n" +
				"                </tr>\r\n" +
				"            </thead>\r\n" +
				"            <tbody>";
		for (TestData testcase : this.testCases)
		{
			valueString += "<tr><td>" + testcase.toString() + "</td></tr>";
		}

		valueString += "        <tr><td>Number of test data: " + this.testCases.size() + "; Elapsed time: " + diff + " s</td></tr>";

		valueString += "            </tbody></table></div>";

		valueString += "   </tbody>\r\n" +
				"        </table></div>\r\n" +
				"<div  class=\"table-wrapper\">" +
				"        <table class=\"fl-table\">\r\n" +
				"            <thead>\r\n" +
				"                <tr>\r\n" +
				"                    <th>Function raw signature</th>\r\n" +
				"                </tr>\r\n" +
				"            </thead>\r\n" +
				"            <tbody>" +
				"<tr><td><pre>" + this.function.getAST().getRawSignature().toString() +

				"</pre></tr></td>" +
				"            </tbody></table></div>"+

				"</body></html>";
		csvWriter.append(valueString);
		csvWriter.close();

	}
	public Number getNorm(HashSet<Number> aList, IVariableNode variableNode) {
		Random random = new Random();
		if(aList.size()==0) {
			return random.nextInt(50);
		}
		//Number maxx = Integer.MIN_VALUE;
	//	Number minn = Integer.MAX_VALUE;
		Number maxx = 32767;
		Number minn = -32768;
		for(Number b : aList) {
			
				if(b.floatValue()<minn.floatValue()) minn = b;
			
				if(b.floatValue()>maxx.floatValue()) maxx = b;
			
		}
		int value;
		if(maxx.intValue()-minn.intValue() > aList.size()-1) {
			 value = random.nextInt(maxx.intValue() - minn.intValue()) + minn.intValue();
		}
		else if(maxx.intValue()>0) {
			value = random.nextInt(maxx.intValue()+1);
		}
		else value = random.nextInt(50);
		
		return (Number)value;
		
	}
	
	public void solveTestPath(ICFG cfg, ICfgNode nodeForGen, Hashtable<IVariableNode, HashSet<Number>> dict, IFunctionNode function) throws Exception {
		Parameter paramaters = new Parameter();
		String rightSide = nodeForGen.toString().split(">=|<=|==|!=|<|>")[1];
//		function.
//		for(ICfgNode node:cfg.getAllNodes()) {
//			if(node.toString().contains("<")||node.toString().contains(">")) {
////				ICfgNode node1 = (ICfgNode) node.clone();
//				node.setContent(node.getContent().replaceAll("<=|>=|<|>", "=="));
//			}
//		}
		
		for (INode n : ((FunctionNode) function).getArguments())
			paramaters.add(n);
		
		for (INode n : ((FunctionNode) function).getReducedExternalVariables()) {
//			if(n.toString().contains(">") || n.toString().contains("<")) {
//				INode n1 = n.clone();
//				n1.set
//			}
			paramaters.add(n);
		}
			
		INormalizedTestpath testpath = new NormalizedTestpath();
//		testpath
		if(!rightSide.matches("[-+]?[0-9]*\\.?[0-9]+")) {
			for(ICfgNode node: cfg.getAllNodes()) {
				if(node.toString().contains(rightSide.replaceAll(" ", "")) &&
						!node.toString().contains("<=") && !node.toString().contains("<") &&
						!node.toString().contains(">=")&& !node.toString().contains(">") ) {
					testpath.getAllCfgNodes().add(node);
					
				}
			}
		}
		
		testpath.getAllCfgNodes().add(nodeForGen);
		
	
////		ICfgNode node = new CfgNode(nodeForGen.clone().getContent().replaceAll("<=|>=|<|>", "=="));
//		ICfgNode node = (NormalCfgNode) nodeForGen.clone();
//		((NormalCfgNode) node).getAst();
//		
//		node.setContent(node.getContent().replaceAll("<=|>=|<|>", "==")+"+1");
//////		testpath.getAllCfgNodes().add(((CfgNode) nodeForGen.clone()).getContent()nodeForGen.clone()));
//		testpath.getAllCfgNodes().add(node);
	
//		System.out.println(testpath.getFullPath());
		
		ISymbolicExecution se = new SymbolicExecution(testpath, paramaters, function);
		
		List<PathConstraint> constraints = (List<PathConstraint>) se.getConstraints();
		for(PathConstraint constraint : constraints) {
			if(constraint.toString().contains("<")||constraint.toString().contains(">")) {
				constraint.setConstraint(constraint.getConstraint().replaceAll("<=|>=|<|>", "=="));
				
			}
		}
		
		int i = 0;
		while(i<3) {
			if(i==0) {
				this.getNewConstraint(constraints, 0);
			}
			else if(i==1) {
				this.getNewConstraint(constraints, -1);
			}
			else if(i==2) {
				this.getNewConstraint(constraints, 2);
			}
			SmtLibGeneration smt = new SmtLibGeneration();
			smt.setTestcases(function.getArguments());
			smt.setConstraints(constraints);
			smt.generate();
			
			BufferedWriter writer = new BufferedWriter(new FileWriter(WeightedCFGTestGEn.pathToConstraint, false));
			writer.write(smt.getSmtLibContent());
			writer.close();
			RunZ3OnCMD run = new RunZ3OnCMD(WeightedCFGTestGEn.pathToZ3, WeightedCFGTestGEn.pathToConstraint);
			run.execute();
			String result = new Z3SolutionParser().getSolution(run.getSolution());
			String[] listResult = result.split(";");
			
			if(listResult.length==0) {
				return ;
			}
			
			for(String resulti: listResult) {
				for(IVariableNode variableNode : dict.keySet()) {
					if(resulti.toString().contains(variableNode.toString())){
						String temp = resulti.split("=")[1];
						if(variableNode.getFullType().equals("int")) {
							dict.get(variableNode).add(Integer.parseInt(temp));
						}
						else {
							dict.get(variableNode).add(Float.parseFloat(temp));
						}
						
					}
				}
			}
			i++;
		}
		
		
		
	}
	public void getNewConstraint(List<PathConstraint> constraints, int addedvalue) {
		
		for(PathConstraint constraint : constraints) {
			String constraintString = "";
			for(int i = 0; i< constraint.getConstraint().length();i++) {
				
				if(constraint.getConstraint().charAt(i)=='(') {
					int j = i+1;
					String tempString ="";
					while(constraint.getConstraint().charAt(j)!=')') {
						tempString+=constraint.getConstraint().charAt(j);
						j++;
					}
					try {
						int temp = Integer.parseInt(tempString);
						temp+=addedvalue;
						constraintString+= "("+temp+")";
						i=j;
						continue;
						
					}catch (Exception e) {
						// TODO: handle exception
						constraintString+= constraint.getConstraint().charAt(i);
						continue;
						
					}
					
				}
				else {
					constraintString+= constraint.getConstraint().charAt(i);
				}
				
			}
			constraint.setConstraint(constraintString);
		}
	}
	public List<TestData> getTestCases()
	{
		return testCases;
	}

}
