/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__ONEDRIVE___CAO_DANG_SU_PHAM_TRUNG_UONG_NCS_TOOL_KSE_DATA_TEST_SAMPLE_FOR_R1_2_TEST17082021_CPP
#define AKA_SRC_D__ONEDRIVE___CAO_DANG_SU_PHAM_TRUNG_UONG_NCS_TOOL_KSE_DATA_TEST_SAMPLE_FOR_R1_2_TEST17082021_CPP
#include <string>
extern int strcmp(const char * str1, const char * str2);
extern int AKA_mark(std::string append);
extern void AKA_assert(std::string actualName, int actualVal, std::string expectedName, int expectedVal);
extern int AKA_assert_double(std::string actualName, double actualVal, std::string expectedName, double expectedVal);
extern int AKA_assert_ptr(std::string actualName, void* actualVal, std::string expectedName, void* expectedVal);
extern int AKA_fCall;
extern char* AKA_test_case_name;



#include <iostream>
#include <cstring>
using namespace std;
/*
Source getting from website: https://www.geeksforgeeks.org/
*/
//https://www.geeksforgeeks.org/gcd-factorials-two-numbers/ //tinh x!
//Error: x=1
/*
	intput : x
 	output: 1*2*3*4*...*x

 	Error in function
 	Number of error: 1
	if x=1 function will return unexpected result (1!=2)
*/
/** Instrumented function factorial(int) */
int factorial(int x)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.factorial.367.stub"

	if (AKA_mark("lis===19###sois===396###eois===401###lif===2###soif===33###eoif===38###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)") && (AKA_mark("lis===19###sois===396###eois===401###lif===2###soif===33###eoif===38###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)")&&x < 1)) {
		AKA_mark("lis===20###sois===426###eois===435###lif===3###soif===63###eoif===72###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");return 1;
	}
	else {AKA_mark("lis===-19-###sois===-396-###eois===-3965-###lif===-2-###soif===-###eoif===-38-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");}
	AKA_mark("lis===21###sois===441###eois===453###lif===4###soif===78###eoif===90###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");int res = 2;
	AKA_mark("lis===22###sois===464###eois===474###lif===5###soif===101###eoif===111###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");for (int i = 3;AKA_mark("lis===22###sois===475###eois===481###lif===5###soif===112###eoif===118###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)") && AKA_mark("lis===22###sois===475###eois===481###lif===5###soif===112###eoif===118###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)")&&i <= x;({AKA_mark("lis===22###sois===483###eois===486###lif===5###soif===120###eoif===123###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");i++;})) {
		AKA_mark("lis===23###sois===497###eois===511###lif===6###soif===134###eoif===148###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");res = res * i;
	}
	AKA_mark("lis===24###sois===517###eois===528###lif===7###soif===154###eoif===165###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");return res;
}
//****************************************************************************
/*
	intput : averageGrade
 	output: return charecter correspond to given averageGrade
 	in 90-100, return  A
 	in 80-89, return  B
 	in 70-79, return  C
 	in 60-69, return  D
 	in 0-59, return  F
 	else, return  I

 	Error in function
 	Number of error: 6
	if averageGrade is in {100,90,80,70,60,0} the function will return unexpected result
*/


/** Instrumented function grade(int) */
char grade(int averageGrade){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.grade.981.stub"

	if (AKA_mark("lis===44###sois===1011###eois===1046###lif===1###soif===35###eoif===70###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)") && ((AKA_mark("lis===44###sois===1011###eois===1026###lif===1###soif===35###eoif===50###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade>90)	&&(AKA_mark("lis===44###sois===1030###eois===1046###lif===1###soif===54###eoif===70###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade<100))) {
		AKA_mark("lis===45###sois===1051###eois===1062###lif===2###soif===75###eoif===86###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'A';
	}
	else {
		if (AKA_mark("lis===46###sois===1073###eois===1107###lif===3###soif===97###eoif===131###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)") && ((AKA_mark("lis===46###sois===1073###eois===1088###lif===3###soif===97###eoif===112###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade>80)	&&(AKA_mark("lis===46###sois===1092###eois===1107###lif===3###soif===116###eoif===131###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade<90))) {
			AKA_mark("lis===47###sois===1112###eois===1123###lif===4###soif===136###eoif===147###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'B';
		}
		else {
			if (AKA_mark("lis===48###sois===1134###eois===1168###lif===5###soif===158###eoif===192###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)") && ((AKA_mark("lis===48###sois===1134###eois===1149###lif===5###soif===158###eoif===173###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade>70)	&&(AKA_mark("lis===48###sois===1153###eois===1168###lif===5###soif===177###eoif===192###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade<80))) {
				AKA_mark("lis===49###sois===1173###eois===1184###lif===6###soif===197###eoif===208###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'C';
			}
			else {
				if (AKA_mark("lis===50###sois===1195###eois===1229###lif===7###soif===219###eoif===253###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)") && ((AKA_mark("lis===50###sois===1195###eois===1210###lif===7###soif===219###eoif===234###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade>60)	&&(AKA_mark("lis===50###sois===1214###eois===1229###lif===7###soif===238###eoif===253###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade<70))) {
					AKA_mark("lis===51###sois===1234###eois===1245###lif===8###soif===258###eoif===269###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'D';
				}
				else {
					if (AKA_mark("lis===52###sois===1256###eois===1290###lif===9###soif===280###eoif===314###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)") && ((AKA_mark("lis===52###sois===1256###eois===1270###lif===9###soif===280###eoif===294###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade>0)	&&(AKA_mark("lis===52###sois===1274###eois===1290###lif===9###soif===298###eoif===314###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade <60))) {
						AKA_mark("lis===53###sois===1295###eois===1306###lif===10###soif===319###eoif===330###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'F';
					}
					else {AKA_mark("lis===-52-###sois===-1256-###eois===-125634-###lif===-9-###soif===-###eoif===-314-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");}
				}
			}
		}
	}
	AKA_mark("lis===54###sois===1309###eois===1320###lif===11###soif===333###eoif===344###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'I';
}

//****************************************************************************
/*
	intput : age, distance
 	output: return integer number correspond to given age, distance

  	 Error in function
 	 Number of error: 4
	if age in {4, 14, 15}, distance=10  the function will return unexpected result
	note: replace
	//if(age >= 4 && age <= 14) by 	if(age > 4 && age < 14)
    //if(age >= 15) by 	if(age > 15)
    //if(distance > 10) by if(distance >= 10)
*/

/** Instrumented function getFare(int,int) */
int getFare(int age, int distance)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.getFare.1801.stub"

	AKA_mark("lis===73###sois===1837###eois===1846###lif===2###soif===40###eoif===49###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");int fare;
	if (AKA_mark("lis===75###sois===1882###eois===1901###lif===4###soif===85###eoif===104###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)") && ((AKA_mark("lis===75###sois===1882###eois===1889###lif===4###soif===85###eoif===92###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&age > 4)	&&(AKA_mark("lis===75###sois===1893###eois===1901###lif===4###soif===96###eoif===104###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&age < 14))) {
		if (AKA_mark("lis===78###sois===1939###eois===1953###lif===7###soif===142###eoif===156###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)") && (AKA_mark("lis===78###sois===1939###eois===1953###lif===7###soif===142###eoif===156###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&distance >= 10)) {
			AKA_mark("lis===79###sois===1959###eois===1970###lif===8###soif===162###eoif===173###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");fare = 130;
		}
		else {
			AKA_mark("lis===80###sois===1979###eois===1990###lif===9###soif===182###eoif===193###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");fare = 100;
		}
	}
	else {AKA_mark("lis===-75-###sois===-1882-###eois===-188219-###lif===-4-###soif===-###eoif===-104-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");}
	if (AKA_mark("lis===83###sois===2018###eois===2026###lif===12###soif===221###eoif===229###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)") && (AKA_mark("lis===83###sois===2018###eois===2026###lif===12###soif===221###eoif===229###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&age > 15)) {
		if (AKA_mark("lis===85###sois===2038###eois===2063###lif===14###soif===241###eoif===266###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)") && ((AKA_mark("lis===85###sois===2038###eois===2050###lif===14###soif===241###eoif===253###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&distance <10)	&&(AKA_mark("lis===85###sois===2054###eois===2063###lif===14###soif===257###eoif===266###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&age >= 60))) {
			AKA_mark("lis===86###sois===2069###eois===2080###lif===15###soif===272###eoif===283###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");fare = 160;
		}
		else {
			if (AKA_mark("lis===87###sois===2092###eois===2117###lif===16###soif===295###eoif===320###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)") && ((AKA_mark("lis===87###sois===2092###eois===2105###lif===16###soif===295###eoif===308###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&distance > 10)	&&(AKA_mark("lis===87###sois===2109###eois===2117###lif===16###soif===312###eoif===320###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&age < 60))) {
				AKA_mark("lis===88###sois===2123###eois===2134###lif===17###soif===326###eoif===337###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");fare = 250;
			}
			else {
				AKA_mark("lis===89###sois===2144###eois===2155###lif===18###soif===347###eoif===358###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");fare = 200;
			}
		}
	}
	else {AKA_mark("lis===-83-###sois===-2018-###eois===-20188-###lif===-12-###soif===-###eoif===-229-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");}
	AKA_mark("lis===91###sois===2162###eois===2174###lif===20###soif===365###eoif===377###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");return fare;
}

//****************************************************************************
//Tinh i^j
//D:\OneDrive - Cao Dang Su Pham Trung Uong\NCS\ava\data-test\tsdv\Sample_for_R1_4\r85.cpp
/*Error:
Case 1
Goc: i=0, j=0 thì return -1
Sua: i>=0, j=0 thì return -1
Ví dụ: 2^0=-1

Case 2
Goc: i bat ky, j=1 thi return i
Sua:
i bat ky, j>=1 thi return i
vi du: 2^3=2
* Co 2 loi voi cac bo test
(i >=0; j=0)
(i bat ky, j>=1)

*/

/** Instrumented function i4_power(int,int) */
int i4_power(int i, int j)
//****************************************************************************80
//
//  Purpose:
//
//    I4_POWER returns the value of I^J.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    01 April 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, J, the base and the power.  J should be nonnegative.
//
//    Output, int I4_POWER, the value of I^J.
//
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.i4_power.2621.stub"

	AKA_mark("lis===140###sois===3120###eois===3126###lif===26###soif===503###eoif===509###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");int k;
	AKA_mark("lis===141###sois===3130###eois===3140###lif===27###soif===513###eoif===523###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");int value;
	if (AKA_mark("lis===143###sois===3150###eois===3153###lif===29###soif===533###eoif===536###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (AKA_mark("lis===143###sois===3150###eois===3153###lif===29###soif===533###eoif===536###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&j<0)) {
		if (AKA_mark("lis===145###sois===3169###eois===3173###lif===31###soif===552###eoif===556###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (AKA_mark("lis===145###sois===3169###eois===3173###lif===31###soif===552###eoif===556###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&i==1)) {
			AKA_mark("lis===147###sois===3189###eois===3197###lif===33###soif===572###eoif===580###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value=1;
		}
		else {
			if (AKA_mark("lis===149###sois===3219###eois===3223###lif===35###soif===602###eoif===606###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (AKA_mark("lis===149###sois===3219###eois===3223###lif===35###soif===602###eoif===606###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&i==0)) {
				AKA_mark("lis===155###sois===3395###eois===3405###lif===41###soif===778###eoif===788###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");return -1;
			}
			else {
				AKA_mark("lis===159###sois===3437###eois===3445###lif===45###soif===820###eoif===828###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value=0;
			}
		}
	}
	else {
		if (AKA_mark("lis===162###sois===3470###eois===3474###lif===48###soif===853###eoif===857###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (AKA_mark("lis===162###sois===3470###eois===3474###lif===48###soif===853###eoif===857###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&j==0)) {
			if (AKA_mark("lis===164###sois===3498###eois===3502###lif===50###soif===881###eoif===885###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (AKA_mark("lis===164###sois===3498###eois===3502###lif===50###soif===881###eoif===885###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&i>=0)) {
				AKA_mark("lis===170###sois===3687###eois===3697###lif===56###soif===1070###eoif===1080###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");return -1;
			}
			else {
				AKA_mark("lis===174###sois===3729###eois===3737###lif===60###soif===1112###eoif===1120###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value=1;
			}
		}
		else {
			if (AKA_mark("lis===177###sois===3762###eois===3766###lif===63###soif===1145###eoif===1149###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (AKA_mark("lis===177###sois===3762###eois===3766###lif===63###soif===1145###eoif===1149###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&j>=1)) {
				AKA_mark("lis===179###sois===3796###eois===3804###lif===65###soif===1179###eoif===1187###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value=i;
			}
			else {
				AKA_mark("lis===183###sois===3828###eois===3836###lif===69###soif===1211###eoif===1219###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value=1;
				AKA_mark("lis===184###sois===3847###eois===3851###lif===70###soif===1230###eoif===1234###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");for (k=1;AKA_mark("lis===184###sois===3852###eois===3856###lif===70###soif===1235###eoif===1239###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && AKA_mark("lis===184###sois===3852###eois===3856###lif===70###soif===1235###eoif===1239###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&k<=j;({AKA_mark("lis===184###sois===3858###eois===3861###lif===70###soif===1241###eoif===1244###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");k++;})) {
					AKA_mark("lis===186###sois===3877###eois===3893###lif===72###soif===1260###eoif===1276###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value = value*i;
				}
			}
		}
	}
	AKA_mark("lis===189###sois===3909###eois===3922###lif===75###soif===1292###eoif===1305###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");return value;
}

//****************************************************************************

//Tinh toan cung hoang dao (Zodiac) va du bao
/*
	intput : date, month
 	output: this function return zodiac given date
*/
/** Instrumented function calculateZodiac(int,int) */
int calculateZodiac(int date, int month){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.calculateZodiac.4143.stub"

	AKA_mark("lis===200###sois===4185###eois===4191###lif===1###soif===46###eoif===52###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");int t;
	{
		if (AKA_mark("lis===203###sois===4211###eois===4273###lif===4###soif===72###eoif===134###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===203###sois===4213###eois===4221###lif===4###soif===74###eoif===82###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==3)	&&(AKA_mark("lis===203###sois===4225###eois===4233###lif===4###soif===86###eoif===94###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=21))	&&(AKA_mark("lis===203###sois===4237###eois===4245###lif===4###soif===98###eoif===106###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((AKA_mark("lis===203###sois===4251###eois===4259###lif===4###soif===112###eoif===120###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==4)	&&(AKA_mark("lis===203###sois===4263###eois===4271###lif===4###soif===124###eoif===132###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=19)))) {
			AKA_mark("lis===206###sois===4296###eois===4342###lif===7###soif===157###eoif===203###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t\tYour Zodiac sign is ARIES";
			AKA_mark("lis===207###sois===4353###eois===4460###lif===8###soif===214###eoif===321###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n 2012 would be a good year overall. You will experience a rise in financial luck and inflows";
			AKA_mark("lis===208###sois===4471###eois===4520###lif===9###soif===332###eoif===381###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
			AKA_mark("lis===209###sois===4531###eois===4537###lif===10###soif===392###eoif===398###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 1;
		}
		else {
			if (AKA_mark("lis===212###sois===4565###eois===4627###lif===13###soif===426###eoif===488###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===212###sois===4567###eois===4575###lif===13###soif===428###eoif===436###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==4)	&&(AKA_mark("lis===212###sois===4579###eois===4587###lif===13###soif===440###eoif===448###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=20))	&&(AKA_mark("lis===212###sois===4591###eois===4599###lif===13###soif===452###eoif===460###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=30))	||((AKA_mark("lis===212###sois===4605###eois===4613###lif===13###soif===466###eoif===474###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==5)	&&(AKA_mark("lis===212###sois===4617###eois===4625###lif===13###soif===478###eoif===486###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=20)))) {
				AKA_mark("lis===213###sois===4641###eois===4686###lif===14###soif===502###eoif===547###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is TAURUS";
				AKA_mark("lis===214###sois===4697###eois===4824###lif===15###soif===558###eoif===685###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n A very eventful year. Career would be on a high growth trajectory and bring in major progress and achievements.";
				AKA_mark("lis===215###sois===4835###eois===4884###lif===16###soif===696###eoif===745###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
				AKA_mark("lis===216###sois===4895###eois===4901###lif===17###soif===756###eoif===762###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 2;
			}
			else {
				if (AKA_mark("lis===219###sois===4929###eois===4991###lif===20###soif===790###eoif===852###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===219###sois===4931###eois===4939###lif===20###soif===792###eoif===800###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==5)	&&(AKA_mark("lis===219###sois===4943###eois===4951###lif===20###soif===804###eoif===812###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=21))	&&(AKA_mark("lis===219###sois===4955###eois===4963###lif===20###soif===816###eoif===824###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((AKA_mark("lis===219###sois===4969###eois===4977###lif===20###soif===830###eoif===838###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==6)	&&(AKA_mark("lis===219###sois===4981###eois===4989###lif===20###soif===842###eoif===850###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=20)))) {
					AKA_mark("lis===220###sois===5005###eois===5050###lif===21###soif===866###eoif===911###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is GEMINI";
					AKA_mark("lis===221###sois===5061###eois===5210###lif===22###soif===922###eoif===1071###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA very positive year. Income & professional growth would be immense. You will find the ability to make some very profitable deals now.";
					AKA_mark("lis===222###sois===5221###eois===5270###lif===23###soif===1082###eoif===1131###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
					AKA_mark("lis===223###sois===5281###eois===5287###lif===24###soif===1142###eoif===1148###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 3;
				}
				else {
					if (AKA_mark("lis===226###sois===5315###eois===5377###lif===27###soif===1176###eoif===1238###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===226###sois===5317###eois===5325###lif===27###soif===1178###eoif===1186###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==6)	&&(AKA_mark("lis===226###sois===5329###eois===5337###lif===27###soif===1190###eoif===1198###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=21))	&&(AKA_mark("lis===226###sois===5341###eois===5349###lif===27###soif===1202###eoif===1210###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=30))	||((AKA_mark("lis===226###sois===5355###eois===5363###lif===27###soif===1216###eoif===1224###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==7)	&&(AKA_mark("lis===226###sois===5367###eois===5375###lif===27###soif===1228###eoif===1236###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
						AKA_mark("lis===227###sois===5391###eois===5436###lif===28###soif===1252###eoif===1297###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is CANCER";
						AKA_mark("lis===228###sois===5447###eois===5594###lif===29###soif===1308###eoif===1455###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA very eventful year, although negative thoughts and unnecessary pessimism could spoil your spirit and bring in unnecessary tension.";
						AKA_mark("lis===229###sois===5605###eois===5654###lif===30###soif===1466###eoif===1515###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
						AKA_mark("lis===230###sois===5665###eois===5671###lif===31###soif===1526###eoif===1532###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 4;
					}
					else {
						if (AKA_mark("lis===233###sois===5699###eois===5761###lif===34###soif===1560###eoif===1622###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===233###sois===5701###eois===5709###lif===34###soif===1562###eoif===1570###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==7)	&&(AKA_mark("lis===233###sois===5713###eois===5721###lif===34###soif===1574###eoif===1582###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(AKA_mark("lis===233###sois===5725###eois===5733###lif===34###soif===1586###eoif===1594###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((AKA_mark("lis===233###sois===5739###eois===5747###lif===34###soif===1600###eoif===1608###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==8)	&&(AKA_mark("lis===233###sois===5751###eois===5759###lif===34###soif===1612###eoif===1620###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
							AKA_mark("lis===234###sois===5775###eois===5817###lif===35###soif===1636###eoif===1678###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is LEO";
							AKA_mark("lis===235###sois===5828###eois===5970###lif===36###soif===1689###eoif===1831###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nAn exceptional year again. You will see a rise in status and expansion in career this year too. Luck will favor you throughout.";
							AKA_mark("lis===236###sois===5981###eois===6030###lif===37###soif===1842###eoif===1891###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
							AKA_mark("lis===237###sois===6041###eois===6047###lif===38###soif===1902###eoif===1908###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 5;
						}
						else {
							if (AKA_mark("lis===240###sois===6075###eois===6137###lif===41###soif===1936###eoif===1998###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===240###sois===6077###eois===6085###lif===41###soif===1938###eoif===1946###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==8)	&&(AKA_mark("lis===240###sois===6089###eois===6097###lif===41###soif===1950###eoif===1958###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(AKA_mark("lis===240###sois===6101###eois===6109###lif===41###soif===1962###eoif===1970###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((AKA_mark("lis===240###sois===6115###eois===6123###lif===41###soif===1976###eoif===1984###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==9)	&&(AKA_mark("lis===240###sois===6127###eois===6135###lif===41###soif===1988###eoif===1996###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
								AKA_mark("lis===241###sois===6151###eois===6195###lif===42###soif===2012###eoif===2056###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is VIRGO";
								AKA_mark("lis===242###sois===6206###eois===6344###lif===43###soif===2067###eoif===2205###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA brilliant & positive year, where you will make things happen on your own strength, rather than seeking support of others.";
								AKA_mark("lis===243###sois===6355###eois===6404###lif===44###soif===2216###eoif===2265###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
								AKA_mark("lis===244###sois===6415###eois===6421###lif===45###soif===2276###eoif===2282###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 6;
							}
							else {
								if (AKA_mark("lis===247###sois===6449###eois===6512###lif===48###soif===2310###eoif===2373###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===247###sois===6451###eois===6459###lif===48###soif===2312###eoif===2320###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==9)	&&(AKA_mark("lis===247###sois===6463###eois===6471###lif===48###soif===2324###eoif===2332###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(AKA_mark("lis===247###sois===6475###eois===6483###lif===48###soif===2336###eoif===2344###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=30))	||((AKA_mark("lis===247###sois===6489###eois===6498###lif===48###soif===2350###eoif===2359###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==10)	&&(AKA_mark("lis===247###sois===6502###eois===6510###lif===48###soif===2363###eoif===2371###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
									AKA_mark("lis===248###sois===6526###eois===6570###lif===49###soif===2387###eoif===2431###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is LIBRA";
									AKA_mark("lis===249###sois===6581###eois===6801###lif===50###soif===2442###eoif===2662###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA powerful phase will be in operation this month. You will find your role as defined by nature will change and all efforts and activities carried out by you will assume higher importance and effectiveness.";
									AKA_mark("lis===250###sois===6812###eois===6861###lif===51###soif===2673###eoif===2722###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
									AKA_mark("lis===251###sois===6872###eois===6878###lif===52###soif===2733###eoif===2739###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 7;
								}
								else {
									if (AKA_mark("lis===254###sois===6906###eois===6970###lif===55###soif===2767###eoif===2831###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===254###sois===6908###eois===6917###lif===55###soif===2769###eoif===2778###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==10)	&&(AKA_mark("lis===254###sois===6921###eois===6929###lif===55###soif===2782###eoif===2790###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(AKA_mark("lis===254###sois===6933###eois===6941###lif===55###soif===2794###eoif===2802###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((AKA_mark("lis===254###sois===6947###eois===6956###lif===55###soif===2808###eoif===2817###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==11)	&&(AKA_mark("lis===254###sois===6960###eois===6968###lif===55###soif===2821###eoif===2829###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=21)))) {
										AKA_mark("lis===255###sois===6984###eois===7030###lif===56###soif===2845###eoif===2891###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is SCORPIO";
										AKA_mark("lis===256###sois===7041###eois===7181###lif===57###soif===2902###eoif===3042###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nPositive period would continue, although you need to be careful that throwing good money after bad money is not a great idea.";
										AKA_mark("lis===257###sois===7192###eois===7241###lif===58###soif===3053###eoif===3102###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
										AKA_mark("lis===258###sois===7252###eois===7258###lif===59###soif===3113###eoif===3119###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 8;
									}
									else {
										if (AKA_mark("lis===261###sois===7286###eois===7350###lif===62###soif===3147###eoif===3211###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===261###sois===7288###eois===7297###lif===62###soif===3149###eoif===3158###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==11)	&&(AKA_mark("lis===261###sois===7301###eois===7309###lif===62###soif===3162###eoif===3170###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=22))	&&(AKA_mark("lis===261###sois===7313###eois===7321###lif===62###soif===3174###eoif===3182###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((AKA_mark("lis===261###sois===7327###eois===7336###lif===62###soif===3188###eoif===3197###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==12)	&&(AKA_mark("lis===261###sois===7340###eois===7348###lif===62###soif===3201###eoif===3209###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=21)))) {
											AKA_mark("lis===262###sois===7364###eois===7414###lif===63###soif===3225###eoif===3275###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is SAGITTARIUS";
											AKA_mark("lis===263###sois===7425###eois===7659###lif===64###soif===3286###eoif===3520###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n2012 brings in promise and progress. New ideas and cerebral approach to matters will bring in much progress this year. You will be at your creative best till May 2012 and thereafter dynamic activity will take you along.";
											AKA_mark("lis===264###sois===7670###eois===7719###lif===65###soif===3531###eoif===3580###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
											AKA_mark("lis===265###sois===7730###eois===7736###lif===66###soif===3591###eoif===3597###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 9;
										}
										else {
											if (AKA_mark("lis===268###sois===7764###eois===7827###lif===69###soif===3625###eoif===3688###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===268###sois===7766###eois===7775###lif===69###soif===3627###eoif===3636###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==12)	&&(AKA_mark("lis===268###sois===7779###eois===7787###lif===69###soif===3640###eoif===3648###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=22))	&&(AKA_mark("lis===268###sois===7791###eois===7799###lif===69###soif===3652###eoif===3660###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=30))	||((AKA_mark("lis===268###sois===7805###eois===7813###lif===69###soif===3666###eoif===3674###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==1)	&&(AKA_mark("lis===268###sois===7817###eois===7825###lif===69###soif===3678###eoif===3686###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=19)))) {
												AKA_mark("lis===269###sois===7841###eois===7889###lif===70###soif===3702###eoif===3750###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is CAPRICORN";
												AKA_mark("lis===270###sois===7900###eois===8036###lif===71###soif===3761###eoif===3897###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA very positive year for you. You would be at your creative best and luck related peak in most of the works you get into.";
												AKA_mark("lis===271###sois===8047###eois===8096###lif===72###soif===3908###eoif===3957###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
												AKA_mark("lis===272###sois===8107###eois===8114###lif===73###soif===3968###eoif===3975###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 10;
											}
											else {
												if (AKA_mark("lis===275###sois===8142###eois===8204###lif===76###soif===4003###eoif===4065###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===275###sois===8144###eois===8152###lif===76###soif===4005###eoif===4013###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==1)	&&(AKA_mark("lis===275###sois===8156###eois===8164###lif===76###soif===4017###eoif===4025###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=20))	&&(AKA_mark("lis===275###sois===8168###eois===8176###lif===76###soif===4029###eoif===4037###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((AKA_mark("lis===275###sois===8182###eois===8190###lif===76###soif===4043###eoif===4051###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==2)	&&(AKA_mark("lis===275###sois===8194###eois===8202###lif===76###soif===4055###eoif===4063###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=18)))) {
													AKA_mark("lis===276###sois===8218###eois===8265###lif===77###soif===4079###eoif===4126###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is AQUARIUS";
													AKA_mark("lis===277###sois===8276###eois===8427###lif===78###soif===4137###eoif===4288###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA much better year in comparison to 2010 & 2011. You will feel a surge in your luck, productivity and general sense of positive outlook.";
													AKA_mark("lis===278###sois===8438###eois===8487###lif===79###soif===4299###eoif===4348###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
													AKA_mark("lis===279###sois===8498###eois===8505###lif===80###soif===4359###eoif===4366###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 11;
												}
												else {
													if (AKA_mark("lis===282###sois===8533###eois===8595###lif===83###soif===4394###eoif===4456###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((AKA_mark("lis===282###sois===8535###eois===8543###lif===83###soif===4396###eoif===4404###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==2)	&&(AKA_mark("lis===282###sois===8547###eois===8555###lif===83###soif===4408###eoif===4416###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=19))	&&(AKA_mark("lis===282###sois===8559###eois===8567###lif===83###soif===4420###eoif===4428###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=29))	||((AKA_mark("lis===282###sois===8573###eois===8581###lif===83###soif===4434###eoif===4442###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==3)	&&(AKA_mark("lis===282###sois===8585###eois===8593###lif===83###soif===4446###eoif===4454###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=20)))) {
														AKA_mark("lis===283###sois===8609###eois===8654###lif===84###soif===4470###eoif===4515###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is PISCES";
														AKA_mark("lis===284###sois===8665###eois===8810###lif===85###soif===4526###eoif===4671###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nSome amount of struggle and hurdles could come about in life this year. You will have a positive and gainful period till May 2012.";
														AKA_mark("lis===285###sois===8821###eois===8870###lif===86###soif===4682###eoif===4731###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
														AKA_mark("lis===286###sois===8881###eois===8888###lif===87###soif===4742###eoif===4749###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 12;
													}
													else {
														AKA_mark("lis===290###sois===8924###eois===8931###lif===91###soif===4785###eoif===4792###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = -1;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	AKA_mark("lis===295###sois===8955###eois===8964###lif===96###soif===4816###eoif===4825###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");return t;
}

//****************************************************************************
//GCD(int, int)
/*
	intput : integer number m, n
 	output: return integer number correspond to GCD(m,n)
*/
/** Instrumented function GCD(int,int) */
int GCD(int m, int n)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.GCD.9167.stub"

	if (AKA_mark("lis===306###sois===9194###eois===9197###lif===2###soif===31###eoif===34###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (AKA_mark("lis===306###sois===9194###eois===9197###lif===2###soif===31###eoif===34###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&m<0)) {
		AKA_mark("lis===306###sois===9199###eois===9204###lif===2###soif===36###eoif===41###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");m=-m;
	}
	else {AKA_mark("lis===-306-###sois===-9194-###eois===-91943-###lif===-2-###soif===-###eoif===-34-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");}
	if (AKA_mark("lis===307###sois===9211###eois===9214###lif===3###soif===48###eoif===51###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (AKA_mark("lis===307###sois===9211###eois===9214###lif===3###soif===48###eoif===51###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&n<0)) {
		AKA_mark("lis===307###sois===9216###eois===9221###lif===3###soif===53###eoif===58###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");n=-n;
	}
	else {AKA_mark("lis===-307-###sois===-9211-###eois===-92113-###lif===-3-###soif===-###eoif===-51-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");}
	if (AKA_mark("lis===308###sois===9228###eois===9232###lif===4###soif===65###eoif===69###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (AKA_mark("lis===308###sois===9228###eois===9232###lif===4###soif===65###eoif===69###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&m==0)) {
		AKA_mark("lis===308###sois===9234###eois===9243###lif===4###soif===71###eoif===80###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");return n;
	}
	else {AKA_mark("lis===-308-###sois===-9228-###eois===-92284-###lif===-4-###soif===-###eoif===-69-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");}
	if (AKA_mark("lis===309###sois===9250###eois===9254###lif===5###soif===87###eoif===91###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (AKA_mark("lis===309###sois===9250###eois===9254###lif===5###soif===87###eoif===91###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&n==0)) {
		AKA_mark("lis===309###sois===9256###eois===9265###lif===5###soif===93###eoif===102###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");return m;
	}
	else {AKA_mark("lis===-309-###sois===-9250-###eois===-92504-###lif===-5-###soif===-###eoif===-91-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");}
	while (AKA_mark("lis===310###sois===9275###eois===9279###lif===6###soif===112###eoif===116###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (AKA_mark("lis===310###sois===9275###eois===9279###lif===6###soif===112###eoif===116###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&m!=n)) {
		if (AKA_mark("lis===311###sois===9288###eois===9291###lif===7###soif===125###eoif===128###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (AKA_mark("lis===311###sois===9288###eois===9291###lif===7###soif===125###eoif===128###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&m>n)) {
			AKA_mark("lis===311###sois===9293###eois===9299###lif===7###soif===130###eoif===136###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");m=m-n;
		}
		else {
			AKA_mark("lis===312###sois===9308###eois===9314###lif===8###soif===145###eoif===151###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");n=n-m;
		}
	}
	AKA_mark("lis===313###sois===9317###eois===9326###lif===9###soif===154###eoif===163###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");return m;
}

//****************************************************************************

/*
http://pathcrawler-online.com:8080/#
Example 1

          /* Should return the type of the triangle
	input: 3 integer values correspond to 3 edges of a Triangle.
   	output: Should return the type of the triangle
   	which has sides of these lengths
   	3 = not a triangle
   	2 = equilateral triangle
   	1 = isoceles triangle
   	0 = other triangle


   Error in function
   Number of errors: 3
   There are 2 mistakes in line 5. if i,j,k are all equal or greater than 0 and (j+k=i or k+i = j) ,the function will return unexpected result
   At line 7, if got condition at line 7, but i==j, the function may also return unexpected result

*/

/** Instrumented function Tritype(double,double,double) */
int Tritype(double i, double j, double k){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.Tritype.10087.stub"

	AKA_mark("lis===341###sois===10216###eois===10231###lif===2###soif===133###eoif===148###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");int trityp = 0;
	if (AKA_mark("lis===342###sois===10255###eois===10284###lif===3###soif===172###eoif===201###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (((AKA_mark("lis===342###sois===10255###eois===10262###lif===3###soif===172###eoif===179###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&i < 0.0)	||(AKA_mark("lis===342###sois===10266###eois===10273###lif===3###soif===183###eoif===190###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&j < 0.0))	||(AKA_mark("lis===342###sois===10277###eois===10284###lif===3###soif===194###eoif===201###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&k < 0.0))) {
		AKA_mark("lis===343###sois===10304###eois===10313###lif===4###soif===221###eoif===230###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");return 3;
	}
	else {AKA_mark("lis===-342-###sois===-10255-###eois===-1025529-###lif===-3-###soif===-###eoif===-201-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");}
	if (AKA_mark("lis===344###sois===10338###eois===10374###lif===5###soif===255###eoif===291###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (((AKA_mark("lis===344###sois===10338###eois===10348###lif===5###soif===255###eoif===265###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&i + j <= k)	||(AKA_mark("lis===344###sois===10352###eois===10361###lif===5###soif===269###eoif===278###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&j + k < i))	||(AKA_mark("lis===344###sois===10365###eois===10374###lif===5###soif===282###eoif===291###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&k + i < j))) {
		AKA_mark("lis===345###sois===10434###eois===10443###lif===6###soif===351###eoif===360###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");return 3;
	}
	else {AKA_mark("lis===-344-###sois===-10338-###eois===-1033836-###lif===-5-###soif===-###eoif===-291-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");}
	if (AKA_mark("lis===346###sois===10468###eois===10473###lif===7###soif===385###eoif===390###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (AKA_mark("lis===346###sois===10468###eois===10473###lif===7###soif===385###eoif===390###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&i > j)) {
		AKA_mark("lis===346###sois===10475###eois===10495###lif===7###soif===392###eoif===412###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");trityp = trityp + 1;
	}
	else {AKA_mark("lis===-346-###sois===-10468-###eois===-104685-###lif===-7-###soif===-###eoif===-390-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");}
	if (AKA_mark("lis===347###sois===10550###eois===10556###lif===8###soif===467###eoif===473###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (AKA_mark("lis===347###sois===10550###eois===10556###lif===8###soif===467###eoif===473###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&i == k)) {
		AKA_mark("lis===347###sois===10558###eois===10578###lif===8###soif===475###eoif===495###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");trityp = trityp + 1;
	}
	else {AKA_mark("lis===-347-###sois===-10550-###eois===-105506-###lif===-8-###soif===-###eoif===-473-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");}
	if (AKA_mark("lis===348###sois===10599###eois===10605###lif===9###soif===516###eoif===522###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (AKA_mark("lis===348###sois===10599###eois===10605###lif===9###soif===516###eoif===522###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&j == k)) {
		AKA_mark("lis===348###sois===10607###eois===10627###lif===9###soif===524###eoif===544###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");trityp = trityp + 1;
	}
	else {AKA_mark("lis===-348-###sois===-10599-###eois===-105996-###lif===-9-###soif===-###eoif===-522-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");}
	if (AKA_mark("lis===349###sois===10648###eois===10658###lif===10###soif===565###eoif===575###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (AKA_mark("lis===349###sois===10648###eois===10658###lif===10###soif===565###eoif===575###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&trityp >=2)) {
		AKA_mark("lis===350###sois===10682###eois===10693###lif===11###soif===599###eoif===610###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");trityp = 2;
	}
	else {AKA_mark("lis===-349-###sois===-10648-###eois===-1064810-###lif===-10-###soif===-###eoif===-575-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");}
	AKA_mark("lis===351###sois===10715###eois===10729###lif===12###soif===632###eoif===646###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");return trityp;
}


//****************************************************************************
/* Phan loai dua theo Math va English
Type A: Math + English >=180 and Math >= 50 && English>=60
Type B: Math >= 80 || English >=90 and Math >=50 && English>=60
Type C:  Math>=50 and English>=60  and not in Type A, Type B
Type D: Other
Code:
Add error at boundary,
	Math > 50 && English >60  thay vi Math >= 50 && English >=60
	Math > 80 || English >90 thay vi Math >= 80 || English >=90
Dead code:  if (Math + English >=180) return 'A';
	Khong bao gio tra ve type 'A'

*/
/** Instrumented function MathAndEnglishGrade(int,int) */
char  MathAndEnglishGrade (int Math, int English)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.MathAndEnglishGrade.11329.stub"

	if (AKA_mark("lis===373###sois===11479###eois===11500###lif===4###soif===156###eoif===177###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)") && ((AKA_mark("lis===373###sois===11479###eois===11486###lif===4###soif===156###eoif===163###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)")&&Math>50)	&&(AKA_mark("lis===373###sois===11490###eois===11500###lif===4###soif===167###eoif===177###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)")&&English>60))) {
		if (AKA_mark("lis===376###sois===11548###eois===11569###lif===7###soif===225###eoif===246###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)") && ((AKA_mark("lis===376###sois===11548###eois===11555###lif===7###soif===225###eoif===232###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)")&&Math>80)	||(AKA_mark("lis===376###sois===11559###eois===11569###lif===7###soif===236###eoif===246###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)")&&English>90))) {
			AKA_mark("lis===378###sois===11580###eois===11591###lif===9###soif===257###eoif===268###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)");return 'B';
		}
		else {
			if (AKA_mark("lis===382###sois===11618###eois===11637###lif===13###soif===295###eoif===314###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)") && (AKA_mark("lis===382###sois===11618###eois===11637###lif===13###soif===295###eoif===314###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)")&&Math + English>=180)) {
				AKA_mark("lis===384###sois===11650###eois===11661###lif===15###soif===327###eoif===338###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)");return 'A';
			}
			else {
				AKA_mark("lis===388###sois===11691###eois===11702###lif===19###soif===368###eoif===379###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)");return 'C';
			}
		}
	}
	else {AKA_mark("lis===-373-###sois===-11479-###eois===-1147921-###lif===-4-###soif===-###eoif===-177-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)");}
	AKA_mark("lis===392###sois===11726###eois===11737###lif===23###soif===403###eoif===414###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade(int,int)");return 'D';
}

//****************************************************************************

/*
 input: a,b,c
 Should return 1, if a,b,c represent a Triangle, otherwise return 0;
 Detail: a<b+c && b<a+c && c<a+b, EO: 1
 		otherwise, EO: 0

 Error in function
 Number of errors: 1
 if a=b+c or b= a+c, the function will return unexpected result
 Bo test a=b=1, c=0 se tim ra loi
*/

/** Instrumented function isTriangle(int,int,int) */
int isTriangle(int a, int b, int c){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.isTriangle.12131.stub"

	if (AKA_mark("lis===410###sois===12169###eois===12202###lif===1###soif===42###eoif===75###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)") && (((AKA_mark("lis===410###sois===12170###eois===12176###lif===1###soif===43###eoif===49###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)")&&a<=b+c)	&&(AKA_mark("lis===410###sois===12182###eois===12188###lif===1###soif===55###eoif===61###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)")&&b<=a+c))	&&(AKA_mark("lis===410###sois===12194###eois===12201###lif===1###soif===67###eoif===74###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)")&&c < a+b))) {
		AKA_mark("lis===411###sois===12208###eois===12217###lif===2###soif===81###eoif===90###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)");return 1;
	}
	else {
		AKA_mark("lis===413###sois===12229###eois===12238###lif===4###soif===102###eoif===111###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)");return 0;
	}
}
//****************************************************************************
/*
    https://www.geeksforgeeks.org/program-check-given-year-leap-year/
    	input: year
    	The function should return 1 if year is leap year, otherwise returns 0

    	Error in function
    	Number of errors: 1
    	There is a mistake at line 2, if not ( year%4=0 and year%100!=0) and year%400==0, the function will return unexpected result
*/
	//Đieu kien đung year % 4 ==0 && year % 100!=0 && year % 4!=0
    //Da thay dau && thanh dau ||

/** Instrumented function leapYear(int) */
int leapYear(int year){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.leapYear.12785.stub"

	if (AKA_mark("lis===429###sois===12820###eois===12879###lif===1###soif===39###eoif===98###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)") && (((AKA_mark("lis===429###sois===12822###eois===12835###lif===1###soif===41###eoif===54###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)")&&year % 4 == 0)	&&(AKA_mark("lis===429###sois===12841###eois===12856###lif===1###soif===60###eoif===75###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)")&&year % 100 != 0))	||(AKA_mark("lis===429###sois===12863###eois===12878###lif===1###soif===82###eoif===97###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)")&&year % 400 != 0))) {
		AKA_mark("lis===430###sois===12885###eois===12894###lif===2###soif===104###eoif===113###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)");return 1;
	}
	else {AKA_mark("lis===-429-###sois===-12820-###eois===-1282059-###lif===-1-###soif===-###eoif===-98-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)");}
	AKA_mark("lis===432###sois===12933###eois===12942###lif===4###soif===152###eoif===161###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)");return 0;
}
//****************************************************************************

/*
	input: x,minn,maxx
	Should return  probability density function of the continuous uniform distribution
	if maxx<minn or maxx=minn or x = maxx or x = minn the function may will return unexpected result
*/

/** Instrumented function PDF(int,int,int) */
float PDF(int x, int minn, int maxx){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.PDF.13264.stub"

	if (AKA_mark("lis===444###sois===13301###eois===13323###lif===1###soif===43###eoif===65###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)") && ((AKA_mark("lis===444###sois===13301###eois===13310###lif===1###soif===43###eoif===52###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)")&&x <= minn)	||(AKA_mark("lis===444###sois===13314###eois===13323###lif===1###soif===56###eoif===65###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)")&&x >= maxx))) {
		AKA_mark("lis===445###sois===13329###eois===13338###lif===2###soif===71###eoif===80###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)");return 0;
	}
	else {AKA_mark("lis===-444-###sois===-13301-###eois===-1330122-###lif===-1-###soif===-###eoif===-65-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)");}
	AKA_mark("lis===447###sois===13345###eois===13366###lif===4###soif===87###eoif===108###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)");return 1/(maxx-minn);
}

//****************************************************************************
/*
 	input: interger number a,b,c,d
 	output: float number
 Error:
 	Function may will return unexpected result if a>0
 */

/** Instrumented function foo(int,int,int,int) */
float foo(int a, int b, int c, int d)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.foo.13590.stub"

	AKA_mark("lis===460###sois===13627###eois===13635###lif===2###soif===43###eoif===51###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");float e;
	if (AKA_mark("lis===461###sois===13641###eois===13647###lif===3###soif===57###eoif===63###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)") && (AKA_mark("lis===461###sois===13641###eois===13647###lif===3###soif===57###eoif===63###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)")&&a >= 0)) {
		AKA_mark("lis===461###sois===13649###eois===13658###lif===3###soif===65###eoif===74###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");return 0;
	}
	else {AKA_mark("lis===-461-###sois===-13641-###eois===-136416-###lif===-3-###soif===-###eoif===-63-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");}
	AKA_mark("lis===462###sois===13718###eois===13726###lif===4###soif===134###eoif===142###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");int x=0;
	if (AKA_mark("lis===463###sois===13732###eois===13746###lif===5###soif===148###eoif===162###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)") && ((AKA_mark("lis===463###sois===13733###eois===13737###lif===5###soif===149###eoif===153###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)")&&a==b)	||(AKA_mark("lis===463###sois===13741###eois===13745###lif===5###soif===157###eoif===161###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)")&&c==d))) {
		AKA_mark("lis===464###sois===13751###eois===13755###lif===6###soif===167###eoif===171###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");x=1;
	}
	else {AKA_mark("lis===-463-###sois===-13732-###eois===-1373214-###lif===-5-###soif===-###eoif===-162-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");}
	AKA_mark("lis===465###sois===13758###eois===13764###lif===7###soif===174###eoif===180###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");e=1/x;
	AKA_mark("lis===466###sois===13767###eois===13776###lif===8###soif===183###eoif===192###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");return e;
}

//****************************************************************************

/*
 	input: day, month, year
 	output:
 	Tinh so ngay la khoang thoi gian tu ngay 01/01/1900 den ngay day/month/year

 Error:
 	Cay loi tai dieu kien if (year==1990) thanh if (year>1900)
    Khi Year>1900 thi cho ket qua khong mong muon, cau lenh if(year>1900 khong thuc hien

 */
/** Instrumented function ConvertDateToNumber(int,int,int) */
long ConvertDateToNumber(int day, int month, int year)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.ConvertDateToNumber.14161.stub"

	AKA_mark("lis===483###sois===14215###eois===14270###lif===2###soif===59###eoif===114###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");int ngay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	AKA_mark("lis===484###sois===14272###eois===14282###lif===3###soif===116###eoif===126###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");long s, i;
	AKA_mark("lis===488###sois===14294###eois===14298###lif===7###soif===138###eoif===142###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");s=0;
	if (AKA_mark("lis===489###sois===14304###eois===14315###lif===8###soif===148###eoif===159###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)") && (AKA_mark("lis===489###sois===14304###eois===14315###lif===8###soif===148###eoif===159###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&year > 1900)) {
		AKA_mark("lis===491###sois===14322###eois===14330###lif===10###soif===166###eoif===174###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");s=s+day;
		AKA_mark("lis===492###sois===14338###eois===14342###lif===11###soif===182###eoif===186###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");for (i=0;AKA_mark("lis===492###sois===14343###eois===14352###lif===11###soif===187###eoif===196###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)") && AKA_mark("lis===492###sois===14343###eois===14352###lif===11###soif===187###eoif===196###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&i < month;({AKA_mark("lis===492###sois===14354###eois===14357###lif===11###soif===198###eoif===201###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");i++;})) {
			AKA_mark("lis===492###sois===14359###eois===14371###lif===11###soif===203###eoif===215###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");s=s+ngay[i];
		}
	}
	else {
		if (AKA_mark("lis===495###sois===14387###eois===14396###lif===14###soif===231###eoif===240###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)") && (AKA_mark("lis===495###sois===14387###eois===14396###lif===14###soif===231###eoif===240###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&year>1900)) {
			AKA_mark("lis===497###sois===14405###eois===14413###lif===16###soif===249###eoif===257###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");s=s+day;
			AKA_mark("lis===498###sois===14417###eois===14438###lif===17###soif===261###eoif===282###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");s= s+(year-1900)*365;
			AKA_mark("lis===499###sois===14447###eois===14454###lif===18###soif===291###eoif===298###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");for (i=1900;AKA_mark("lis===499###sois===14455###eois===14464###lif===18###soif===299###eoif===308###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)") && AKA_mark("lis===499###sois===14455###eois===14464###lif===18###soif===299###eoif===308###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&i <= year;({AKA_mark("lis===499###sois===14466###eois===14469###lif===18###soif===310###eoif===313###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");i++;})) {
				if (AKA_mark("lis===500###sois===14479###eois===14513###lif===19###soif===323###eoif===357###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)") && (((AKA_mark("lis===500###sois===14481###eois===14487###lif===19###soif===325###eoif===331###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&i%4==0)	&&(AKA_mark("lis===500###sois===14491###eois===14499###lif===19###soif===335###eoif===343###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&i%100!=0))	||(AKA_mark("lis===500###sois===14504###eois===14512###lif===19###soif===348###eoif===356###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&i%400==0))) {
					AKA_mark("lis===500###sois===14515###eois===14521###lif===19###soif===359###eoif===365###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");s=s+1;
				}
				else {AKA_mark("lis===-500-###sois===-14479-###eois===-1447934-###lif===-19-###soif===-###eoif===-357-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");}
			}
			AKA_mark("lis===501###sois===14530###eois===14534###lif===20###soif===374###eoif===378###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");for (i=0;AKA_mark("lis===501###sois===14535###eois===14544###lif===20###soif===379###eoif===388###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)") && AKA_mark("lis===501###sois===14535###eois===14544###lif===20###soif===379###eoif===388###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&i < month;({AKA_mark("lis===501###sois===14546###eois===14549###lif===20###soif===390###eoif===393###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");i++;})) {
				AKA_mark("lis===503###sois===14560###eois===14573###lif===22###soif===404###eoif===417###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");s= s+ngay[i];
				if (AKA_mark("lis===504###sois===14582###eois===14624###lif===23###soif===426###eoif===468###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)") && ((((AKA_mark("lis===504###sois===14584###eois===14590###lif===23###soif===428###eoif===434###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&i%4==0)	&&(AKA_mark("lis===504###sois===14594###eois===14602###lif===23###soif===438###eoif===446###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&i%100!=0))	||(AKA_mark("lis===504###sois===14606###eois===14614###lif===23###soif===450###eoif===458###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&i%400==0))	&&(AKA_mark("lis===504###sois===14619###eois===14623###lif===23###soif===463###eoif===467###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)")&&i==2))) {
					AKA_mark("lis===504###sois===14626###eois===14632###lif===23###soif===470###eoif===476###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");s=s+1;
				}
				else {AKA_mark("lis===-504-###sois===-14582-###eois===-1458242-###lif===-23-###soif===-###eoif===-468-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");}
			}
		}
		else {AKA_mark("lis===-495-###sois===-14387-###eois===-143879-###lif===-14-###soif===-###eoif===-240-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");}
	}
	AKA_mark("lis===507###sois===14643###eois===14652###lif===26###soif===487###eoif===496###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConvertDateToNumber(int,int,int)");return s;
}

//****************************************************************************
/*
 	input: hour, minute, second
 	output: Total seconds from 0:0:0 to hour:minute:second
  Error:
 	Cay loi tai dieu kien if (year==1990) thanh if (year>1900)
    Khi Year>1900 thi cho ket qua khong mong muon, cau lenh if(year>1900 khong thuc hien
 */

/** Instrumented function CountSecond(int,int,int) */
long CountSecond(int hour, int minute, int second)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CountSecond.15006.stub"

	AKA_mark("lis===521###sois===15056###eois===15063###lif===2###soif===55###eoif===62###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)");long s;
	AKA_mark("lis===524###sois===15246###eois===15251###lif===5###soif===245###eoif===250###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)");s=-1;
	if (AKA_mark("lis===525###sois===15257###eois===15324###lif===6###soif===256###eoif===323###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)") && ((((((AKA_mark("lis===525###sois===15257###eois===15263###lif===6###soif===256###eoif===262###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&hour>0)	&&(AKA_mark("lis===525###sois===15267###eois===15275###lif===6###soif===266###eoif===274###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&minute>0))	&&(AKA_mark("lis===525###sois===15279###eois===15287###lif===6###soif===278###eoif===286###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&second>0))	&&(AKA_mark("lis===525###sois===15291###eois===15298###lif===6###soif===290###eoif===297###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&hour<24))	&&(AKA_mark("lis===525###sois===15302###eois===15311###lif===6###soif===301###eoif===310###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&minute<60))	&&(AKA_mark("lis===525###sois===15315###eois===15324###lif===6###soif===314###eoif===323###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&second<60))) {
		AKA_mark("lis===526###sois===15328###eois===15357###lif===7###soif===327###eoif===356###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)");s=hour*3600+minute*60+second;
	}
	else {AKA_mark("lis===-525-###sois===-15257-###eois===-1525767-###lif===-6-###soif===-###eoif===-323-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)");}
	AKA_mark("lis===527###sois===15359###eois===15368###lif===8###soif===358###eoif===367###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)");return s;
}

//****************************************************************************

/*
Kiem tra 3 so nhap vao co tao thanh ngay thang hop le khong
 	input: day, month, year
 	output: return 1 if valid date; return 0 if invalid date
   Error:         replace if (day>=1 && month>=1 && year>=1 && day<=31 && month<=12 && year<=2020) --> 6 loi
   by if (day>1 && month>1 && year>1 && day<31 && month<12 && year<2020)
 */
 /** Instrumented function CheckValidDate(int,int,int) */
int CheckValidDate(int day, int month, int year){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CheckValidDate.15803.stub"

	if (AKA_mark("lis===541###sois===15958###eois===16019###lif===2###soif===159###eoif===220###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)") && ((((((AKA_mark("lis===541###sois===15958###eois===15963###lif===2###soif===159###eoif===164###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day>1)	&&(AKA_mark("lis===541###sois===15967###eois===15974###lif===2###soif===168###eoif===175###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month>1))	&&(AKA_mark("lis===541###sois===15978###eois===15984###lif===2###soif===179###eoif===185###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&year>1))	&&(AKA_mark("lis===541###sois===15988###eois===15994###lif===2###soif===189###eoif===195###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day<31))	&&(AKA_mark("lis===541###sois===15998###eois===16006###lif===2###soif===199###eoif===207###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month<12))	&&(AKA_mark("lis===541###sois===16010###eois===16019###lif===2###soif===211###eoif===220###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&year<2020))) {
		if (AKA_mark("lis===542###sois===16029###eois===16126###lif===3###soif===230###eoif===327###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)") && ((((((((AKA_mark("lis===542###sois===16030###eois===16038###lif===3###soif===231###eoif===239###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==1)	||(AKA_mark("lis===542###sois===16042###eois===16050###lif===3###soif===243###eoif===251###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==3))	||(AKA_mark("lis===542###sois===16054###eois===16062###lif===3###soif===255###eoif===263###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==5))	||(AKA_mark("lis===542###sois===16066###eois===16074###lif===3###soif===267###eoif===275###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==7))	||(AKA_mark("lis===542###sois===16078###eois===16086###lif===3###soif===279###eoif===287###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==8))	||(AKA_mark("lis===542###sois===16090###eois===16099###lif===3###soif===291###eoif===300###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==10))	||(AKA_mark("lis===542###sois===16103###eois===16112###lif===3###soif===304###eoif===313###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==12))	&&(AKA_mark("lis===542###sois===16118###eois===16125###lif===3###soif===319###eoif===326###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day<=31))) {
			AKA_mark("lis===542###sois===16129###eois===16138###lif===3###soif===330###eoif===339###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");return 1;
		}
		else {AKA_mark("lis===-542-###sois===-16029-###eois===-1602997-###lif===-3-###soif===-###eoif===-327-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");}
		if (AKA_mark("lis===543###sois===16146###eois===16205###lif===4###soif===347###eoif===406###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)") && (((((AKA_mark("lis===543###sois===16147###eois===16155###lif===4###soif===348###eoif===356###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==4)	||(AKA_mark("lis===543###sois===16159###eois===16167###lif===4###soif===360###eoif===368###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==6))	||(AKA_mark("lis===543###sois===16171###eois===16179###lif===4###soif===372###eoif===380###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==9))	||(AKA_mark("lis===543###sois===16182###eois===16191###lif===4###soif===383###eoif===392###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==11))	&&(AKA_mark("lis===543###sois===16197###eois===16204###lif===4###soif===398###eoif===405###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day<=30))) {
			AKA_mark("lis===543###sois===16207###eois===16216###lif===4###soif===408###eoif===417###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");return 1;
		}
		else {AKA_mark("lis===-543-###sois===-16146-###eois===-1614659-###lif===-4-###soif===-###eoif===-406-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");}
		if (AKA_mark("lis===544###sois===16224###eois===16246###lif===5###soif===425###eoif===447###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)") && ((AKA_mark("lis===544###sois===16225###eois===16233###lif===5###soif===426###eoif===434###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==2)	&&(AKA_mark("lis===544###sois===16239###eois===16245###lif===5###soif===440###eoif===446###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day<28))) {
			AKA_mark("lis===544###sois===16249###eois===16258###lif===5###soif===450###eoif===459###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");return 1;
		}
		else {AKA_mark("lis===-544-###sois===-16224-###eois===-1622422-###lif===-5-###soif===-###eoif===-447-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");}
		if (AKA_mark("lis===545###sois===16279###eois===16334###lif===6###soif===480###eoif===535###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)") && ((((AKA_mark("lis===545###sois===16280###eois===16288###lif===6###soif===481###eoif===489###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==2)	&&(AKA_mark("lis===545###sois===16294###eois===16301###lif===6###soif===495###eoif===502###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day==29))	&&(AKA_mark("lis===545###sois===16307###eois===16316###lif===6###soif===508###eoif===517###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&year%4==0))	&&(AKA_mark("lis===545###sois===16320###eois===16333###lif===6###soif===521###eoif===534###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&year%400 != 0))) {
			AKA_mark("lis===545###sois===16336###eois===16345###lif===6###soif===537###eoif===546###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");return 1;
		}
		else {AKA_mark("lis===-545-###sois===-16279-###eois===-1627955-###lif===-6-###soif===-###eoif===-535-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");}
	}
	else {AKA_mark("lis===-541-###sois===-15958-###eois===-1595861-###lif===-2-###soif===-###eoif===-220-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");}
	AKA_mark("lis===547###sois===16350###eois===16359###lif===8###soif===551###eoif===560###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");return 0;
}
//****************************************************************************
/*
Kiem tra 3 so nhap vao co tao thanh thoi gia hop le khong
 	input: hour, minute, second
 	output: return 1 if valid time; return 0 if invalid time
   Error: replace if ((hour>=0 && hour<=23) && (minute>=0 && minute<=59) && (second>=0 && second<=59))  bo tat ca dau bang "=" trong dieu kien don
   by if (hour>0 && hour<23 && minute>0 && minute<59 && second>0 && second<59)
 */

/** Instrumented function CheckValidTime(int,int,int) */
int CheckValidTime(int hour, int minute, int second)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CheckValidTime.16837.stub"

	if (AKA_mark("lis===560###sois===16894###eois===16961###lif===2###soif===61###eoif===128###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)") && ((((((AKA_mark("lis===560###sois===16894###eois===16900###lif===2###soif===61###eoif===67###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&hour>0)	&&(AKA_mark("lis===560###sois===16904###eois===16911###lif===2###soif===71###eoif===78###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&hour<23))	&&(AKA_mark("lis===560###sois===16915###eois===16923###lif===2###soif===82###eoif===90###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&minute>0))	&&(AKA_mark("lis===560###sois===16927###eois===16936###lif===2###soif===94###eoif===103###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&minute<59))	&&(AKA_mark("lis===560###sois===16940###eois===16948###lif===2###soif===107###eoif===115###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&second>0))	&&(AKA_mark("lis===560###sois===16952###eois===16961###lif===2###soif===119###eoif===128###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&second<59))) {
		AKA_mark("lis===560###sois===16963###eois===16972###lif===2###soif===130###eoif===139###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)");return 1;
	}
	else {AKA_mark("lis===-560-###sois===-16894-###eois===-1689467-###lif===-2-###soif===-###eoif===-128-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)");}
	AKA_mark("lis===561###sois===16974###eois===16983###lif===3###soif===141###eoif===150###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)");return 0;
}

//****************************************************************************

/*
	input: a,b
	output: if a+b < -10, the function should return 1/(a+b)
			if a+b = 0 or a+b+1 = 0, the function should return 0;
			other wise, the function should return 1/(a+b+1)
	Error in function: 2
	Number of mistakes: if a+b = 0 or a+b+10 = 0, the function may return unexpected result;
*/

/** Instrumented function divisionTest(int,int) */
int divisionTest(int a, int b){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.divisionTest.17384.stub"

	AKA_mark("lis===576###sois===17414###eois===17426###lif===1###soif===34###eoif===46###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)");int x = a+b;
	AKA_mark("lis===577###sois===17429###eois===17443###lif===2###soif===49###eoif===63###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)");int y = x +10;
	if (AKA_mark("lis===578###sois===17449###eois===17453###lif===3###soif===69###eoif===73###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)") && (AKA_mark("lis===578###sois===17449###eois===17453###lif===3###soif===69###eoif===73###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)")&&x<10)) {
		AKA_mark("lis===579###sois===17459###eois===17470###lif===4###soif===79###eoif===90###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)");return 1/x;
	}
	else {
		AKA_mark("lis===581###sois===17482###eois===17493###lif===6###soif===102###eoif===113###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)");return 1/y;
	}
}
//****************************************************************************

/*
	input: month, day, year
	output: the next date

*/

/** Instrumented function NextDate(int,int,int) */
long NextDate(int year, int month, int day)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.NextDate.17647.stub"

	AKA_mark("lis===593###sois===17690###eois===17745###lif===2###soif===48###eoif===103###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");int ngay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	AKA_mark("lis===594###sois===17747###eois===17757###lif===3###soif===105###eoif===115###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");day=day+1;
	while (AKA_mark("lis===595###sois===17766###eois===17773###lif===4###soif===124###eoif===131###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)") && (AKA_mark("lis===595###sois===17766###eois===17773###lif===4###soif===124###eoif===131###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&day>365)) {
		AKA_mark("lis===597###sois===17781###eois===17793###lif===6###soif===139###eoif===151###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");year=year+1;
		if (AKA_mark("lis===598###sois===17800###eois===17844###lif===7###soif===158###eoif===202###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)") && (((AKA_mark("lis===598###sois===17801###eois===17810###lif===7###soif===159###eoif===168###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&year%4==0)	&&(AKA_mark("lis===598###sois===17814###eois===17825###lif===7###soif===172###eoif===183###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&year%100!=0))	||(AKA_mark("lis===598###sois===17831###eois===17843###lif===7###soif===189###eoif===201###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&year %400==0))) {
			AKA_mark("lis===599###sois===17849###eois===17861###lif===8###soif===207###eoif===219###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");day=day-366;
		}
		else {
			AKA_mark("lis===601###sois===17873###eois===17885###lif===10###soif===231###eoif===243###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");day=day-365;
		}
	}
	while (AKA_mark("lis===604###sois===17900###eois===17915###lif===13###soif===258###eoif===273###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)") && (AKA_mark("lis===604###sois===17900###eois===17915###lif===13###soif===258###eoif===273###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&day>ngay[month])) {
		AKA_mark("lis===606###sois===17924###eois===17944###lif===15###soif===282###eoif===302###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");day=day-ngay[month];
		AKA_mark("lis===607###sois===17947###eois===17961###lif===16###soif===305###eoif===319###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");month=month+1;
		while (AKA_mark("lis===608###sois===17971###eois===17979###lif===17###soif===329###eoif===337###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)") && (AKA_mark("lis===608###sois===17971###eois===17979###lif===17###soif===329###eoif===337###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&month>12)) {
			AKA_mark("lis===610###sois===17987###eois===17999###lif===19###soif===345###eoif===357###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");year=year+1;
			AKA_mark("lis===611###sois===18002###eois===18017###lif===20###soif===360###eoif===375###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");month=month%12;
		}
	}
	AKA_mark("lis===614###sois===18027###eois===18036###lif===23###soif===385###eoif===394###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");return 0;
}

//****************************************************************************

/*
	input: x, y
	This function is created for loop testing.
*/
/** Instrumented function simpleWhileTest(int,int) */
int simpleWhileTest(int x, int y){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\simpleWhileTest(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.simpleWhileTest.18196.stub"

	while (AKA_mark("lis===624###sois===18235###eois===18240###lif===1###soif===43###eoif===48###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\simpleWhileTest(int,int)") && (AKA_mark("lis===624###sois===18235###eois===18240###lif===1###soif===43###eoif===48###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\simpleWhileTest(int,int)")&&x < y)) {
		AKA_mark("lis===625###sois===18246###eois===18251###lif===2###soif===54###eoif===59###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\simpleWhileTest(int,int)");x+=1;
	}
	AKA_mark("lis===627###sois===18258###eois===18267###lif===4###soif===66###eoif===75###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\simpleWhileTest(int,int)");return 1;
}
//****************************************************************************

/*
	input: m, n
	This function is created for loop testing.
*/
/** Instrumented function twoForloop(int,int) */
int twoForloop(int m, int n)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.twoForloop.18425.stub"

	AKA_mark("lis===637###sois===18458###eois===18466###lif===2###soif===37###eoif===45###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");int s=0;
	if (AKA_mark("lis===638###sois===18476###eois===18486###lif===3###soif===55###eoif===65###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)") && ((AKA_mark("lis===638###sois===18476###eois===18479###lif===3###soif===55###eoif===58###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)")&&m>0)	&&(AKA_mark("lis===638###sois===18483###eois===18486###lif===3###soif===62###eoif===65###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)")&&n>0))) {
		AKA_mark("lis===639###sois===18502###eois===18510###lif===4###soif===81###eoif===89###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");for (int i=1;AKA_mark("lis===639###sois===18511###eois===18515###lif===4###soif===90###eoif===94###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)") && AKA_mark("lis===639###sois===18511###eois===18515###lif===4###soif===90###eoif===94###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)")&&i<=m;({AKA_mark("lis===639###sois===18517###eois===18520###lif===4###soif===96###eoif===99###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");i++;})) {
			AKA_mark("lis===640###sois===18539###eois===18547###lif===5###soif===118###eoif===126###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");for (int j=1;AKA_mark("lis===640###sois===18548###eois===18552###lif===5###soif===127###eoif===131###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)") && AKA_mark("lis===640###sois===18548###eois===18552###lif===5###soif===127###eoif===131###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)")&&j<=n;({AKA_mark("lis===640###sois===18554###eois===18557###lif===5###soif===133###eoif===136###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");j++;})) {
				AKA_mark("lis===641###sois===18573###eois===18581###lif===6###soif===152###eoif===160###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");s=s+i+j;
			}
		}
	}
	else {AKA_mark("lis===-638-###sois===-18476-###eois===-1847610-###lif===-3-###soif===-###eoif===-65-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");}
	AKA_mark("lis===642###sois===18587###eois===18596###lif===7###soif===166###eoif===175###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");return s;
}

//****************************************************************************


/** Instrumented function testBoundaryValue(int,int) */
int testBoundaryValue(int x, int y)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testBoundaryValue.18691.stub"

	if (AKA_mark("lis===650###sois===18732###eois===18759###lif===2###soif===45###eoif===72###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)") && ((AKA_mark("lis===650###sois===18732###eois===18737###lif===2###soif===45###eoif===50###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)")&&x > 1)	&&((AKA_mark("lis===650###sois===18742###eois===18747###lif===2###soif===55###eoif===60###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)")&&y > 3)	||(AKA_mark("lis===650###sois===18752###eois===18757###lif===2###soif===65###eoif===70###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)")&&y < 5)))) {
		AKA_mark("lis===652###sois===18768###eois===18778###lif===4###soif===81###eoif===91###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)");x = y + 2;
	}
	else {
		if (AKA_mark("lis===654###sois===18794###eois===18808###lif===6###soif===107###eoif===121###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)") && ((AKA_mark("lis===654###sois===18794###eois===18799###lif===6###soif===107###eoif===112###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)")&&x < 0)	&&(AKA_mark("lis===654###sois===18803###eois===18808###lif===6###soif===116###eoif===121###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)")&&y < 2))) {
			AKA_mark("lis===656###sois===18817###eois===18827###lif===8###soif===130###eoif===140###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)");x = y - 2;
		}
		else {
			AKA_mark("lis===660###sois===18846###eois===18852###lif===12###soif===159###eoif===165###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)");x = y;
		}
	}
	AKA_mark("lis===663###sois===18861###eois===18870###lif===15###soif===174###eoif===183###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testBoundaryValue(int,int)");return x;
}

/** Instrumented function swap(int*,int*) */
void swap(int *xp, int *yp)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\swap(int*,int*)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.swap.18882.stub"

	AKA_mark("lis===668###sois===18913###eois===18928###lif===2###soif===36###eoif===51###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\swap(int*,int*)");int temp = *xp;
	AKA_mark("lis===669###sois===18934###eois===18944###lif===3###soif===57###eoif===67###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\swap(int*,int*)");*xp = *yp;
	AKA_mark("lis===670###sois===18950###eois===18961###lif===4###soif===73###eoif===84###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\swap(int*,int*)");*yp = temp;
}


    //Stein's Algorithm for finding GCD
    //https://www.geeksforgeeks.org/steins-algorithm-for-finding-gcd/
    /** Instrumented function gcd0(int,int) */
int gcd0(int a, int b)
    {AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.gcd0.19090.stub"

	AKA_mark("lis===679###sois===19172###eois===19188###lif===3###soif===86###eoif===102###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");GCD(0, 0) == 0 ;
	if (AKA_mark("lis===680###sois===19202###eois===19208###lif===4###soif===116###eoif===122###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)") && (AKA_mark("lis===680###sois===19202###eois===19208###lif===4###soif===116###eoif===122###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)")&&a == 0)) {
		AKA_mark("lis===681###sois===19223###eois===19232###lif===5###soif===137###eoif===146###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");return b;
	}
	else {AKA_mark("lis===-680-###sois===-19202-###eois===-192026-###lif===-4-###soif===-###eoif===-122-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");}
	if (AKA_mark("lis===682###sois===19246###eois===19252###lif===6###soif===160###eoif===166###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)") && (AKA_mark("lis===682###sois===19246###eois===19252###lif===6###soif===160###eoif===166###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)")&&b == 0)) {
		AKA_mark("lis===683###sois===19267###eois===19276###lif===7###soif===181###eoif===190###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");return a;
	}
	else {AKA_mark("lis===-682-###sois===-19246-###eois===-192466-###lif===-6-###soif===-###eoif===-166-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");}
	AKA_mark("lis===688###sois===19397###eois===19403###lif===12###soif===311###eoif===317###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");int k;
	AKA_mark("lis===689###sois===19418###eois===19424###lif===13###soif===332###eoif===338###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");for (k = 0;AKA_mark("lis===689###sois===19425###eois===19443###lif===13###soif===339###eoif===357###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)") && AKA_mark("lis===689###sois===19425###eois===19443###lif===13###soif===339###eoif===357###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)")&&((a | b) & 1) == 0;({AKA_mark("lis===689###sois===19445###eois===19448###lif===13###soif===359###eoif===362###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");++k;})) {
		AKA_mark("lis===691###sois===19474###eois===19482###lif===15###soif===388###eoif===396###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");a >>= 1;
		AKA_mark("lis===692###sois===19496###eois===19504###lif===16###soif===410###eoif===418###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");b >>= 1;
	}
	while (AKA_mark("lis===696###sois===19585###eois===19597###lif===20###soif===499###eoif===511###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)") && (AKA_mark("lis===696###sois===19585###eois===19597###lif===20###soif===499###eoif===511###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)")&&(a & 1) == 0)) {
		AKA_mark("lis===697###sois===19612###eois===19620###lif===21###soif===526###eoif===534###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");a >>= 1;
	}
	do {
		while (AKA_mark("lis===703###sois===19775###eois===19787###lif===27###soif===689###eoif===701###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)") && (AKA_mark("lis===703###sois===19775###eois===19787###lif===27###soif===689###eoif===701###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)")&&(b & 1) == 0)) {
			AKA_mark("lis===704###sois===19806###eois===19814###lif===28###soif===720###eoif===728###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");b >>= 1;
		}
		if (AKA_mark("lis===709###sois===19975###eois===19980###lif===33###soif===889###eoif===894###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)") && (AKA_mark("lis===709###sois===19975###eois===19980###lif===33###soif===889###eoif===894###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)")&&a > b)) {
			AKA_mark("lis===712###sois===20070###eois===20079###lif===36###soif===984###eoif===993###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");int tg=a;
			AKA_mark("lis===712###sois===20080###eois===20084###lif===36###soif===994###eoif===998###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");a=b;
			AKA_mark("lis===712###sois===20085###eois===20090###lif===36###soif===999###eoif===1004###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");b=tg;
		}
		else {AKA_mark("lis===-709-###sois===-19975-###eois===-199755-###lif===-33-###soif===-###eoif===-894-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");}
		AKA_mark("lis===715###sois===20137###eois===20149###lif===39###soif===1051###eoif===1063###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");b = (b - a);
	}
	while (AKA_mark("lis===716###sois===20167###eois===20173###lif===40###soif===1081###eoif===1087###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)") && (AKA_mark("lis===716###sois===20167###eois===20173###lif===40###soif===1081###eoif===1087###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)")&&b != 0));
	AKA_mark("lis===719###sois===20230###eois===20244###lif===43###soif===1144###eoif===1158###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd0(int,int)");return a << k;
}

// Driver code
//https://www.geeksforgeeks.org/selection-sort/

/** Instrumented function selectionSort(int[],int) */
void selectionSort(int arr[], int n)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.selectionSort.20327.stub"

	AKA_mark("lis===727###sois===20367###eois===20391###lif===2###soif===45###eoif===69###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");int i, j, min_idx, temp;
	AKA_mark("lis===730###sois===20458###eois===20464###lif===5###soif===136###eoif===142###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");for (i = 0;AKA_mark("lis===730###sois===20465###eois===20472###lif===5###soif===143###eoif===150###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)") && AKA_mark("lis===730###sois===20465###eois===20472###lif===5###soif===143###eoif===150###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)")&&i < n-1;({AKA_mark("lis===730###sois===20474###eois===20477###lif===5###soif===152###eoif===155###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");i++;})) {
		AKA_mark("lis===733###sois===20550###eois===20562###lif===8###soif===228###eoif===240###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");min_idx = i;
		AKA_mark("lis===734###sois===20577###eois===20585###lif===9###soif===255###eoif===263###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");for (j = i+1;AKA_mark("lis===734###sois===20586###eois===20591###lif===9###soif===264###eoif===269###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)") && AKA_mark("lis===734###sois===20586###eois===20591###lif===9###soif===264###eoif===269###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)")&&j < n;({AKA_mark("lis===734###sois===20593###eois===20596###lif===9###soif===271###eoif===274###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");j++;})) {
			if (AKA_mark("lis===735###sois===20611###eois===20632###lif===10###soif===289###eoif===310###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)") && (AKA_mark("lis===735###sois===20611###eois===20632###lif===10###soif===289###eoif===310###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)")&&arr[j] < arr[min_idx])) {
				AKA_mark("lis===736###sois===20647###eois===20659###lif===11###soif===325###eoif===337###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");min_idx = j;
			}
			else {AKA_mark("lis===-735-###sois===-20611-###eois===-2061121-###lif===-10-###soif===-###eoif===-310-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");}
		}
		AKA_mark("lis===739###sois===20737###eois===20755###lif===14###soif===415###eoif===433###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");temp=arr[min_idx];
		AKA_mark("lis===740###sois===20765###eois===20785###lif===15###soif===443###eoif===463###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");arr[min_idx]=arr[i];
		AKA_mark("lis===741###sois===20795###eois===20807###lif===16###soif===473###eoif===485###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");arr[i]=temp;
	}
}
// A function to implement bubble sort
//https://www.geeksforgeeks.org/bubble-sort/

/** Instrumented function bubbleSort(int[],int) */
void bubbleSort(int arr[], int n)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.bubbleSort.20912.stub"

	AKA_mark("lis===749###sois===20948###eois===20957###lif===2###soif===41###eoif===50###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)");int i, j;
	AKA_mark("lis===750###sois===20967###eois===20973###lif===3###soif===60###eoif===66###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)");for (i = 0;AKA_mark("lis===750###sois===20974###eois===20981###lif===3###soif===67###eoif===74###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)") && AKA_mark("lis===750###sois===20974###eois===20981###lif===3###soif===67###eoif===74###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)")&&i < n-1;({AKA_mark("lis===750###sois===20983###eois===20986###lif===3###soif===76###eoif===79###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)");i++;})) {
		AKA_mark("lis===753###sois===21051###eois===21057###lif===6###soif===144###eoif===150###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)");for (j = 0;AKA_mark("lis===753###sois===21058###eois===21067###lif===6###soif===151###eoif===160###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)") && AKA_mark("lis===753###sois===21058###eois===21067###lif===6###soif===151###eoif===160###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)")&&j < n-i-1;({AKA_mark("lis===753###sois===21069###eois===21072###lif===6###soif===162###eoif===165###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)");j++;})) {
			if (AKA_mark("lis===754###sois===21090###eois===21107###lif===7###soif===183###eoif===200###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)") && (AKA_mark("lis===754###sois===21090###eois===21107###lif===7###soif===183###eoif===200###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)")&&arr[j] > arr[j+1])) {
				AKA_mark("lis===755###sois===21124###eois===21149###lif===8###soif===217###eoif===242###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)");swap(&arr[j], &arr[j+1]);
			}
			else {AKA_mark("lis===-754-###sois===-21090-###eois===-2109017-###lif===-7-###soif===-###eoif===-200-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bubbleSort(int[],int)");}
		}
	}
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
/** Instrumented function partition(int[],int,int) */
int partition (int arr[], int low, int high)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.partition.21384.stub"

	AKA_mark("lis===765###sois===21433###eois===21455###lif===2###soif===53###eoif===75###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)");int pivot = arr[high];
	AKA_mark("lis===766###sois===21470###eois===21488###lif===3###soif===90###eoif===108###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)");int i = (low - 1);
	AKA_mark("lis===768###sois===21529###eois===21541###lif===5###soif===149###eoif===161###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)");for (int j = low;AKA_mark("lis===768###sois===21542###eois===21555###lif===5###soif===162###eoif===175###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)") && AKA_mark("lis===768###sois===21542###eois===21555###lif===5###soif===162###eoif===175###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)")&&j <= high - 1;({AKA_mark("lis===768###sois===21557###eois===21560###lif===5###soif===177###eoif===180###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)");j++;})) {
		if (AKA_mark("lis===771###sois===21639###eois===21653###lif===8###soif===259###eoif===273###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)") && (AKA_mark("lis===771###sois===21639###eois===21653###lif===8###soif===259###eoif===273###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)")&&arr[j] < pivot)) {
			AKA_mark("lis===773###sois===21679###eois===21683###lif===10###soif===299###eoif===303###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)");i++;
			AKA_mark("lis===774###sois===21735###eois===21758###lif===11###soif===355###eoif===378###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)");swap(&arr[i], &arr[j]);
		}
		else {AKA_mark("lis===-771-###sois===-21639-###eois===-2163914-###lif===-8-###soif===-###eoif===-273-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)");}
	}
	AKA_mark("lis===777###sois===21782###eois===21812###lif===14###soif===402###eoif===432###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)");swap(&arr[i + 1], &arr[high]);
	AKA_mark("lis===778###sois===21818###eois===21833###lif===15###soif===438###eoif===453###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\partition(int[],int,int)");return (i + 1);
}

/* Function to sort an array using insertion sort*/
//https://www.geeksforgeeks.org/insertion-sort/

/** Instrumented function insertionSort(int[],int) */
void insertionSort(int arr[], int n)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.insertionSort.21949.stub"

	AKA_mark("lis===786###sois===21989###eois===22003###lif===2###soif===45###eoif===59###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)");int i, key, j;
	AKA_mark("lis===787###sois===22014###eois===22020###lif===3###soif===70###eoif===76###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)");for (i = 1;AKA_mark("lis===787###sois===22021###eois===22026###lif===3###soif===77###eoif===82###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)") && AKA_mark("lis===787###sois===22021###eois===22026###lif===3###soif===77###eoif===82###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)")&&i < n;({AKA_mark("lis===787###sois===22028###eois===22031###lif===3###soif===84###eoif===87###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)");i++;})) {
		AKA_mark("lis===788###sois===22044###eois===22057###lif===4###soif===100###eoif===113###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)");key = arr[i];
		AKA_mark("lis===789###sois===22067###eois===22077###lif===5###soif===123###eoif===133###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)");j = i - 1;
		while (AKA_mark("lis===794###sois===22238###eois===22260###lif===10###soif===294###eoif===316###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)") && ((AKA_mark("lis===794###sois===22238###eois===22244###lif===10###soif===294###eoif===300###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)")&&j >= 0)	&&(AKA_mark("lis===794###sois===22248###eois===22260###lif===10###soif===304###eoif===316###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)")&&arr[j] > key))) {
			AKA_mark("lis===795###sois===22277###eois===22297###lif===11###soif===333###eoif===353###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)");arr[j + 1] = arr[j];
			AKA_mark("lis===796###sois===22311###eois===22321###lif===12###soif===367###eoif===377###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)");j = j - 1;
		}
		AKA_mark("lis===798###sois===22342###eois===22359###lif===14###soif===398###eoif===415###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\insertionSort(int[],int)");arr[j + 1] = key;
	}
}
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
/** Instrumented function merge(int[],int,int,int) */
void merge(int arr[], int l, int m, int r)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.merge.22478.stub"

	AKA_mark("lis===806###sois===22524###eois===22536###lif===2###soif===51###eoif===63###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");int i, j, k;
	AKA_mark("lis===807###sois===22542###eois===22561###lif===3###soif===69###eoif===88###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");int n1 = m - l + 1;
	AKA_mark("lis===808###sois===22567###eois===22582###lif===4###soif===94###eoif===109###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");int n2 = r - m;
	AKA_mark("lis===811###sois===22620###eois===22637###lif===7###soif===147###eoif===164###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");int L[n1], R[n2];
	AKA_mark("lis===814###sois===22698###eois===22704###lif===10###soif===225###eoif===231###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");for (i = 0;AKA_mark("lis===814###sois===22705###eois===22711###lif===10###soif===232###eoif===238###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)") && AKA_mark("lis===814###sois===22705###eois===22711###lif===10###soif===232###eoif===238###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)")&&i < n1;({AKA_mark("lis===814###sois===22713###eois===22716###lif===10###soif===240###eoif===243###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");i++;})) {
		AKA_mark("lis===815###sois===22727###eois===22745###lif===11###soif===254###eoif===272###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");L[i] = arr[l + i];
	}
	AKA_mark("lis===816###sois===22756###eois===22762###lif===12###soif===283###eoif===289###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");for (j = 0;AKA_mark("lis===816###sois===22763###eois===22769###lif===12###soif===290###eoif===296###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)") && AKA_mark("lis===816###sois===22763###eois===22769###lif===12###soif===290###eoif===296###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)")&&j < n2;({AKA_mark("lis===816###sois===22771###eois===22774###lif===12###soif===298###eoif===301###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");j++;})) {
		AKA_mark("lis===817###sois===22785###eois===22807###lif===13###soif===312###eoif===334###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");R[j] = arr[m + 1 + j];
	}
	AKA_mark("lis===820###sois===22867###eois===22873###lif===16###soif===394###eoif===400###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");i = 0;
	AKA_mark("lis===821###sois===22914###eois===22920###lif===17###soif===441###eoif===447###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");j = 0;
	AKA_mark("lis===822###sois===22962###eois===22968###lif===18###soif===489###eoif===495###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");k = l;
	while (AKA_mark("lis===823###sois===23017###eois===23033###lif===19###soif===544###eoif===560###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)") && ((AKA_mark("lis===823###sois===23017###eois===23023###lif===19###soif===544###eoif===550###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)")&&i < n1)	&&(AKA_mark("lis===823###sois===23027###eois===23033###lif===19###soif===554###eoif===560###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)")&&j < n2))) {
		if (AKA_mark("lis===824###sois===23050###eois===23062###lif===20###soif===577###eoif===589###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)") && (AKA_mark("lis===824###sois===23050###eois===23062###lif===20###soif===577###eoif===589###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)")&&L[i] <= R[j])) {
			AKA_mark("lis===825###sois===23079###eois===23093###lif===21###soif===606###eoif===620###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");arr[k] = L[i];
			AKA_mark("lis===826###sois===23107###eois===23111###lif===22###soif===634###eoif===638###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");i++;
		}
		else {
			AKA_mark("lis===829###sois===23152###eois===23166###lif===25###soif===679###eoif===693###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");arr[k] = R[j];
			AKA_mark("lis===830###sois===23180###eois===23184###lif===26###soif===707###eoif===711###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");j++;
		}
		AKA_mark("lis===832###sois===23205###eois===23209###lif===28###soif===732###eoif===736###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");k++;
	}
	while (AKA_mark("lis===837###sois===23303###eois===23309###lif===33###soif===830###eoif===836###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)") && (AKA_mark("lis===837###sois===23303###eois===23309###lif===33###soif===830###eoif===836###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)")&&i < n1)) {
		AKA_mark("lis===838###sois===23322###eois===23336###lif===34###soif===849###eoif===863###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");arr[k] = L[i];
		AKA_mark("lis===839###sois===23346###eois===23350###lif===35###soif===873###eoif===877###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");i++;
		AKA_mark("lis===840###sois===23360###eois===23364###lif===36###soif===887###eoif===891###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");k++;
	}
	while (AKA_mark("lis===845###sois===23458###eois===23464###lif===41###soif===985###eoif===991###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)") && (AKA_mark("lis===845###sois===23458###eois===23464###lif===41###soif===985###eoif===991###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)")&&j < n2)) {
		AKA_mark("lis===846###sois===23477###eois===23491###lif===42###soif===1004###eoif===1018###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");arr[k] = R[j];
		AKA_mark("lis===847###sois===23501###eois===23505###lif===43###soif===1028###eoif===1032###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");j++;
		AKA_mark("lis===848###sois===23515###eois===23519###lif===44###soif===1042###eoif===1046###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\merge(int[],int,int,int)");k++;
	}
}

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
/** Instrumented function heapify(int[],int,int) */
void heapify(int arr[], int n, int i)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.heapify.23632.stub"

	AKA_mark("lis===856###sois===23673###eois===23689###lif===2###soif===46###eoif===62###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)");int largest = i;
	AKA_mark("lis===857###sois===23725###eois===23741###lif===3###soif===98###eoif===114###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)");int l = 2*i + 1;
	AKA_mark("lis===858###sois===23765###eois===23781###lif===4###soif===138###eoif===154###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)");int r = 2*i + 2;
	if (AKA_mark("lis===861###sois===23854###eois===23884###lif===7###soif===227###eoif===257###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)") && ((AKA_mark("lis===861###sois===23854###eois===23859###lif===7###soif===227###eoif===232###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)")&&l < n)	&&(AKA_mark("lis===861###sois===23863###eois===23884###lif===7###soif===236###eoif===257###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)")&&arr[l] > arr[largest]))) {
		AKA_mark("lis===862###sois===23895###eois===23907###lif===8###soif===268###eoif===280###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)");largest = l;
	}
	else {AKA_mark("lis===-861-###sois===-23854-###eois===-2385430-###lif===-7-###soif===-###eoif===-257-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)");}
	if (AKA_mark("lis===865###sois===23972###eois===24002###lif===11###soif===345###eoif===375###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)") && ((AKA_mark("lis===865###sois===23972###eois===23977###lif===11###soif===345###eoif===350###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)")&&r < n)	&&(AKA_mark("lis===865###sois===23981###eois===24002###lif===11###soif===354###eoif===375###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)")&&arr[r] > arr[largest]))) {
		AKA_mark("lis===866###sois===24013###eois===24025###lif===12###soif===386###eoif===398###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)");largest = r;
	}
	else {AKA_mark("lis===-865-###sois===-23972-###eois===-2397230-###lif===-11-###soif===-###eoif===-375-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)");}
	if (AKA_mark("lis===869###sois===24068###eois===24080###lif===15###soif===441###eoif===453###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)") && (AKA_mark("lis===869###sois===24068###eois===24080###lif===15###soif===441###eoif===453###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)")&&largest != i)) {
		AKA_mark("lis===871###sois===24098###eois===24125###lif===17###soif===471###eoif===498###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)");swap(arr[i], arr[largest]);
		AKA_mark("lis===874###sois===24191###eois===24216###lif===20###soif===564###eoif===589###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)");heapify(arr, n, largest);
	}
	else {AKA_mark("lis===-869-###sois===-24068-###eois===-2406812-###lif===-15-###soif===-###eoif===-453-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapify(int[],int,int)");}
}

// main function to do heap sort
/** Instrumented function heapSort(int[],int) */
void heapSort(int arr[], int n)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.heapSort.24269.stub"

	AKA_mark("lis===882###sois===24346###eois===24364###lif===3###soif===82###eoif===100###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)");for (int i = n / 2 - 1;AKA_mark("lis===882###sois===24365###eois===24371###lif===3###soif===101###eoif===107###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)") && AKA_mark("lis===882###sois===24365###eois===24371###lif===3###soif===101###eoif===107###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)")&&i >= 0;({AKA_mark("lis===882###sois===24373###eois===24376###lif===3###soif===109###eoif===112###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)");i--;})) {
		AKA_mark("lis===883###sois===24387###eois===24406###lif===4###soif===123###eoif===142###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)");heapify(arr, n, i);
	}
	AKA_mark("lis===886###sois===24467###eois===24477###lif===7###soif===203###eoif===213###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)");for (int i=n-1;AKA_mark("lis===886###sois===24478###eois===24481###lif===7###soif===214###eoif===217###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)") && AKA_mark("lis===886###sois===24478###eois===24481###lif===7###soif===214###eoif===217###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)")&&i>0;({AKA_mark("lis===886###sois===24483###eois===24486###lif===7###soif===219###eoif===222###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)");i--;})) {
		AKA_mark("lis===889###sois===24541###eois===24562###lif===10###soif===277###eoif===298###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)");swap(arr[0], arr[i]);
		AKA_mark("lis===892###sois===24623###eois===24642###lif===13###soif===359###eoif===378###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\heapSort(int[],int)");heapify(arr, i, 0);
	}
}


// The main function that sort
// the given string arr[] in
// alphabatical order
/** Instrumented function countSort(char[]) */
void countSort(char arr[])
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.countSort.24748.stub"

	AKA_mark("lis===902###sois===24775###eois===24790###lif===2###soif===32###eoif===47###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");int RANGE = 10;
	AKA_mark("lis===905###sois===24865###eois===24890###lif===5###soif===122###eoif===147###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");char output[strlen(arr)];
	AKA_mark("lis===909###sois===25007###eois===25031###lif===9###soif===264###eoif===288###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");int count[RANGE + 1], i;
	AKA_mark("lis===910###sois===25037###eois===25069###lif===10###soif===294###eoif===326###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");memset(count, 0, sizeof(count));
	AKA_mark("lis===913###sois===25119###eois===25125###lif===13###soif===376###eoif===382###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");for (i = 0;AKA_mark("lis===913###sois===25126###eois===25132###lif===13###soif===383###eoif===389###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])") && AKA_mark("lis===913###sois===25126###eois===25132###lif===13###soif===383###eoif===389###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])")&&arr[i];({AKA_mark("lis===913###sois===25134###eois===25137###lif===13###soif===391###eoif===394###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");++i;})) {
		AKA_mark("lis===914###sois===25148###eois===25164###lif===14###soif===405###eoif===421###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");++count[arr[i]];
	}
	AKA_mark("lis===918###sois===25289###eois===25295###lif===18###soif===546###eoif===552###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");for (i = 1;AKA_mark("lis===918###sois===25296###eois===25306###lif===18###soif===553###eoif===563###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])") && AKA_mark("lis===918###sois===25296###eois===25306###lif===18###soif===553###eoif===563###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])")&&i <= RANGE;({AKA_mark("lis===918###sois===25308###eois===25311###lif===18###soif===565###eoif===568###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");++i;})) {
		AKA_mark("lis===919###sois===25322###eois===25345###lif===19###soif===579###eoif===602###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");count[i] += count[i-1];
	}
	AKA_mark("lis===922###sois===25399###eois===25405###lif===22###soif===656###eoif===662###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");for (i = 0;AKA_mark("lis===922###sois===25406###eois===25412###lif===22###soif===663###eoif===669###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])") && AKA_mark("lis===922###sois===25406###eois===25412###lif===22###soif===663###eoif===669###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])")&&arr[i];({AKA_mark("lis===922###sois===25414###eois===25417###lif===22###soif===671###eoif===674###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");++i;})) {
		AKA_mark("lis===924###sois===25435###eois===25468###lif===24###soif===692###eoif===725###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");output[count[arr[i]]-1] = arr[i];
		AKA_mark("lis===925###sois===25478###eois===25494###lif===25###soif===735###eoif===751###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");--count[arr[i]];
	}
	AKA_mark("lis===941###sois===25808###eois===25814###lif===41###soif===1065###eoif===1071###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");for (i = 0;AKA_mark("lis===941###sois===25815###eois===25821###lif===41###soif===1072###eoif===1078###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])") && AKA_mark("lis===941###sois===25815###eois===25821###lif===41###soif===1072###eoif===1078###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])")&&arr[i];({AKA_mark("lis===941###sois===25823###eois===25826###lif===41###soif===1080###eoif===1083###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");++i;})) {
		AKA_mark("lis===942###sois===25837###eois===25856###lif===42###soif===1094###eoif===1113###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\countSort(char[])");arr[i] = output[i];
	}
}

//https://www.geeksforgeeks.org/linear-search/
/** Instrumented function linearSearch(int[],int,int) */
int linearSearch(int arr[], int n, int x) 
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\linearSearch(int[],int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.linearSearch.25915.stub"

	AKA_mark("lis===948###sois===25962###eois===25968###lif===2###soif===51###eoif===57###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\linearSearch(int[],int,int)");int i;
	AKA_mark("lis===949###sois===25979###eois===25985###lif===3###soif===68###eoif===74###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\linearSearch(int[],int,int)");for (i = 0;AKA_mark("lis===949###sois===25986###eois===25991###lif===3###soif===75###eoif===80###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\linearSearch(int[],int,int)") && AKA_mark("lis===949###sois===25986###eois===25991###lif===3###soif===75###eoif===80###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\linearSearch(int[],int,int)")&&i < n;({AKA_mark("lis===949###sois===25993###eois===25996###lif===3###soif===82###eoif===85###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\linearSearch(int[],int,int)");i++;})) {
		if (AKA_mark("lis===950###sois===26011###eois===26022###lif===4###soif===100###eoif===111###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\linearSearch(int[],int,int)") && (AKA_mark("lis===950###sois===26011###eois===26022###lif===4###soif===100###eoif===111###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\linearSearch(int[],int,int)")&&arr[i] == x)) {
			AKA_mark("lis===951###sois===26037###eois===26046###lif===5###soif===126###eoif===135###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\linearSearch(int[],int,int)");return i;
		}
		else {AKA_mark("lis===-950-###sois===-26011-###eois===-2601111-###lif===-4-###soif===-###eoif===-111-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\linearSearch(int[],int,int)");}
	}
	AKA_mark("lis===952###sois===26052###eois===26062###lif===6###soif===141###eoif===151###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\linearSearch(int[],int,int)");return -1;
}

/* Returns index of x if present,  else returns -1 */
/** Instrumented function fibMonaccianSearch(int[],int,int) */
int fibMonaccianSearch(int arr[], int x, int n)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.fibMonaccianSearch.26128.stub"

	AKA_mark("lis===959###sois===26220###eois===26236###lif===3###soif===96###eoif===112###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");int fibMMm2 = 0;
	AKA_mark("lis===960###sois===26270###eois===26286###lif===4###soif===146###eoif===162###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");int fibMMm1 = 1;
	AKA_mark("lis===961###sois===26320###eois===26349###lif===5###soif===196###eoif===225###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");int fibM = fibMMm2 + fibMMm1;
	while (AKA_mark("lis===965###sois===26482###eois===26490###lif===9###soif===358###eoif===366###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)") && (AKA_mark("lis===965###sois===26482###eois===26490###lif===9###soif===358###eoif===366###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)")&&fibM < n)) {
		AKA_mark("lis===967###sois===26508###eois===26526###lif===11###soif===384###eoif===402###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");fibMMm2 = fibMMm1;
		AKA_mark("lis===968###sois===26536###eois===26551###lif===12###soif===412###eoif===427###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");fibMMm1 = fibM;
		AKA_mark("lis===969###sois===26561###eois===26587###lif===13###soif===437###eoif===463###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");fibM  = fibMMm2 + fibMMm1;
	}
	AKA_mark("lis===973###sois===26648###eois===26664###lif===17###soif===524###eoif===540###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");int offset = -1;
	while (AKA_mark("lis===978###sois===26827###eois===26835###lif===22###soif===703###eoif===711###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)") && (AKA_mark("lis===978###sois===26827###eois===26835###lif===22###soif===703###eoif===711###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)")&&fibM > 1)) {
		AKA_mark("lis===981###sois===26901###eois===26934###lif===25###soif===777###eoif===810###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");int i = min(offset+fibMMm2, n-1);
		if (AKA_mark("lis===985###sois===27065###eois===27075###lif===29###soif===941###eoif===951###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)") && (AKA_mark("lis===985###sois===27065###eois===27075###lif===29###soif===941###eoif===951###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)")&&arr[i] < x)) {
			AKA_mark("lis===987###sois===27101###eois===27117###lif===31###soif===977###eoif===993###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");fibM  = fibMMm1;
			AKA_mark("lis===988###sois===27131###eois===27149###lif===32###soif===1007###eoif===1025###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");fibMMm1 = fibMMm2;
			AKA_mark("lis===989###sois===27163###eois===27188###lif===33###soif===1039###eoif===1064###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");fibMMm2 = fibM - fibMMm1;
			AKA_mark("lis===990###sois===27202###eois===27213###lif===34###soif===1078###eoif===1089###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");offset = i;
		}
		else {
			if (AKA_mark("lis===995###sois===27348###eois===27358###lif===39###soif===1224###eoif===1234###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)") && (AKA_mark("lis===995###sois===27348###eois===27358###lif===39###soif===1224###eoif===1234###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)")&&arr[i] > x)) {
				AKA_mark("lis===997###sois===27384###eois===27400###lif===41###soif===1260###eoif===1276###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");fibM  = fibMMm2;
				AKA_mark("lis===998###sois===27414###eois===27442###lif===42###soif===1290###eoif===1318###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");fibMMm1 = fibMMm1 - fibMMm2;
				AKA_mark("lis===999###sois===27456###eois===27481###lif===43###soif===1332###eoif===1357###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");fibMMm2 = fibM - fibMMm1;
			}
			else {
				AKA_mark("lis===1003###sois===27552###eois===27561###lif===47###soif===1428###eoif===1437###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");return i;
			}
		}
	}
	if (AKA_mark("lis===1007###sois===27624###eois===27651###lif===51###soif===1500###eoif===1527###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)") && ((AKA_mark("lis===1007###sois===27624###eois===27631###lif===51###soif===1500###eoif===1507###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)")&&fibMMm1)	&&(AKA_mark("lis===1007###sois===27635###eois===27651###lif===51###soif===1511###eoif===1527###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)")&&arr[offset+1]==x))) {
		AKA_mark("lis===1007###sois===27652###eois===27668###lif===51###soif===1528###eoif===1544###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");return offset+1;
	}
	else {AKA_mark("lis===-1007-###sois===-27624-###eois===-2762427-###lif===-51-###soif===-###eoif===-1527-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");}
	AKA_mark("lis===1010###sois===27715###eois===27725###lif===54###soif===1591###eoif===1601###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibMonaccianSearch(int[],int,int)");return -1;
}

//https://www.geeksforgeeks.org/interpolation-search/
// If x is present in arr[0..n-1], then returns
// index of it, else returns -1.
/** Instrumented function interpolationSearch(int[],int,int) */
int interpolationSearch(int arr[], int n, int x)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.interpolationSearch.27874.stub"

	AKA_mark("lis===1019###sois===27963###eois===27988###lif===3###soif===93###eoif===118###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");int lo = 0, hi = (n - 1);
	while (AKA_mark("lis===1023###sois===28105###eois===28145###lif===7###soif===235###eoif===275###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)") && (((AKA_mark("lis===1023###sois===28105###eois===28113###lif===7###soif===235###eoif===243###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)")&&lo <= hi)	&&(AKA_mark("lis===1023###sois===28117###eois===28129###lif===7###soif===247###eoif===259###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)")&&x >= arr[lo]))	&&(AKA_mark("lis===1023###sois===28133###eois===28145###lif===7###soif===263###eoif===275###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)")&&x <= arr[hi]))) {
		if (AKA_mark("lis===1025###sois===28167###eois===28175###lif===9###soif===297###eoif===305###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)") && (AKA_mark("lis===1025###sois===28167###eois===28175###lif===9###soif===297###eoif===305###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)")&&lo == hi)) {
			if (AKA_mark("lis===1027###sois===28205###eois===28217###lif===11###soif===335###eoif===347###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)") && (AKA_mark("lis===1027###sois===28205###eois===28217###lif===11###soif===335###eoif===347###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)")&&arr[lo] == x)) {
				AKA_mark("lis===1027###sois===28219###eois===28229###lif===11###soif===349###eoif===359###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");return lo;
			}
			else {AKA_mark("lis===-1027-###sois===-28205-###eois===-2820512-###lif===-11-###soif===-###eoif===-347-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");}
			AKA_mark("lis===1028###sois===28243###eois===28253###lif===12###soif===373###eoif===383###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");return -1;
		}
		else {AKA_mark("lis===-1025-###sois===-28167-###eois===-281678-###lif===-9-###soif===-###eoif===-305-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");}
		AKA_mark("lis===1032###sois===28362###eois===28450###lif===16###soif===492###eoif===580###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");int pos = lo + (((double)(hi - lo) /
            (arr[hi] - arr[lo])) * (x - arr[lo]));
		if (AKA_mark("lis===1036###sois===28504###eois===28517###lif===20###soif===634###eoif===647###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)") && (AKA_mark("lis===1036###sois===28504###eois===28517###lif===20###soif===634###eoif===647###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)")&&arr[pos] == x)) {
			AKA_mark("lis===1037###sois===28532###eois===28543###lif===21###soif===662###eoif===673###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");return pos;
		}
		else {AKA_mark("lis===-1036-###sois===-28504-###eois===-2850413-###lif===-20-###soif===-###eoif===-647-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");}
		if (AKA_mark("lis===1040###sois===28606###eois===28618###lif===24###soif===736###eoif===748###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)") && (AKA_mark("lis===1040###sois===28606###eois===28618###lif===24###soif===736###eoif===748###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)")&&arr[pos] < x)) {
			AKA_mark("lis===1041###sois===28633###eois===28646###lif===25###soif===763###eoif===776###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");lo = pos + 1;
		}
		else {
			AKA_mark("lis===1045###sois===28728###eois===28741###lif===29###soif===858###eoif===871###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");hi = pos - 1;
		}
	}
	AKA_mark("lis===1047###sois===28754###eois===28764###lif===31###soif===884###eoif===894###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\interpolationSearch(int[],int,int)");return -1;
}

//http://pathcrawler-online.com:8080/#
//BSreach
             /* Binary search of a given element in a given ordered array
   returning 1 if the element is present and 0 if not.

   In this example, the array dimension is fixed.
   The example is interesting because of
   - the loop with a varaible number of iterations
   - the precondition that the input array is ordered and
   - an example of an oracle which is a more inefficient implementation
     of the same algorithm. */

/** Instrumented function Bsearch(int[10],int) */
int Bsearch( int A[10], int elem)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.Bsearch.29270.stub"

	AKA_mark("lis===1064###sois===29306###eois===29333###lif===2###soif===40###eoif===67###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");int low, high, mid, found ;
	AKA_mark("lis===1066###sois===29339###eois===29348###lif===4###soif===73###eoif===82###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");low = 0 ;
	AKA_mark("lis===1067###sois===29352###eois===29362###lif===5###soif===86###eoif===96###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");high = 9 ;
	AKA_mark("lis===1068###sois===29366###eois===29377###lif===6###soif===100###eoif===111###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");found = 0 ;
	while (AKA_mark("lis===1069###sois===29388###eois===29402###lif===7###soif===122###eoif===136###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)") && (AKA_mark("lis===1069###sois===29390###eois===29400###lif===7###soif===124###eoif===134###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)")&&high > low)) {
		AKA_mark("lis===1071###sois===29454###eois===29478###lif===9###soif===188###eoif===212###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");mid = (low + high) / 2 ;
		if (AKA_mark("lis===1072###sois===29490###eois===29504###lif===10###soif===224###eoif===238###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)") && (AKA_mark("lis===1072###sois===29490###eois===29504###lif===10###soif===224###eoif===238###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)")&&elem == A[mid])) {
			AKA_mark("lis===1073###sois===29542###eois===29552###lif===11###soif===276###eoif===286###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");found = 1;
		}
		else {AKA_mark("lis===-1072-###sois===-29490-###eois===-2949014-###lif===-10-###soif===-###eoif===-238-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");}
		if (AKA_mark("lis===1074###sois===29564###eois===29577###lif===12###soif===298###eoif===311###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)") && (AKA_mark("lis===1074###sois===29564###eois===29577###lif===12###soif===298###eoif===311###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)")&&elem > A[mid])) {
			AKA_mark("lis===1075###sois===29623###eois===29638###lif===13###soif===357###eoif===372###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");low = mid + 1 ;
		}
		else {
			AKA_mark("lis===1077###sois===29660###eois===29675###lif===15###soif===394###eoif===409###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");high = mid - 1;
		}
	}
	AKA_mark("lis===1079###sois===29688###eois===29712###lif===17###soif===422###eoif===446###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");mid = (low + high) / 2 ;
	if (AKA_mark("lis===1081###sois===29722###eois===29757###lif===19###soif===456###eoif===491###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)") && ((AKA_mark("lis===1081###sois===29724###eois===29734###lif===19###soif===458###eoif===468###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)")&&found != 1)	&&(AKA_mark("lis===1081###sois===29742###eois===29756###lif===19###soif===476###eoif===490###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)")&&elem == A[mid]))) {
		AKA_mark("lis===1082###sois===29781###eois===29791###lif===20###soif===515###eoif===525###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");found = 1;
	}
	else {AKA_mark("lis===-1081-###sois===-29722-###eois===-2972235-###lif===-19-###soif===-###eoif===-491-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");}
	AKA_mark("lis===1084###sois===29798###eois===29812###lif===22###soif===532###eoif===546###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Bsearch(int[10],int)");return found ;
}

//https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/
/** Instrumented function fibonaci(int) */
int fibonaci(int n)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\fibonaci(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.fibonaci.29890.stub"

	AKA_mark("lis===1091###sois===29966###eois===29977###lif===3###soif===80###eoif===91###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibonaci(int)");int f[n+2];
	AKA_mark("lis===1092###sois===30016###eois===30022###lif===4###soif===130###eoif===136###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibonaci(int)");int i;
	AKA_mark("lis===1095###sois===30081###eois===30090###lif===7###soif===195###eoif===204###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibonaci(int)");f[0] = 0;
	AKA_mark("lis===1096###sois===30094###eois===30103###lif===8###soif===208###eoif===217###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibonaci(int)");f[1] = 1;
	AKA_mark("lis===1098###sois===30114###eois===30120###lif===10###soif===228###eoif===234###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibonaci(int)");for (i = 2;AKA_mark("lis===1098###sois===30121###eois===30127###lif===10###soif===235###eoif===241###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibonaci(int)") && AKA_mark("lis===1098###sois===30121###eois===30127###lif===10###soif===235###eoif===241###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibonaci(int)")&&i <= n;({AKA_mark("lis===1098###sois===30129###eois===30132###lif===10###soif===243###eoif===246###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibonaci(int)");i++;})) {
		AKA_mark("lis===1102###sois===30223###eois===30246###lif===14###soif===337###eoif===360###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibonaci(int)");f[i] = f[i-1] + f[i-2];
	}
	AKA_mark("lis===1105###sois===30257###eois===30269###lif===17###soif===371###eoif===383###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\fibonaci(int)");return f[n];
}


/* This function returns median of ar1[] and ar2[].
Assumption in this function:
Both ar1[] and ar2[] are sorted arrays */
/** Instrumented function getMedian(int[],int[],int,int) */
int getMedian(int ar1[], int ar2[], int n, int m)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.getMedian.30408.stub"

	AKA_mark("lis===1114###sois===30462###eois===30472###lif===2###soif===58###eoif===68###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");int i = 0;
	AKA_mark("lis===1115###sois===30519###eois===30529###lif===3###soif===115###eoif===125###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");int j = 0;
	AKA_mark("lis===1116###sois===30576###eois===30586###lif===4###soif===172###eoif===182###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");int count;
	AKA_mark("lis===1117###sois===30592###eois===30613###lif===5###soif===188###eoif===209###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");int m1 = -1, m2 = -1;
	if (AKA_mark("lis===1123###sois===30776###eois===30792###lif===11###soif===372###eoif===388###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)") && (AKA_mark("lis===1123###sois===30776###eois===30792###lif===11###soif===372###eoif===388###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)")&&(m + n) % 2 == 1)) {
		AKA_mark("lis===1124###sois===30810###eois===30820###lif===12###soif===406###eoif===416###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");for (count = 0;AKA_mark("lis===1124###sois===30821###eois===30839###lif===12###soif===417###eoif===435###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)") && AKA_mark("lis===1124###sois===30821###eois===30839###lif===12###soif===417###eoif===435###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)")&&count <= (n + m)/2;({AKA_mark("lis===1124###sois===30841###eois===30848###lif===12###soif===437###eoif===444###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");count++;})) {
			if (AKA_mark("lis===1125###sois===30868###eois===30884###lif===13###soif===464###eoif===480###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)") && ((AKA_mark("lis===1125###sois===30868###eois===30874###lif===13###soif===464###eoif===470###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)")&&i != n)	&&(AKA_mark("lis===1125###sois===30878###eois===30884###lif===13###soif===474###eoif===480###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)")&&j != m))) {
				AKA_mark("lis===1126###sois===30900###eois===30945###lif===14###soif===496###eoif===541###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
			}
			else {
				if (AKA_mark("lis===1128###sois===30982###eois===30987###lif===16###soif===578###eoif===583###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)") && (AKA_mark("lis===1128###sois===30982###eois===30987###lif===16###soif===578###eoif===583###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)")&&i < n)) {
					AKA_mark("lis===1129###sois===31003###eois===31017###lif===17###soif===599###eoif===613###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");m1 = ar1[i++];
				}
				else {
					AKA_mark("lis===1133###sois===31104###eois===31118###lif===21###soif===700###eoif===714###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");m1 = ar2[j++];
				}
			}
		}
		AKA_mark("lis===1136###sois===31154###eois===31164###lif===24###soif===750###eoif===760###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");return m1;
	}
	else {
		AKA_mark("lis===1143###sois===31342###eois===31352###lif===31###soif===938###eoif===948###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");for (count = 0;AKA_mark("lis===1143###sois===31353###eois===31371###lif===31###soif===949###eoif===967###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)") && AKA_mark("lis===1143###sois===31353###eois===31371###lif===31###soif===949###eoif===967###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)")&&count <= (n + m)/2;({AKA_mark("lis===1143###sois===31373###eois===31380###lif===31###soif===969###eoif===976###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");count++;})) {
			AKA_mark("lis===1144###sois===31397###eois===31405###lif===32###soif===993###eoif===1001###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");m2 = m1;
			if (AKA_mark("lis===1145###sois===31422###eois===31438###lif===33###soif===1018###eoif===1034###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)") && ((AKA_mark("lis===1145###sois===31422###eois===31428###lif===33###soif===1018###eoif===1024###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)")&&i != n)	&&(AKA_mark("lis===1145###sois===31432###eois===31438###lif===33###soif===1028###eoif===1034###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)")&&j != m))) {
				AKA_mark("lis===1146###sois===31454###eois===31499###lif===34###soif===1050###eoif===1095###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
			}
			else {
				if (AKA_mark("lis===1148###sois===31536###eois===31541###lif===36###soif===1132###eoif===1137###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)") && (AKA_mark("lis===1148###sois===31536###eois===31541###lif===36###soif===1132###eoif===1137###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)")&&i < n)) {
					AKA_mark("lis===1149###sois===31557###eois===31571###lif===37###soif===1153###eoif===1167###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");m1 = ar1[i++];
				}
				else {
					AKA_mark("lis===1153###sois===31658###eois===31672###lif===41###soif===1254###eoif===1268###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");m1 = ar1[j++];
				}
			}
		}
		AKA_mark("lis===1156###sois===31708###eois===31727###lif===44###soif===1304###eoif===1323###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getMedian(int[],int[],int,int)");return (m1 + m2)/2;
	}
}


/*
http://pathcrawler-online.com:8080/#
Example 1

          /* Should return the type of the triangle 
	input: 3 interger values correspond to 3 edges of a Triangle.
   	output: Should return the type of the triangle
   	which has sides of these lengths
   	3 = not a triangle
   	2 = equilateral triangle
   	1 = isoceles triangle
   	0 = other triangle

*/

//http://pathcrawler-online.com:8080/#

             /* A classic example from test generation literature
   which contains no loops or arrays
   but is interesting for its simple example of an oracle.
   This implementation does not handle negative inputs correctly */

/* Determines the type of a triangle given its three edges i,j,k */
/* 4 = Not a triangle         */
/* 3 = Equilateral triangle  */
/* 2 = Isosceles triangle */
/* 1 = Any other triangle */

/** Instrumented function tritype0(int,int,int) */
int tritype0(int i, int j, int k){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.tritype0.32599.stub"

	AKA_mark("lis===1190###sois===32633###eois===32647###lif===1###soif===38###eoif===52###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");int type_code;
	if (AKA_mark("lis===1191###sois===32655###eois===32687###lif===2###soif===60###eoif===92###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (((AKA_mark("lis===1191###sois===32656###eois===32662###lif===2###soif===61###eoif===67###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i == 0)	||(AKA_mark("lis===1191###sois===32668###eois===32674###lif===2###soif===73###eoif===79###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&j == 0))	||(AKA_mark("lis===1191###sois===32680###eois===32686###lif===2###soif===85###eoif===91###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&k == 0))) {
		AKA_mark("lis===1191###sois===32689###eois===32703###lif===2###soif===94###eoif===108###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 4;
	}
	else {
		AKA_mark("lis===1193###sois===32737###eois===32751###lif===4###soif===142###eoif===156###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 0;
		if (AKA_mark("lis===1194###sois===32761###eois===32767###lif===5###soif===166###eoif===172###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (AKA_mark("lis===1194###sois===32761###eois===32767###lif===5###soif===166###eoif===172###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i == j)) {
			AKA_mark("lis===1194###sois===32769###eois===32795###lif===5###soif===174###eoif===200###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = type_code + 1;
		}
		else {AKA_mark("lis===-1194-###sois===-32761-###eois===-327616-###lif===-5-###soif===-###eoif===-172-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");}
		if (AKA_mark("lis===1195###sois===32835###eois===32841###lif===6###soif===240###eoif===246###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (AKA_mark("lis===1195###sois===32835###eois===32841###lif===6###soif===240###eoif===246###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i == k)) {
			AKA_mark("lis===1195###sois===32843###eois===32869###lif===6###soif===248###eoif===274###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = type_code + 2;
		}
		else {AKA_mark("lis===-1195-###sois===-32835-###eois===-328356-###lif===-6-###soif===-###eoif===-246-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");}
		if (AKA_mark("lis===1196###sois===32909###eois===32915###lif===7###soif===314###eoif===320###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (AKA_mark("lis===1196###sois===32909###eois===32915###lif===7###soif===314###eoif===320###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&j == k)) {
			AKA_mark("lis===1196###sois===32917###eois===32943###lif===7###soif===322###eoif===348###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = type_code + 3;
		}
		else {AKA_mark("lis===-1196-###sois===-32909-###eois===-329096-###lif===-7-###soif===-###eoif===-320-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");}
		if (AKA_mark("lis===1197###sois===32983###eois===32997###lif===8###soif===388###eoif===402###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (AKA_mark("lis===1197###sois===32983###eois===32997###lif===8###soif===388###eoif===402###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&type_code == 0)) {
			if (AKA_mark("lis===1198###sois===33059###eois===33097###lif===9###soif===464###eoif===502###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (((AKA_mark("lis===1198###sois===33060###eois===33068###lif===9###soif===465###eoif===473###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i+j <= k)	||(AKA_mark("lis===1198###sois===33074###eois===33082###lif===9###soif===479###eoif===487###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&j+k <= i))	||(AKA_mark("lis===1198###sois===33088###eois===33096###lif===9###soif===493###eoif===501###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i+k <= j))) {
				AKA_mark("lis===1199###sois===33124###eois===33138###lif===10###soif===529###eoif===543###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 4;
			}
			else {
				AKA_mark("lis===1201###sois===33153###eois===33167###lif===12###soif===558###eoif===572###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 1;
			}
		}
		else {
			if (AKA_mark("lis===1203###sois===33191###eois===33204###lif===14###soif===596###eoif===609###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (AKA_mark("lis===1203###sois===33191###eois===33204###lif===14###soif===596###eoif===609###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&type_code > 3)) {
				AKA_mark("lis===1203###sois===33206###eois===33220###lif===14###soif===611###eoif===625###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 3;
			}
			else {
				if (AKA_mark("lis===1204###sois===33265###eois===33294###lif===15###soif===670###eoif===699###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && ((AKA_mark("lis===1204###sois===33266###eois===33280###lif===15###soif===671###eoif===685###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&type_code == 1)	&&(AKA_mark("lis===1204###sois===33286###eois===33293###lif===15###soif===691###eoif===698###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i+j > k))) {
					AKA_mark("lis===1204###sois===33296###eois===33310###lif===15###soif===701###eoif===715###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 2;
				}
				else {
					if (AKA_mark("lis===1205###sois===33339###eois===33368###lif===16###soif===744###eoif===773###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && ((AKA_mark("lis===1205###sois===33340###eois===33354###lif===16###soif===745###eoif===759###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&type_code == 2)	&&(AKA_mark("lis===1205###sois===33360###eois===33367###lif===16###soif===765###eoif===772###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i+k > j))) {
						AKA_mark("lis===1205###sois===33370###eois===33384###lif===16###soif===775###eoif===789###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 2;
					}
					else {
						if (AKA_mark("lis===1206###sois===33413###eois===33442###lif===17###soif===818###eoif===847###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && ((AKA_mark("lis===1206###sois===33414###eois===33428###lif===17###soif===819###eoif===833###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&type_code == 3)	&&(AKA_mark("lis===1206###sois===33434###eois===33441###lif===17###soif===839###eoif===846###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&j+k > i))) {
							AKA_mark("lis===1206###sois===33444###eois===33458###lif===17###soif===849###eoif===863###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 2;
						}
						else {
							AKA_mark("lis===1207###sois===33483###eois===33497###lif===18###soif===888###eoif===902###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 4;
						}
					}
				}
			}
		}
	}
	AKA_mark("lis===1209###sois===33508###eois===33525###lif===20###soif===913###eoif===930###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");return type_code;
}

//http://pathcrawler-online.com:8080/#
//Example 5
 /* Should copy all the elements
   of ordered arrays t1 and t2
   into the ordered array t3 */

/** Instrumented function Merge(int[3],int[3],int[6]) */
void Merge(int t1[3], int t2[3], int t3[6]) {AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.Merge.33691.stub"

	AKA_mark("lis===1220###sois===33737###eois===33762###lif===2###soif===51###eoif===76###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");int i = 0, j = 0, k = 0 ;
	while (AKA_mark("lis===1222###sois===33775###eois===33789###lif===4###soif===89###eoif===103###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])") && ((AKA_mark("lis===1222###sois===33775###eois===33780###lif===4###soif===89###eoif===94###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])")&&i < 3)	&&(AKA_mark("lis===1222###sois===33784###eois===33789###lif===4###soif===98###eoif===103###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])")&&j < 3))) {
		if (AKA_mark("lis===1223###sois===33813###eois===33826###lif===5###soif===127###eoif===140###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])") && (AKA_mark("lis===1223###sois===33813###eois===33826###lif===5###soif===127###eoif===140###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])")&&t1[i] < t2[j])) {
			AKA_mark("lis===1224###sois===33850###eois===33864###lif===6###soif===164###eoif===178###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");t3[k] = t1[i];
			AKA_mark("lis===1225###sois===33872###eois===33876###lif===7###soif===186###eoif===190###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");i++;
		}
		else {
			AKA_mark("lis===1228###sois===33903###eois===33917###lif===10###soif===217###eoif===231###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");t3[k] = t2[j];
			AKA_mark("lis===1229###sois===33925###eois===33929###lif===11###soif===239###eoif===243###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");j++;
		}
		AKA_mark("lis===1231###sois===33942###eois===33947###lif===13###soif===256###eoif===261###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");k++ ;
	}
	while (AKA_mark("lis===1233###sois===33963###eois===33968###lif===15###soif===277###eoif===282###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])") && (AKA_mark("lis===1233###sois===33963###eois===33968###lif===15###soif===277###eoif===282###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])")&&i < 3)) {
		AKA_mark("lis===1234###sois===33997###eois===34011###lif===16###soif===311###eoif===325###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");t3[k] = t1[i];
		AKA_mark("lis===1235###sois===34017###eois===34021###lif===17###soif===331###eoif===335###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");i++;
		AKA_mark("lis===1236###sois===34027###eois===34031###lif===18###soif===341###eoif===345###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");k++;
	}
	while (AKA_mark("lis===1238###sois===34047###eois===34052###lif===20###soif===361###eoif===366###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])") && (AKA_mark("lis===1238###sois===34047###eois===34052###lif===20###soif===361###eoif===366###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])")&&j < 3)) {
		AKA_mark("lis===1239###sois===34081###eois===34095###lif===21###soif===395###eoif===409###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");t3[k] = t2[j];
		AKA_mark("lis===1240###sois===34101###eois===34105###lif===22###soif===415###eoif===419###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");j++;
		AKA_mark("lis===1241###sois===34111###eois===34115###lif===23###soif===425###eoif===429###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Merge(int[3],int[3],int[6])");k++;
	}
}

           
 /** Instrumented function leapYear1(int) */
int leapYear1(int year) {AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.leapYear1.34145.stub"

	if (AKA_mark("lis===1247###sois===34174###eois===34187###lif===1###soif===33###eoif===46###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)") && (AKA_mark("lis===1247###sois===34174###eois===34187###lif===1###soif===33###eoif===46###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)")&&year % 4 == 0)) {
		if (AKA_mark("lis===1248###sois===34204###eois===34219###lif===2###soif===63###eoif===78###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)") && (AKA_mark("lis===1248###sois===34204###eois===34219###lif===2###soif===63###eoif===78###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)")&&year % 100 == 0)) {
			if (AKA_mark("lis===1249###sois===34240###eois===34255###lif===3###soif===99###eoif===114###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)") && (AKA_mark("lis===1249###sois===34240###eois===34255###lif===3###soif===99###eoif===114###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)")&&year % 400 == 0)) {
				AKA_mark("lis===1250###sois===34274###eois===34283###lif===4###soif===133###eoif===142###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)");return 1;
			}
			else {
				AKA_mark("lis===1252###sois===34331###eois===34340###lif===6###soif===190###eoif===199###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)");return 0;
			}
		}
		else {
			AKA_mark("lis===1255###sois===34395###eois===34404###lif===9###soif===254###eoif===263###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)");return 1;
		}
	}
	else {
		AKA_mark("lis===1258###sois===34431###eois===34440###lif===12###soif===290###eoif===299###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)");return 0;
	}
}


//http://pathcrawler-online.com:8080/#
//ExampleUnit
  /** Instrumented function uninit_var(int[3],int[3]) */
int uninit_var(int a[3], int b[3]) {AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.uninit_var.34510.stub"

	AKA_mark("lis===1265###sois===34546###eois===34555###lif===1###soif===40###eoif===49###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");int i, k;
	AKA_mark("lis===1266###sois===34563###eois===34567###lif===2###soif===57###eoif===61###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");for (i=0;AKA_mark("lis===1266###sois===34568###eois===34571###lif===2###soif===62###eoif===65###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && AKA_mark("lis===1266###sois===34568###eois===34571###lif===2###soif===62###eoif===65###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&i<2;({AKA_mark("lis===1266###sois===34573###eois===34576###lif===2###soif===67###eoif===70###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");i++;})) {
		if (AKA_mark("lis===1267###sois===34604###eois===34613###lif===3###soif===98###eoif===107###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && (AKA_mark("lis===1267###sois===34604###eois===34613###lif===3###soif===98###eoif===107###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&a[i] == 0)) {
			AKA_mark("lis===1268###sois===34634###eois===34643###lif===4###soif===128###eoif===137###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");return 0;
		}
		else {AKA_mark("lis===-1267-###sois===-34604-###eois===-346049-###lif===-3-###soif===-###eoif===-107-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");}
		if (AKA_mark("lis===1269###sois===34654###eois===34668###lif===5###soif===148###eoif===162###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && (AKA_mark("lis===1269###sois===34654###eois===34668###lif===5###soif===148###eoif===162###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&a[i] != a[i+1])) {
			AKA_mark("lis===1270###sois===34691###eois===34697###lif===6###soif===185###eoif===191###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");k = 0;
		}
		else {
			if (AKA_mark("lis===1272###sois===34722###eois===34728###lif===8###soif===216###eoif===222###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && (AKA_mark("lis===1272###sois===34722###eois===34728###lif===8###soif===216###eoif===222###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&k == 2)) {
				AKA_mark("lis===1273###sois===34752###eois===34761###lif===9###soif===246###eoif===255###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");return 0;
			}
			else {AKA_mark("lis===-1272-###sois===-34722-###eois===-347226-###lif===-8-###soif===-###eoif===-222-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");}
		}
		while (AKA_mark("lis===1274###sois===34775###eois===34787###lif===10###soif===269###eoif===281###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && (AKA_mark("lis===1274###sois===34775###eois===34787###lif===10###soif===269###eoif===281###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&b[k] != a[i])) {
			if (AKA_mark("lis===1275###sois===34815###eois===34821###lif===11###soif===309###eoif===315###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && (AKA_mark("lis===1275###sois===34815###eois===34821###lif===11###soif===309###eoif===315###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&k == 2)) {
				AKA_mark("lis===1276###sois===34846###eois===34855###lif===12###soif===340###eoif===349###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");return 0;
			}
			else {
				AKA_mark("lis===1278###sois===34885###eois===34889###lif===14###soif===379###eoif===383###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");k++;
			}
		}
	}
	AKA_mark("lis===1280###sois===34902###eois===34911###lif===16###soif===396###eoif===405###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");return 1;
}

//http://pathcrawler-online.com:8080/#
//Example 15

  /* compares (with respect to the lexicographic order) the subarrays
with the first n elements of given arrays t1 and t2,
returns  0 if the subarrays are equal,
         1 if the subarray in t1 is greater than in t2,
        -1 if the subarray in t2 is greater than in t1
*/

/** Instrumented function ArrayCmp(int,int*,int*) */
int ArrayCmp(int n, int* t1, int* t2) {AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.ArrayCmp.35262.stub"

	AKA_mark("lis===1294###sois===35301###eois===35307###lif===1###soif===43###eoif===49###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)");int i;
	AKA_mark("lis===1295###sois===35316###eois===35322###lif===2###soif===58###eoif===64###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)");for (i = 0;AKA_mark("lis===1295###sois===35323###eois===35328###lif===2###soif===65###eoif===70###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)") && AKA_mark("lis===1295###sois===35323###eois===35328###lif===2###soif===65###eoif===70###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)")&&i < n;({AKA_mark("lis===1295###sois===35330###eois===35333###lif===2###soif===72###eoif===75###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)");i++;})) {
		if (AKA_mark("lis===1296###sois===35362###eois===35375###lif===3###soif===104###eoif===117###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)") && (AKA_mark("lis===1296###sois===35362###eois===35375###lif===3###soif===104###eoif===117###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)")&&t1[i] > t2[i])) {
			AKA_mark("lis===1297###sois===35406###eois===35416###lif===4###soif===148###eoif===158###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)");return -1;
		}
		else {
			if (AKA_mark("lis===1298###sois===35431###eois===35444###lif===5###soif===173###eoif===186###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)") && (AKA_mark("lis===1298###sois===35431###eois===35444###lif===5###soif===173###eoif===186###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)")&&t1[i] < t2[i])) {
				AKA_mark("lis===1299###sois===35470###eois===35479###lif===6###soif===212###eoif===221###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)");return 1;
			}
			else {AKA_mark("lis===-1298-###sois===-35431-###eois===-3543113-###lif===-5-###soif===-###eoif===-186-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)");}
		}
	}
	AKA_mark("lis===1301###sois===35488###eois===35497###lif===8###soif===230###eoif===239###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ArrayCmp(int,int*,int*)");return 0;
}

    
//http://pathcrawler-online.com:8080/#
//Example Cross
	//Cay loi: if(x < 1)  da them dau "="
/** Instrumented function spec_f(int) */
int spec_f(int x){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\spec_f(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.spec_f.35611.stub"

	if (AKA_mark("lis===1309###sois===35633###eois===35637###lif===1###soif===26###eoif===30###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\spec_f(int)") && (AKA_mark("lis===1309###sois===35633###eois===35637###lif===1###soif===26###eoif===30###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\spec_f(int)")&&x<=1)) {
		AKA_mark("lis===1310###sois===35665###eois===35679###lif===2###soif===58###eoif===72###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\spec_f(int)");x = 2*(x + 1);
	}
	else {
		AKA_mark("lis===1312###sois===35695###eois===35703###lif===4###soif===88###eoif===96###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\spec_f(int)");x = 2*x;
	}
	AKA_mark("lis===1313###sois===35708###eois===35717###lif===5###soif===101###eoif===110###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\spec_f(int)");return x;
} 

/** Instrumented function TriTangle2(int,int,int) */
int TriTangle2(int a, int b, int c)//sach, khong duoc
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.TriTangle2.35730.stub"

	AKA_mark("lis===1319###sois===35860###eois===35871###lif===3###soif===134###eoif===145###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");int  match;
	AKA_mark("lis===1320###sois===35873###eois===35883###lif===4###soif===147###eoif===157###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");match = 0;
	if (AKA_mark("lis===1321###sois===35888###eois===35894###lif===5###soif===162###eoif===168###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1321###sois===35888###eois===35894###lif===5###soif===162###eoif===168###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&a == b)) {
		AKA_mark("lis===1322###sois===35904###eois===35922###lif===6###soif===178###eoif===196###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");match = match + 1;
	}
	else {AKA_mark("lis===-1321-###sois===-35888-###eois===-358886-###lif===-5-###soif===-###eoif===-168-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");}
	if (AKA_mark("lis===1323###sois===35933###eois===35939###lif===7###soif===207###eoif===213###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1323###sois===35933###eois===35939###lif===7###soif===207###eoif===213###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&a == c)) {
		AKA_mark("lis===1324###sois===35949###eois===35967###lif===8###soif===223###eoif===241###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");match = match + 2;
	}
	else {AKA_mark("lis===-1323-###sois===-35933-###eois===-359336-###lif===-7-###soif===-###eoif===-213-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");}
	if (AKA_mark("lis===1325###sois===35978###eois===35984###lif===9###soif===252###eoif===258###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1325###sois===35978###eois===35984###lif===9###soif===252###eoif===258###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&b == c)) {
		AKA_mark("lis===1326###sois===35994###eois===36012###lif===10###soif===268###eoif===286###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");match = match + 3;
	}
	else {AKA_mark("lis===-1325-###sois===-35978-###eois===-359786-###lif===-9-###soif===-###eoif===-258-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");}
	if (AKA_mark("lis===1327###sois===36023###eois===36033###lif===11###soif===297###eoif===307###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1327###sois===36023###eois===36033###lif===11###soif===297###eoif===307###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&match == 0)) {
		if (AKA_mark("lis===1328###sois===36046###eois===36056###lif===12###soif===320###eoif===330###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1328###sois===36046###eois===36056###lif===12###soif===320###eoif===330###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&(a+b) <= c)) {
			AKA_mark("lis===1329###sois===36067###eois===36076###lif===13###soif===341###eoif===350###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 0;
		}
		else {
			if (AKA_mark("lis===1330###sois===36096###eois===36106###lif===14###soif===370###eoif===380###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1330###sois===36096###eois===36106###lif===14###soif===370###eoif===380###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&(b+c) <= a)) {
				AKA_mark("lis===1331###sois===36119###eois===36128###lif===15###soif===393###eoif===402###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 0;
			}
			else {
				if (AKA_mark("lis===1332###sois===36150###eois===36160###lif===16###soif===424###eoif===434###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1332###sois===36150###eois===36160###lif===16###soif===424###eoif===434###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&(a+c) <= b)) {
					AKA_mark("lis===1333###sois===36175###eois===36184###lif===17###soif===449###eoif===458###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 0;
				}
				else {
					AKA_mark("lis===1334###sois===36215###eois===36224###lif===18###soif===489###eoif===498###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 1;
				}
			}
		}
	}
	else {
		if (AKA_mark("lis===1336###sois===36253###eois===36263###lif===20###soif===527###eoif===537###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1336###sois===36253###eois===36263###lif===20###soif===527###eoif===537###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&match == 1)) {
			if (AKA_mark("lis===1337###sois===36278###eois===36288###lif===21###soif===552###eoif===562###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1337###sois===36278###eois===36288###lif===21###soif===552###eoif===562###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&(a+c) <= b)) {
				AKA_mark("lis===1338###sois===36301###eois===36310###lif===22###soif===575###eoif===584###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 0;
			}
			else {
				AKA_mark("lis===1339###sois===36328###eois===36337###lif===23###soif===602###eoif===611###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 2;
			}
		}
		else {
			if (AKA_mark("lis===1341###sois===36360###eois===36370###lif===25###soif===634###eoif===644###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1341###sois===36360###eois===36370###lif===25###soif===634###eoif===644###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&match == 2)) {
				if (AKA_mark("lis===1342###sois===36386###eois===36396###lif===26###soif===660###eoif===670###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1342###sois===36386###eois===36396###lif===26###soif===660###eoif===670###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&(a+c) <= b)) {
					AKA_mark("lis===1343###sois===36410###eois===36419###lif===27###soif===684###eoif===693###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 0;
				}
				else {
					AKA_mark("lis===1344###sois===36438###eois===36447###lif===28###soif===712###eoif===721###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 2;
				}
			}
			else {
				if (AKA_mark("lis===1346###sois===36472###eois===36482###lif===30###soif===746###eoif===756###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1346###sois===36472###eois===36482###lif===30###soif===746###eoif===756###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&match == 3)) {
					if (AKA_mark("lis===1347###sois===36499###eois===36509###lif===31###soif===773###eoif===783###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)") && (AKA_mark("lis===1347###sois===36499###eois===36509###lif===31###soif===773###eoif===783###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)")&&(b+c) <= a)) {
						AKA_mark("lis===1348###sois===36524###eois===36533###lif===32###soif===798###eoif===807###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 0;
					}
					else {
						AKA_mark("lis===1349###sois===36553###eois===36562###lif===33###soif===827###eoif===836###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 1;
					}
				}
				else {
					AKA_mark("lis===1350###sois===36581###eois===36590###lif===34###soif===855###eoif===864###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 3;
				}
			}
		}
	}
	AKA_mark("lis===1351###sois===36603###eois===36612###lif===35###soif===877###eoif===886###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\TriTangle2(int,int,int)");return 0;
}//the end.

//Sach thay Hung
/** Instrumented function average(double[],double,double,int&,int&) */
double average(double value[], double min, double max, int& tcnt, int& vcnt) //sach
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.average.36654.stub"

	AKA_mark("lis===1357###sois===36736###eois===36749###lif===2###soif===89###eoif===102###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");double sum=0;
	AKA_mark("lis===1358###sois===36752###eois===36760###lif===3###soif===105###eoif===113###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");int i=0;
	AKA_mark("lis===1359###sois===36763###eois===36775###lif===4###soif===116###eoif===128###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");tcnt=vcnt=0;
	while (AKA_mark("lis===1360###sois===36784###eois===36810###lif===5###soif===137###eoif===163###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)") && ((AKA_mark("lis===1360###sois===36784###eois===36798###lif===5###soif===137###eoif===151###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)")&&value[i]!=-999)	&&(AKA_mark("lis===1360###sois===36802###eois===36810###lif===5###soif===155###eoif===163###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)")&&tcnt<100))) {
		AKA_mark("lis===1362###sois===36819###eois===36826###lif===7###soif===172###eoif===179###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");tcnt++;
		if (AKA_mark("lis===1363###sois===36833###eois===36862###lif===8###soif===186###eoif===215###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)") && ((AKA_mark("lis===1363###sois===36833###eois===36846###lif===8###soif===186###eoif===199###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)")&&min<=value[i])	&&(AKA_mark("lis===1363###sois===36849###eois===36862###lif===8###soif===202###eoif===215###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)")&&value[i]<=max))) {
			AKA_mark("lis===1365###sois===36873###eois===36887###lif===10###soif===226###eoif===240###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");sum+=value[i];
			AKA_mark("lis===1366###sois===36892###eois===36899###lif===11###soif===245###eoif===252###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");vcnt++;
		}
		else {AKA_mark("lis===-1363-###sois===-36833-###eois===-3683329-###lif===-8-###soif===-###eoif===-215-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");}
		AKA_mark("lis===1368###sois===36908###eois===36912###lif===13###soif===261###eoif===265###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");i++;
	}
	if (AKA_mark("lis===1371###sois===36925###eois===36931###lif===16###soif===278###eoif===284###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)") && (AKA_mark("lis===1371###sois===36925###eois===36931###lif===16###soif===278###eoif===284###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)")&&vcnt>0)) {
		AKA_mark("lis===1372###sois===36936###eois===36952###lif===17###soif===289###eoif===305###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");return sum/vcnt;
	}
	else {AKA_mark("lis===-1371-###sois===-36925-###eois===-369256-###lif===-16-###soif===-###eoif===-284-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");}
	AKA_mark("lis===1373###sois===36956###eois===36968###lif===18###soif===309###eoif===321###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");return -999;
}

/** Instrumented function multiConditionTest(int) */
int multiConditionTest(int x){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.multiConditionTest.36979.stub"

	if (AKA_mark("lis===1377###sois===37011###eois===37014###lif===1###soif===36###eoif===39###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (AKA_mark("lis===1377###sois===37011###eois===37014###lif===1###soif===36###eoif===39###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<0)) {
		if (AKA_mark("lis===1378###sois===37023###eois===37028###lif===2###soif===48###eoif===53###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (AKA_mark("lis===1378###sois===37023###eois===37028###lif===2###soif===48###eoif===53###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x>-10)) {
			if (AKA_mark("lis===1379###sois===37038###eois===37042###lif===3###soif===63###eoif===67###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (AKA_mark("lis===1379###sois===37038###eois===37042###lif===3###soif===63###eoif===67###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x>-5)) {
				AKA_mark("lis===1380###sois===37050###eois===37059###lif===4###soif===75###eoif===84###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 1;
			}
			else {
				if (AKA_mark("lis===1382###sois===37078###eois===37092###lif===6###soif===103###eoif===117###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && ((AKA_mark("lis===1382###sois===37078###eois===37083###lif===6###soif===103###eoif===108###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<=-5)	&&(AKA_mark("lis===1382###sois===37087###eois===37092###lif===6###soif===112###eoif===117###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x>=-8))) {
					AKA_mark("lis===1383###sois===37100###eois===37109###lif===7###soif===125###eoif===134###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 2;
				}
				else {
					AKA_mark("lis===1385###sois===37125###eois===37134###lif===9###soif===150###eoif===159###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 3;
				}
			}
		}
		else {
			AKA_mark("lis===1387###sois===37148###eois===37158###lif===11###soif===173###eoif===183###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return -1;
		}
	}
	else {
		if (AKA_mark("lis===1389###sois===37173###eois===37183###lif===13###soif===198###eoif===208###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && ((AKA_mark("lis===1389###sois===37173###eois===37176###lif===13###soif===198###eoif===201###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x>0)	&&(AKA_mark("lis===1389###sois===37178###eois===37183###lif===13###soif===203###eoif===208###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<100))) {
			if (AKA_mark("lis===1390###sois===37192###eois===37196###lif===14###soif===217###eoif===221###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (AKA_mark("lis===1390###sois===37192###eois===37196###lif===14###soif===217###eoif===221###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<50)) {
				if (AKA_mark("lis===1391###sois===37206###eois===37210###lif===15###soif===231###eoif===235###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (AKA_mark("lis===1391###sois===37206###eois===37210###lif===15###soif===231###eoif===235###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<20)) {
					AKA_mark("lis===1392###sois===37218###eois===37227###lif===16###soif===243###eoif===252###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 4;
				}
				else {
					AKA_mark("lis===1394###sois===37243###eois===37252###lif===18###soif===268###eoif===277###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 5;
				}
			}
			else {
				if (AKA_mark("lis===1396###sois===37269###eois===37280###lif===20###soif===294###eoif===305###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && ((AKA_mark("lis===1396###sois===37269###eois===37274###lif===20###soif===294###eoif===299###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x>=50)	&&(AKA_mark("lis===1396###sois===37276###eois===37280###lif===20###soif===301###eoif===305###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<80))) {
					if (AKA_mark("lis===1397###sois===37290###eois===37295###lif===21###soif===315###eoif===320###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (AKA_mark("lis===1397###sois===37290###eois===37295###lif===21###soif===315###eoif===320###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x==60)) {
						AKA_mark("lis===1397###sois===37297###eois===37306###lif===21###soif===322###eoif===331###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 6;
					}
					else {
						AKA_mark("lis===1398###sois===37316###eois===37325###lif===22###soif===341###eoif===350###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 7;
					}
				}
				else {
					AKA_mark("lis===1400###sois===37339###eois===37348###lif===24###soif===364###eoif===373###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 8;
				}
			}
		}
		else {
			if (AKA_mark("lis===1402###sois===37363###eois===37369###lif===26###soif===388###eoif===394###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (AKA_mark("lis===1402###sois===37363###eois===37369###lif===26###soif===388###eoif===394###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x==101)) {
				AKA_mark("lis===1403###sois===37375###eois===37384###lif===27###soif===400###eoif===409###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 9;
			}
			else {
				AKA_mark("lis===1405###sois===37396###eois===37405###lif===29###soif===421###eoif===430###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return x;
			}
		}
	}
}

/** Instrumented function distanceTest(float) */
float distanceTest(float x){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.distanceTest.37418.stub"

	if (AKA_mark("lis===1409###sois===37446###eois===37449###lif===1###soif===34###eoif===37###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)") && (AKA_mark("lis===1409###sois===37446###eois===37449###lif===1###soif===34###eoif===37###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)")&&x>1)) {
		if (AKA_mark("lis===1410###sois===37458###eois===37465###lif===2###soif===46###eoif===53###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)") && (AKA_mark("lis===1410###sois===37458###eois===37465###lif===2###soif===46###eoif===53###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)")&&x<1.001)) {
			if (AKA_mark("lis===1411###sois===37475###eois===37484###lif===3###soif===63###eoif===72###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)") && (AKA_mark("lis===1411###sois===37475###eois===37484###lif===3###soif===63###eoif===72###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)")&&x<1.00001)) {
				AKA_mark("lis===1412###sois===37492###eois===37501###lif===4###soif===80###eoif===89###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");return 1;
			}
			else {
				AKA_mark("lis===1414###sois===37517###eois===37526###lif===6###soif===105###eoif===114###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");return 2;
			}
		}
		else {
			AKA_mark("lis===1416###sois===37540###eois===37549###lif===8###soif===128###eoif===137###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");return 3;
		}
	}
	else {
		if (AKA_mark("lis===1418###sois===37564###eois===37580###lif===10###soif===152###eoif===168###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)") && ((AKA_mark("lis===1418###sois===37564###eois===37568###lif===10###soif===152###eoif===156###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)")&&x<=1)	&&(AKA_mark("lis===1418###sois===37572###eois===37580###lif===10###soif===160###eoif===168###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)")&&x>=0.999))) {
			AKA_mark("lis===1419###sois===37586###eois===37595###lif===11###soif===174###eoif===183###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");return 4;
		}
		else {AKA_mark("lis===-1418-###sois===-37564-###eois===-3756416-###lif===-10-###soif===-###eoif===-168-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");}
	}
	AKA_mark("lis===1421###sois===37602###eois===37611###lif===13###soif===190###eoif===199###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");return 5;
}

/** Instrumented function smallIntervalTest(double) */
double smallIntervalTest(double x){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.smallIntervalTest.37625.stub"

	if (AKA_mark("lis===1425###sois===37659###eois===37664###lif===1###soif===41###eoif===46###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)") && (AKA_mark("lis===1425###sois===37659###eois===37664###lif===1###soif===41###eoif===46###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)")&&x>1.0)) {
		if (AKA_mark("lis===1426###sois===37673###eois===37696###lif===2###soif===55###eoif===78###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)") && ((AKA_mark("lis===1426###sois===37673###eois===37682###lif===2###soif===55###eoif===64###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)")&&x>2.00001)	&&(AKA_mark("lis===1426###sois===37686###eois===37696###lif===2###soif===68###eoif===78###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)")&&x<2.000015))) {
			AKA_mark("lis===1427###sois===37703###eois===37712###lif===3###soif===85###eoif===94###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)");return 1;
		}
		else {
			if (AKA_mark("lis===1429###sois===37729###eois===37752###lif===5###soif===111###eoif===134###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)") && ((AKA_mark("lis===1429###sois===37729###eois===37739###lif===5###soif===111###eoif===121###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)")&&x<=2.00001)	&&(AKA_mark("lis===1429###sois===37743###eois===37752###lif===5###soif===125###eoif===134###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)")&&x>=1.9999))) {
				AKA_mark("lis===1430###sois===37759###eois===37768###lif===6###soif===141###eoif===150###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)");return 2;
			}
			else {
				AKA_mark("lis===1432###sois===37782###eois===37791###lif===8###soif===164###eoif===173###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)");return 3;
			}
		}
	}
	else {AKA_mark("lis===-1425-###sois===-37659-###eois===-376595-###lif===-1-###soif===-###eoif===-46-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)");}
	AKA_mark("lis===1434###sois===37798###eois===37807###lif===10###soif===180###eoif===189###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)");return 4;
}
/** Instrumented function mmin(int,int) */
int mmin(int a, int b){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\mmin(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.mmin.37816.stub"

	AKA_mark("lis===1437###sois===37838###eois===37847###lif===1###soif===26###eoif===35###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\mmin(int,int)");return 1;
}
/** Instrumented function gcd3(int,int) */
int gcd3(int a, int b)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.gcd3.37856.stub"

	AKA_mark("lis===1441###sois===37880###eois===37889###lif===2###soif===28###eoif===37###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");int temp;
	while (AKA_mark("lis===1443###sois===37901###eois===37906###lif===4###soif===49###eoif===54###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)") && (AKA_mark("lis===1443###sois===37901###eois===37906###lif===4###soif===49###eoif===54###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)")&&b > 0)) {
		AKA_mark("lis===1444###sois===37913###eois===37926###lif===5###soif===61###eoif===74###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");temp = a % b;
		AKA_mark("lis===1445###sois===37930###eois===37936###lif===6###soif===78###eoif===84###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");a = b;
		AKA_mark("lis===1446###sois===37940###eois===37949###lif===7###soif===88###eoif===97###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");b = temp;
	}
	AKA_mark("lis===1449###sois===37958###eois===37967###lif===10###soif===106###eoif===115###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");return a;
}


struct Date{
	int date;
	int month;
	int year;
};

/** Instrumented function test2(Date) */
int test2(Date Date){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\test2(Date)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.test2.38037.stub"

	if (AKA_mark("lis===1460###sois===38060###eois===38071###lif===1###soif===27###eoif===38###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\test2(Date)") && (AKA_mark("lis===1460###sois===38060###eois===38071###lif===1###soif===27###eoif===38###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\test2(Date)")&&Date.date<3)) {
		AKA_mark("lis===1461###sois===38077###eois===38086###lif===2###soif===44###eoif===53###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\test2(Date)");return 1;
	}
	else {
		AKA_mark("lis===1463###sois===38098###eois===38107###lif===4###soif===65###eoif===74###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\test2(Date)");return 2;
	}
}
//Tinh so ngay trong mot khoang thoi gian tu ngay born den ngay today
/** Instrumented function calculateAge0(Date,Date) */
Date calculateAge0(Date born, Date today)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.calculateAge0.38188.stub"

	AKA_mark("lis===1468###sois===38230###eois===38242###lif===2###soif===47###eoif===59###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");int x, y, z;
	AKA_mark("lis===1469###sois===38245###eois===38257###lif===3###soif===62###eoif===74###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");Date result;
	AKA_mark("lis===1471###sois===38262###eois===38284###lif===5###soif===79###eoif===101###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");int date = today.date;
	AKA_mark("lis===1472###sois===38287###eois===38311###lif===6###soif===104###eoif===128###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");int month = today.month;
	AKA_mark("lis===1473###sois===38314###eois===38336###lif===7###soif===131###eoif===153###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");int year = today.year;
	AKA_mark("lis===1475###sois===38341###eois===38363###lif===9###soif===158###eoif===180###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");int date1 = born.date;
	AKA_mark("lis===1476###sois===38366###eois===38390###lif===10###soif===183###eoif===207###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");int month1 = born.month;
	AKA_mark("lis===1477###sois===38393###eois===38415###lif===11###soif===210###eoif===232###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");int year1 = born.year;
	AKA_mark("lis===1479###sois===38420###eois===38447###lif===13###soif===237###eoif===264###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");x = ((year) - (year1 + 1));
	{
		if (AKA_mark("lis===1481###sois===38459###eois===38491###lif===15###soif===276###eoif===308###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && ((AKA_mark("lis===1481###sois===38460###eois===38473###lif===15###soif===277###eoif===290###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month>=month1)	&&(AKA_mark("lis===1481###sois===38479###eois===38490###lif===15###soif===296###eoif===307###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date>=date1))) {
			{
				AKA_mark("lis===1483###sois===38506###eois===38527###lif===17###soif===323###eoif===344###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");y = (month - month1);
				AKA_mark("lis===1484###sois===38533###eois===38543###lif===18###soif===350###eoif===360###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");x = x + 1;
				AKA_mark("lis===1485###sois===38549###eois===38568###lif===19###soif===366###eoif===385###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = (date - date1);
			}
		}
		else {
			if (AKA_mark("lis===1487###sois===38589###eois===38683###lif===21###soif===406###eoif===500###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1487###sois===38591###eois===38603###lif===21###soif===408###eoif===420###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month>month1)	&&(AKA_mark("lis===1487###sois===38609###eois===38619###lif===21###soif===426###eoif===436###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date<date1))	&&((((AKA_mark("lis===1487###sois===38627###eois===38635###lif===21###soif===444###eoif===452###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==5)	||(AKA_mark("lis===1487###sois===38642###eois===38650###lif===21###soif===459###eoif===467###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==7))	||(AKA_mark("lis===1487###sois===38656###eois===38665###lif===21###soif===473###eoif===482###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==10))	||(AKA_mark("lis===1487###sois===38672###eois===38681###lif===21###soif===489###eoif===498###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==12)))) {
				{
					AKA_mark("lis===1489###sois===38698###eois===38725###lif===23###soif===515###eoif===542###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");y = ((month - month1) - 1);
					AKA_mark("lis===1490###sois===38731###eois===38741###lif===24###soif===548###eoif===558###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");x = x + 1;
					AKA_mark("lis===1491###sois===38747###eois===38773###lif===25###soif===564###eoif===590###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = ((30 - date1) + date);
				}
			}
			else {
				if (AKA_mark("lis===1493###sois===38794###eois===38927###lif===27###soif===611###eoif===744###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1493###sois===38796###eois===38808###lif===27###soif===613###eoif===625###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month>month1)	&&(AKA_mark("lis===1493###sois===38814###eois===38824###lif===27###soif===631###eoif===641###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date<date1))	&&(((((((AKA_mark("lis===1493###sois===38832###eois===38840###lif===27###soif===649###eoif===657###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==4)	||(AKA_mark("lis===1493###sois===38846###eois===38854###lif===27###soif===663###eoif===671###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==1))	||(AKA_mark("lis===1493###sois===38860###eois===38868###lif===27###soif===677###eoif===685###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==2))	||(AKA_mark("lis===1493###sois===38874###eois===38882###lif===27###soif===691###eoif===699###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==6))	||(AKA_mark("lis===1493###sois===38888###eois===38896###lif===27###soif===705###eoif===713###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==8))	||(AKA_mark("lis===1493###sois===38902###eois===38910###lif===27###soif===719###eoif===727###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==9))	||(AKA_mark("lis===1493###sois===38916###eois===38925###lif===27###soif===733###eoif===742###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==11)))) {
					{
						AKA_mark("lis===1495###sois===38942###eois===38969###lif===29###soif===759###eoif===786###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");y = ((month - month1) - 1);
						AKA_mark("lis===1496###sois===38975###eois===38985###lif===30###soif===792###eoif===802###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");x = x + 1;
						AKA_mark("lis===1497###sois===38991###eois===39017###lif===31###soif===808###eoif===834###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = ((31 - date1) + date);
					}
				}
				else {
					if (AKA_mark("lis===1501###sois===39043###eois===39087###lif===35###soif===860###eoif===904###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1501###sois===39044###eois===39056###lif===35###soif===861###eoif===873###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month>month1)	&&(AKA_mark("lis===1501###sois===39062###eois===39072###lif===35###soif===879###eoif===889###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date<date1))	&&(AKA_mark("lis===1501###sois===39078###eois===39086###lif===35###soif===895###eoif===903###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==3))) {
						{
							AKA_mark("lis===1503###sois===39102###eois===39129###lif===37###soif===919###eoif===946###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");y = ((month - month1) - 1);
							AKA_mark("lis===1504###sois===39135###eois===39145###lif===38###soif===952###eoif===962###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");x = x + 1;
							AKA_mark("lis===1505###sois===39151###eois===39177###lif===39###soif===968###eoif===994###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = ((28 - date1) + date);
						}
					}
					else {
						if (AKA_mark("lis===1509###sois===39203###eois===39338###lif===43###soif===1020###eoif===1155###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1509###sois===39205###eois===39218###lif===43###soif===1022###eoif===1035###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==month1)	&&(AKA_mark("lis===1509###sois===39224###eois===39234###lif===43###soif===1041###eoif===1051###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date<date1))	&&(((((((AKA_mark("lis===1509###sois===39242###eois===39250###lif===43###soif===1059###eoif===1067###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==1)	||(AKA_mark("lis===1509###sois===39256###eois===39264###lif===43###soif===1073###eoif===1081###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==2))	||(AKA_mark("lis===1509###sois===39270###eois===39278###lif===43###soif===1087###eoif===1095###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==4))	||(AKA_mark("lis===1509###sois===39285###eois===39293###lif===43###soif===1102###eoif===1110###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==6))	||(AKA_mark("lis===1509###sois===39299###eois===39307###lif===43###soif===1116###eoif===1124###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==8))	||(AKA_mark("lis===1509###sois===39313###eois===39321###lif===43###soif===1130###eoif===1138###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==9))	||(AKA_mark("lis===1509###sois===39327###eois===39336###lif===43###soif===1144###eoif===1153###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==11)))) {
							{
								AKA_mark("lis===1511###sois===39353###eois===39360###lif===45###soif===1170###eoif===1177###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");y = 11;
								AKA_mark("lis===1512###sois===39366###eois===39392###lif===46###soif===1183###eoif===1209###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = ((31 - date1) + date);
							}
						}
						else {
							if (AKA_mark("lis===1516###sois===39418###eois===39512###lif===50###soif===1235###eoif===1329###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1516###sois===39420###eois===39433###lif===50###soif===1237###eoif===1250###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==month1)	&&(AKA_mark("lis===1516###sois===39439###eois===39449###lif===50###soif===1256###eoif===1266###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date<date1))	&&((((AKA_mark("lis===1516###sois===39457###eois===39465###lif===50###soif===1274###eoif===1282###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==5)	||(AKA_mark("lis===1516###sois===39471###eois===39479###lif===50###soif===1288###eoif===1296###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==7))	||(AKA_mark("lis===1516###sois===39485###eois===39494###lif===50###soif===1302###eoif===1311###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==10))	||(AKA_mark("lis===1516###sois===39501###eois===39510###lif===50###soif===1318###eoif===1327###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==12)))) {
								{
									AKA_mark("lis===1518###sois===39527###eois===39553###lif===52###soif===1344###eoif===1370###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = ((30 - date1) + date);
								}
							}
							else {
								if (AKA_mark("lis===1522###sois===39579###eois===39618###lif===56###soif===1396###eoif===1435###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1522###sois===39579###eois===39592###lif===56###soif===1396###eoif===1409###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==month1)	&&(AKA_mark("lis===1522###sois===39596###eois===39606###lif===56###soif===1413###eoif===1423###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date<date1))	&&(AKA_mark("lis===1522###sois===39610###eois===39618###lif===56###soif===1427###eoif===1435###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==3))) {
									{
										AKA_mark("lis===1524###sois===39633###eois===39659###lif===58###soif===1450###eoif===1476###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = ((28 - date1) + date);
									}
								}
								else {
									if (AKA_mark("lis===1528###sois===39685###eois===39820###lif===62###soif===1502###eoif===1637###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1528###sois===39687###eois===39699###lif===62###soif===1504###eoif===1516###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month<month1)	&&(AKA_mark("lis===1528###sois===39705###eois===39715###lif===62###soif===1522###eoif===1532###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date>date1))	&&(((((((AKA_mark("lis===1528###sois===39723###eois===39731###lif===62###soif===1540###eoif===1548###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==1)	||(AKA_mark("lis===1528###sois===39737###eois===39745###lif===62###soif===1554###eoif===1562###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==3))	||(AKA_mark("lis===1528###sois===39751###eois===39759###lif===62###soif===1568###eoif===1576###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==5))	||(AKA_mark("lis===1528###sois===39766###eois===39774###lif===62###soif===1583###eoif===1591###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==7))	||(AKA_mark("lis===1528###sois===39780###eois===39788###lif===62###soif===1597###eoif===1605###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==8))	||(AKA_mark("lis===1528###sois===39794###eois===39803###lif===62###soif===1611###eoif===1620###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==10))	||(AKA_mark("lis===1528###sois===39809###eois===39818###lif===62###soif===1626###eoif===1635###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==12)))) {
										{
											AKA_mark("lis===1530###sois===39835###eois===39863###lif===64###soif===1652###eoif===1680###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");y = ((12 - month1) + month);
											AKA_mark("lis===1531###sois===39869###eois===39886###lif===65###soif===1686###eoif===1703###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = date - date1;
										}
									}
									else {
										if (AKA_mark("lis===1535###sois===39912###eois===40004###lif===69###soif===1729###eoif===1821###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1535###sois===39914###eois===39926###lif===69###soif===1731###eoif===1743###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month<month1)	&&(AKA_mark("lis===1535###sois===39932###eois===39942###lif===69###soif===1749###eoif===1759###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date>date1))	&&((((AKA_mark("lis===1535###sois===39950###eois===39958###lif===69###soif===1767###eoif===1775###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==4)	||(AKA_mark("lis===1535###sois===39964###eois===39972###lif===69###soif===1781###eoif===1789###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==6))	||(AKA_mark("lis===1535###sois===39978###eois===39986###lif===69###soif===1795###eoif===1803###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==9))	||(AKA_mark("lis===1535###sois===39993###eois===40002###lif===69###soif===1810###eoif===1819###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==11)))) {
											{
												AKA_mark("lis===1537###sois===40019###eois===40047###lif===71###soif===1836###eoif===1864###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");y = ((12 - month1) + month);
												AKA_mark("lis===1538###sois===40053###eois===40070###lif===72###soif===1870###eoif===1887###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = date - date1;
											}
										}
										else {
											if (AKA_mark("lis===1542###sois===40096###eois===40140###lif===76###soif===1913###eoif===1957###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1542###sois===40097###eois===40109###lif===76###soif===1914###eoif===1926###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month<month1)	&&(AKA_mark("lis===1542###sois===40115###eois===40125###lif===76###soif===1932###eoif===1942###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date>date1))	&&(AKA_mark("lis===1542###sois===40131###eois===40139###lif===76###soif===1948###eoif===1956###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==2))) {
												{
													AKA_mark("lis===1544###sois===40155###eois===40183###lif===78###soif===1972###eoif===2000###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");y = ((12 - month1) + month);
													AKA_mark("lis===1545###sois===40189###eois===40206###lif===79###soif===2006###eoif===2023###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = date - date1;
												}
											}
											else {
												if (AKA_mark("lis===1549###sois===40232###eois===40366###lif===83###soif===2049###eoif===2183###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1549###sois===40234###eois===40246###lif===83###soif===2051###eoif===2063###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month<month1)	&&(AKA_mark("lis===1549###sois===40252###eois===40262###lif===83###soif===2069###eoif===2079###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date<date1))	&&(((((((AKA_mark("lis===1549###sois===40270###eois===40278###lif===83###soif===2087###eoif===2095###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==1)	||(AKA_mark("lis===1549###sois===40284###eois===40292###lif===83###soif===2101###eoif===2109###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==2))	||(AKA_mark("lis===1549###sois===40298###eois===40306###lif===83###soif===2115###eoif===2123###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==4))	||(AKA_mark("lis===1549###sois===40313###eois===40321###lif===83###soif===2130###eoif===2138###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==6))	||(AKA_mark("lis===1549###sois===40327###eois===40335###lif===83###soif===2144###eoif===2152###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==8))	||(AKA_mark("lis===1549###sois===40341###eois===40349###lif===83###soif===2158###eoif===2166###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==9))	||(AKA_mark("lis===1549###sois===40355###eois===40364###lif===83###soif===2172###eoif===2181###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==11)))) {
													{
														AKA_mark("lis===1551###sois===40381###eois===40413###lif===85###soif===2198###eoif===2230###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");y = ((12 - month1) + month - 1);
														AKA_mark("lis===1552###sois===40419###eois===40445###lif===86###soif===2236###eoif===2262###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = ((31 - date1) + date);
													}
												}
												else {
													if (AKA_mark("lis===1556###sois===40471###eois===40564###lif===90###soif===2288###eoif===2381###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1556###sois===40473###eois===40485###lif===90###soif===2290###eoif===2302###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month<month1)	&&(AKA_mark("lis===1556###sois===40491###eois===40501###lif===90###soif===2308###eoif===2318###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date<date1))	&&((((AKA_mark("lis===1556###sois===40509###eois===40517###lif===90###soif===2326###eoif===2334###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==5)	||(AKA_mark("lis===1556###sois===40523###eois===40531###lif===90###soif===2340###eoif===2348###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==7))	||(AKA_mark("lis===1556###sois===40537###eois===40546###lif===90###soif===2354###eoif===2363###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==10))	||(AKA_mark("lis===1556###sois===40553###eois===40562###lif===90###soif===2370###eoif===2379###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==12)))) {
														{
															AKA_mark("lis===1558###sois===40579###eois===40611###lif===92###soif===2396###eoif===2428###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");y = ((12 - month1) + month - 1);
															AKA_mark("lis===1559###sois===40617###eois===40643###lif===93###soif===2434###eoif===2460###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = ((30 - date1) + date);
														}
													}
													else {
														if (AKA_mark("lis===1561###sois===40664###eois===40708###lif===95###soif===2481###eoif===2525###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)") && (((AKA_mark("lis===1561###sois===40665###eois===40677###lif===95###soif===2482###eoif===2494###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month<month1)	&&(AKA_mark("lis===1561###sois===40683###eois===40693###lif===95###soif===2500###eoif===2510###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&date<date1))	&&(AKA_mark("lis===1561###sois===40699###eois===40707###lif===95###soif===2516###eoif===2524###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)")&&month==3))) {
															{
																AKA_mark("lis===1563###sois===40723###eois===40755###lif===97###soif===2540###eoif===2572###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");y = ((12 - month1) + month - 1);
																AKA_mark("lis===1564###sois===40761###eois===40787###lif===98###soif===2578###eoif===2604###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");z = ((28 - date1) + date);
															}
														}
														else {
															AKA_mark("lis===1569###sois===40815###eois===40830###lif===103###soif===2632###eoif===2647###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");x = y = z = -1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	AKA_mark("lis===1573###sois===40844###eois===40860###lif===107###soif===2661###eoif===2677###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");result.date = z;
	AKA_mark("lis===1574###sois===40863###eois===40880###lif===108###soif===2680###eoif===2697###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");result.month = y;
	AKA_mark("lis===1575###sois===40883###eois===40899###lif===109###soif===2700###eoif===2716###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");result.year = x;
	AKA_mark("lis===1577###sois===40904###eois===40918###lif===111###soif===2721###eoif===2735###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateAge0(Date,Date)");return result;
}
//Tinh toan cung hoang dao (Zodiac) va du bao
/** Instrumented function calculateZodiac2(Date) */
int calculateZodiac2(Date born){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.calculateZodiac2.40974.stub"

	AKA_mark("lis===1582###sois===41007###eois===41029###lif===2###soif===37###eoif===59###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");int date1 = born.date;
	AKA_mark("lis===1583###sois===41032###eois===41056###lif===3###soif===62###eoif===86###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");int month1 = born.month;
	AKA_mark("lis===1584###sois===41059###eois===41081###lif===4###soif===89###eoif===111###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");int year1 = born.year;
	AKA_mark("lis===1586###sois===41086###eois===41092###lif===6###soif===116###eoif===122###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");int t;
	{
		if (AKA_mark("lis===1590###sois===41108###eois===41183###lif===10###soif===138###eoif===213###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1590###sois===41110###eois===41119###lif===10###soif===140###eoif===149###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==3)	&&(AKA_mark("lis===1590###sois===41125###eois===41134###lif===10###soif===155###eoif===164###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=21))	&&(AKA_mark("lis===1590###sois===41140###eois===41149###lif===10###soif===170###eoif===179###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=31))	||((AKA_mark("lis===1590###sois===41157###eois===41166###lif===10###soif===187###eoif===196###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==4)	&&(AKA_mark("lis===1590###sois===41172###eois===41181###lif===10###soif===202###eoif===211###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=19)))) {
			AKA_mark("lis===1593###sois===41196###eois===41242###lif===13###soif===226###eoif===272###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t\tYour Zodiac sign is ARIES";
			AKA_mark("lis===1594###sois===41247###eois===41354###lif===14###soif===277###eoif===384###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n 2012 would be a good year overall. You will experience a rise in financial luck and inflows";
			AKA_mark("lis===1595###sois===41359###eois===41408###lif===15###soif===389###eoif===438###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
			AKA_mark("lis===1596###sois===41413###eois===41419###lif===16###soif===443###eoif===449###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 1;
		}
		else {
			if (AKA_mark("lis===1599###sois===41439###eois===41514###lif===19###soif===469###eoif===544###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1599###sois===41441###eois===41450###lif===19###soif===471###eoif===480###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==4)	&&(AKA_mark("lis===1599###sois===41456###eois===41465###lif===19###soif===486###eoif===495###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=20))	&&(AKA_mark("lis===1599###sois===41471###eois===41480###lif===19###soif===501###eoif===510###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=30))	||((AKA_mark("lis===1599###sois===41488###eois===41497###lif===19###soif===518###eoif===527###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==5)	&&(AKA_mark("lis===1599###sois===41503###eois===41512###lif===19###soif===533###eoif===542###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=20)))) {
				AKA_mark("lis===1600###sois===41522###eois===41567###lif===20###soif===552###eoif===597###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\tYour Zodiac sign is TAURUS";
				AKA_mark("lis===1601###sois===41572###eois===41699###lif===21###soif===602###eoif===729###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n A very eventful year. Career would be on a high growth trajectory and bring in major progress and achievements.";
				AKA_mark("lis===1602###sois===41704###eois===41753###lif===22###soif===734###eoif===783###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
				AKA_mark("lis===1603###sois===41758###eois===41764###lif===23###soif===788###eoif===794###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 2;
			}
			else {
				if (AKA_mark("lis===1606###sois===41784###eois===41859###lif===26###soif===814###eoif===889###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1606###sois===41786###eois===41795###lif===26###soif===816###eoif===825###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==5)	&&(AKA_mark("lis===1606###sois===41801###eois===41810###lif===26###soif===831###eoif===840###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=21))	&&(AKA_mark("lis===1606###sois===41816###eois===41825###lif===26###soif===846###eoif===855###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=31))	||((AKA_mark("lis===1606###sois===41833###eois===41842###lif===26###soif===863###eoif===872###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==6)	&&(AKA_mark("lis===1606###sois===41848###eois===41857###lif===26###soif===878###eoif===887###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=20)))) {
					AKA_mark("lis===1607###sois===41867###eois===41912###lif===27###soif===897###eoif===942###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\tYour Zodiac sign is GEMINI";
					AKA_mark("lis===1608###sois===41917###eois===42066###lif===28###soif===947###eoif===1096###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\nA very positive year. Income & professional growth would be immense. You will find the ability to make some very profitable deals now.";
					AKA_mark("lis===1609###sois===42071###eois===42120###lif===29###soif===1101###eoif===1150###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
					AKA_mark("lis===1610###sois===42125###eois===42131###lif===30###soif===1155###eoif===1161###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 3;
				}
				else {
					if (AKA_mark("lis===1613###sois===42151###eois===42226###lif===33###soif===1181###eoif===1256###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1613###sois===42153###eois===42162###lif===33###soif===1183###eoif===1192###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==6)	&&(AKA_mark("lis===1613###sois===42168###eois===42177###lif===33###soif===1198###eoif===1207###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=21))	&&(AKA_mark("lis===1613###sois===42183###eois===42192###lif===33###soif===1213###eoif===1222###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=30))	||((AKA_mark("lis===1613###sois===42200###eois===42209###lif===33###soif===1230###eoif===1239###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==7)	&&(AKA_mark("lis===1613###sois===42215###eois===42224###lif===33###soif===1245###eoif===1254###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=22)))) {
						AKA_mark("lis===1614###sois===42234###eois===42279###lif===34###soif===1264###eoif===1309###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\tYour Zodiac sign is CANCER";
						AKA_mark("lis===1615###sois===42284###eois===42431###lif===35###soif===1314###eoif===1461###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\nA very eventful year, although negative thoughts and unnecessary pessimism could spoil your spirit and bring in unnecessary tension.";
						AKA_mark("lis===1616###sois===42436###eois===42485###lif===36###soif===1466###eoif===1515###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
						AKA_mark("lis===1617###sois===42490###eois===42496###lif===37###soif===1520###eoif===1526###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 4;
					}
					else {
						if (AKA_mark("lis===1620###sois===42516###eois===42591###lif===40###soif===1546###eoif===1621###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1620###sois===42518###eois===42527###lif===40###soif===1548###eoif===1557###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==7)	&&(AKA_mark("lis===1620###sois===42533###eois===42542###lif===40###soif===1563###eoif===1572###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=23))	&&(AKA_mark("lis===1620###sois===42548###eois===42557###lif===40###soif===1578###eoif===1587###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=31))	||((AKA_mark("lis===1620###sois===42565###eois===42574###lif===40###soif===1595###eoif===1604###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==8)	&&(AKA_mark("lis===1620###sois===42580###eois===42589###lif===40###soif===1610###eoif===1619###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=22)))) {
							AKA_mark("lis===1621###sois===42599###eois===42641###lif===41###soif===1629###eoif===1671###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\tYour Zodiac sign is LEO";
							AKA_mark("lis===1622###sois===42646###eois===42788###lif===42###soif===1676###eoif===1818###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\nAn exceptional year again. You will see a rise in status and expansion in career this year too. Luck will favor you throughout.";
							AKA_mark("lis===1623###sois===42793###eois===42842###lif===43###soif===1823###eoif===1872###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
							AKA_mark("lis===1624###sois===42847###eois===42853###lif===44###soif===1877###eoif===1883###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 5;
						}
						else {
							if (AKA_mark("lis===1627###sois===42873###eois===42948###lif===47###soif===1903###eoif===1978###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1627###sois===42875###eois===42884###lif===47###soif===1905###eoif===1914###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==8)	&&(AKA_mark("lis===1627###sois===42890###eois===42899###lif===47###soif===1920###eoif===1929###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=23))	&&(AKA_mark("lis===1627###sois===42905###eois===42914###lif===47###soif===1935###eoif===1944###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=31))	||((AKA_mark("lis===1627###sois===42922###eois===42931###lif===47###soif===1952###eoif===1961###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==9)	&&(AKA_mark("lis===1627###sois===42937###eois===42946###lif===47###soif===1967###eoif===1976###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=22)))) {
								AKA_mark("lis===1628###sois===42956###eois===43000###lif===48###soif===1986###eoif===2030###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\tYour Zodiac sign is VIRGO";
								AKA_mark("lis===1629###sois===43005###eois===43143###lif===49###soif===2035###eoif===2173###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\nA brilliant & positive year, where you will make things happen on your own strength, rather than seeking support of others.";
								AKA_mark("lis===1630###sois===43148###eois===43197###lif===50###soif===2178###eoif===2227###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
								AKA_mark("lis===1631###sois===43202###eois===43208###lif===51###soif===2232###eoif===2238###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 6;
							}
							else {
								if (AKA_mark("lis===1634###sois===43228###eois===43304###lif===54###soif===2258###eoif===2334###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1634###sois===43230###eois===43239###lif===54###soif===2260###eoif===2269###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==9)	&&(AKA_mark("lis===1634###sois===43245###eois===43254###lif===54###soif===2275###eoif===2284###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=23))	&&(AKA_mark("lis===1634###sois===43260###eois===43269###lif===54###soif===2290###eoif===2299###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=30))	||((AKA_mark("lis===1634###sois===43277###eois===43287###lif===54###soif===2307###eoif===2317###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==10)	&&(AKA_mark("lis===1634###sois===43293###eois===43302###lif===54###soif===2323###eoif===2332###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=22)))) {
									AKA_mark("lis===1635###sois===43312###eois===43356###lif===55###soif===2342###eoif===2386###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\tYour Zodiac sign is LIBRA";
									AKA_mark("lis===1636###sois===43361###eois===43581###lif===56###soif===2391###eoif===2611###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\nA powerful phase will be in operation this month. You will find your role as defined by nature will change and all efforts and activities carried out by you will assume higher importance and effectiveness.";
									AKA_mark("lis===1637###sois===43586###eois===43635###lif===57###soif===2616###eoif===2665###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
									AKA_mark("lis===1638###sois===43640###eois===43646###lif===58###soif===2670###eoif===2676###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 7;
								}
								else {
									if (AKA_mark("lis===1641###sois===43666###eois===43743###lif===61###soif===2696###eoif===2773###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1641###sois===43668###eois===43678###lif===61###soif===2698###eoif===2708###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==10)	&&(AKA_mark("lis===1641###sois===43684###eois===43693###lif===61###soif===2714###eoif===2723###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=23))	&&(AKA_mark("lis===1641###sois===43699###eois===43708###lif===61###soif===2729###eoif===2738###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=31))	||((AKA_mark("lis===1641###sois===43716###eois===43726###lif===61###soif===2746###eoif===2756###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==11)	&&(AKA_mark("lis===1641###sois===43732###eois===43741###lif===61###soif===2762###eoif===2771###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=21)))) {
										AKA_mark("lis===1642###sois===43751###eois===43797###lif===62###soif===2781###eoif===2827###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\tYour Zodiac sign is SCORPIO";
										AKA_mark("lis===1643###sois===43802###eois===43942###lif===63###soif===2832###eoif===2972###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\nPositive period would continue, although you need to be careful that throwing good money after bad money is not a great idea.";
										AKA_mark("lis===1644###sois===43947###eois===43996###lif===64###soif===2977###eoif===3026###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
										AKA_mark("lis===1645###sois===44001###eois===44007###lif===65###soif===3031###eoif===3037###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 8;
									}
									else {
										if (AKA_mark("lis===1648###sois===44027###eois===44104###lif===68###soif===3057###eoif===3134###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1648###sois===44029###eois===44039###lif===68###soif===3059###eoif===3069###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==11)	&&(AKA_mark("lis===1648###sois===44045###eois===44054###lif===68###soif===3075###eoif===3084###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=22))	&&(AKA_mark("lis===1648###sois===44060###eois===44069###lif===68###soif===3090###eoif===3099###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=31))	||((AKA_mark("lis===1648###sois===44077###eois===44087###lif===68###soif===3107###eoif===3117###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==12)	&&(AKA_mark("lis===1648###sois===44093###eois===44102###lif===68###soif===3123###eoif===3132###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=21)))) {
											AKA_mark("lis===1649###sois===44112###eois===44162###lif===69###soif===3142###eoif===3192###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\tYour Zodiac sign is SAGITTARIUS";
											AKA_mark("lis===1650###sois===44167###eois===44401###lif===70###soif===3197###eoif===3431###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n2012 brings in promise and progress. New ideas and cerebral approach to matters will bring in much progress this year. You will be at your creative best till May 2012 and thereafter dynamic activity will take you along.";
											AKA_mark("lis===1651###sois===44406###eois===44455###lif===71###soif===3436###eoif===3485###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
											AKA_mark("lis===1652###sois===44460###eois===44466###lif===72###soif===3490###eoif===3496###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 9;
										}
										else {
											if (AKA_mark("lis===1655###sois===44486###eois===44562###lif===75###soif===3516###eoif===3592###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1655###sois===44488###eois===44498###lif===75###soif===3518###eoif===3528###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==12)	&&(AKA_mark("lis===1655###sois===44504###eois===44513###lif===75###soif===3534###eoif===3543###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=22))	&&(AKA_mark("lis===1655###sois===44519###eois===44528###lif===75###soif===3549###eoif===3558###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=30))	||((AKA_mark("lis===1655###sois===44536###eois===44545###lif===75###soif===3566###eoif===3575###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==1)	&&(AKA_mark("lis===1655###sois===44551###eois===44560###lif===75###soif===3581###eoif===3590###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=19)))) {
												AKA_mark("lis===1656###sois===44570###eois===44618###lif===76###soif===3600###eoif===3648###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\tYour Zodiac sign is CAPRICORN";
												AKA_mark("lis===1657###sois===44623###eois===44759###lif===77###soif===3653###eoif===3789###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\nA very positive year for you. You would be at your creative best and luck related peak in most of the works you get into.";
												AKA_mark("lis===1658###sois===44764###eois===44813###lif===78###soif===3794###eoif===3843###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
												AKA_mark("lis===1659###sois===44818###eois===44825###lif===79###soif===3848###eoif===3855###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 10;
											}
											else {
												if (AKA_mark("lis===1662###sois===44845###eois===44920###lif===82###soif===3875###eoif===3950###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1662###sois===44847###eois===44856###lif===82###soif===3877###eoif===3886###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==1)	&&(AKA_mark("lis===1662###sois===44862###eois===44871###lif===82###soif===3892###eoif===3901###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=20))	&&(AKA_mark("lis===1662###sois===44877###eois===44886###lif===82###soif===3907###eoif===3916###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=31))	||((AKA_mark("lis===1662###sois===44894###eois===44903###lif===82###soif===3924###eoif===3933###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==2)	&&(AKA_mark("lis===1662###sois===44909###eois===44918###lif===82###soif===3939###eoif===3948###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=18)))) {
													AKA_mark("lis===1663###sois===44928###eois===44975###lif===83###soif===3958###eoif===4005###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\tYour Zodiac sign is AQUARIUS";
													AKA_mark("lis===1664###sois===44980###eois===45131###lif===84###soif===4010###eoif===4161###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\nA much better year in comparison to 2010 & 2011. You will feel a surge in your luck, productivity and general sense of positive outlook.";
													AKA_mark("lis===1665###sois===45136###eois===45185###lif===85###soif===4166###eoif===4215###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
													AKA_mark("lis===1666###sois===45190###eois===45197###lif===86###soif===4220###eoif===4227###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 11;
												}
												else {
													if (AKA_mark("lis===1669###sois===45217###eois===45292###lif===89###soif===4247###eoif===4322###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)") && ((((AKA_mark("lis===1669###sois===45219###eois===45228###lif===89###soif===4249###eoif===4258###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==2)	&&(AKA_mark("lis===1669###sois===45234###eois===45243###lif===89###soif===4264###eoif===4273###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1>=19))	&&(AKA_mark("lis===1669###sois===45249###eois===45258###lif===89###soif===4279###eoif===4288###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=29))	||((AKA_mark("lis===1669###sois===45266###eois===45275###lif===89###soif===4296###eoif===4305###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&month1==3)	&&(AKA_mark("lis===1669###sois===45281###eois===45290###lif===89###soif===4311###eoif===4320###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)")&&date1<=20)))) {
														AKA_mark("lis===1670###sois===45300###eois===45345###lif===90###soif===4330###eoif===4375###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\tYour Zodiac sign is PISCES";
														AKA_mark("lis===1671###sois===45350###eois===45495###lif===91###soif===4380###eoif===4525###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\nSome amount of struggle and hurdles could come about in life this year. You will have a positive and gainful period till May 2012.";
														AKA_mark("lis===1672###sois===45500###eois===45549###lif===92###soif===4530###eoif===4579###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");cout << "\n\n\t\t Best of luck for Your Future ";
														AKA_mark("lis===1673###sois===45554###eois===45561###lif===93###soif===4584###eoif===4591###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = 12;
													}
													else {
														AKA_mark("lis===1677###sois===45583###eois===45590###lif===97###soif===4613###eoif===4620###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");t = -1;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	AKA_mark("lis===1682###sois===45606###eois===45615###lif===102###soif===4636###eoif===4645###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac2(Date)");return t;
}


/*
Tinh so ngay la khoang thoi gian tu ngay 01/01/1900 den ngay day/month/year
Cay loi tai dieu kien if (year==1990) thanh if (year>1900)

*/
/** Instrumented function ConverDateToNumber0(int,int,int) */
long ConverDateToNumber0(int day, int month, int year)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.ConverDateToNumber0.45776.stub"

	AKA_mark("lis===1693###sois===45830###eois===45885###lif===2###soif===59###eoif===114###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");int ngay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	AKA_mark("lis===1694###sois===45887###eois===45897###lif===3###soif===116###eoif===126###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");long s, i;
	AKA_mark("lis===1695###sois===45899###eois===45903###lif===4###soif===128###eoif===132###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");s=0;
	if (AKA_mark("lis===1696###sois===45909###eois===45921###lif===5###soif===138###eoif===150###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)") && (AKA_mark("lis===1696###sois===45909###eois===45921###lif===5###soif===138###eoif===150###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&year == 1900)) {
		AKA_mark("lis===1698###sois===45928###eois===45936###lif===7###soif===157###eoif===165###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");s=s+day;
		AKA_mark("lis===1699###sois===45944###eois===45948###lif===8###soif===173###eoif===177###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");for (i=0;AKA_mark("lis===1699###sois===45949###eois===45958###lif===8###soif===178###eoif===187###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)") && AKA_mark("lis===1699###sois===45949###eois===45958###lif===8###soif===178###eoif===187###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&i < month;({AKA_mark("lis===1699###sois===45960###eois===45963###lif===8###soif===189###eoif===192###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");i++;})) {
			AKA_mark("lis===1699###sois===45965###eois===45977###lif===8###soif===194###eoif===206###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");s=s+ngay[i];
		}
	}
	else {
		if (AKA_mark("lis===1702###sois===45993###eois===46002###lif===11###soif===222###eoif===231###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)") && (AKA_mark("lis===1702###sois===45993###eois===46002###lif===11###soif===222###eoif===231###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&year>1900)) {
			AKA_mark("lis===1704###sois===46011###eois===46019###lif===13###soif===240###eoif===248###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");s=s+day;
			AKA_mark("lis===1705###sois===46023###eois===46044###lif===14###soif===252###eoif===273###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");s= s+(year-1900)*365;
			AKA_mark("lis===1706###sois===46053###eois===46060###lif===15###soif===282###eoif===289###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");for (i=1900;AKA_mark("lis===1706###sois===46061###eois===46070###lif===15###soif===290###eoif===299###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)") && AKA_mark("lis===1706###sois===46061###eois===46070###lif===15###soif===290###eoif===299###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&i <= year;({AKA_mark("lis===1706###sois===46072###eois===46075###lif===15###soif===301###eoif===304###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");i++;})) {
				if (AKA_mark("lis===1707###sois===46085###eois===46119###lif===16###soif===314###eoif===348###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)") && (((AKA_mark("lis===1707###sois===46087###eois===46093###lif===16###soif===316###eoif===322###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&i%4==0)	&&(AKA_mark("lis===1707###sois===46097###eois===46105###lif===16###soif===326###eoif===334###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&i%100!=0))	||(AKA_mark("lis===1707###sois===46110###eois===46118###lif===16###soif===339###eoif===347###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&i%400==0))) {
					AKA_mark("lis===1707###sois===46121###eois===46127###lif===16###soif===350###eoif===356###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");s=s+1;
				}
				else {AKA_mark("lis===-1707-###sois===-46085-###eois===-4608534-###lif===-16-###soif===-###eoif===-348-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");}
			}
			AKA_mark("lis===1708###sois===46136###eois===46140###lif===17###soif===365###eoif===369###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");for (i=0;AKA_mark("lis===1708###sois===46141###eois===46150###lif===17###soif===370###eoif===379###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)") && AKA_mark("lis===1708###sois===46141###eois===46150###lif===17###soif===370###eoif===379###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&i < month;({AKA_mark("lis===1708###sois===46152###eois===46155###lif===17###soif===381###eoif===384###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");i++;})) {
				AKA_mark("lis===1710###sois===46166###eois===46179###lif===19###soif===395###eoif===408###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");s= s+ngay[i];
				if (AKA_mark("lis===1711###sois===46188###eois===46230###lif===20###soif===417###eoif===459###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)") && ((((AKA_mark("lis===1711###sois===46190###eois===46196###lif===20###soif===419###eoif===425###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&i%4==0)	&&(AKA_mark("lis===1711###sois===46200###eois===46208###lif===20###soif===429###eoif===437###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&i%100!=0))	||(AKA_mark("lis===1711###sois===46212###eois===46220###lif===20###soif===441###eoif===449###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&i%400==0))	&&(AKA_mark("lis===1711###sois===46225###eois===46229###lif===20###soif===454###eoif===458###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)")&&i==2))) {
					AKA_mark("lis===1711###sois===46232###eois===46238###lif===20###soif===461###eoif===467###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");s=s+1;
				}
				else {AKA_mark("lis===-1711-###sois===-46188-###eois===-4618842-###lif===-20-###soif===-###eoif===-459-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");}
			}
		}
		else {AKA_mark("lis===-1702-###sois===-45993-###eois===-459939-###lif===-11-###soif===-###eoif===-231-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");}
	}
	AKA_mark("lis===1714###sois===46249###eois===46258###lif===23###soif===478###eoif===487###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ConverDateToNumber0(int,int,int)");return s;
}

/** Instrumented function CountSecond1(int,int,int) */
long CountSecond1(int hour, int minute, int second)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CountSecond1.46270.stub"

	AKA_mark("lis===1721###sois===46502###eois===46509###lif===4###soif===237###eoif===244###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)");long s;
	AKA_mark("lis===1722###sois===46511###eois===46516###lif===5###soif===246###eoif===251###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)");s=-1;
	if (AKA_mark("lis===1723###sois===46522###eois===46601###lif===6###soif===257###eoif===336###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)") && ((((((AKA_mark("lis===1723###sois===46522###eois===46530###lif===6###soif===257###eoif===265###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)")&&hour > 0)	&&(AKA_mark("lis===1723###sois===46534###eois===46544###lif===6###soif===269###eoif===279###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)")&&minute > 0))	&&(AKA_mark("lis===1723###sois===46548###eois===46558###lif===6###soif===283###eoif===293###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)")&&second > 0))	&&(AKA_mark("lis===1723###sois===46562###eois===46571###lif===6###soif===297###eoif===306###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)")&&hour < 24))	&&(AKA_mark("lis===1723###sois===46575###eois===46586###lif===6###soif===310###eoif===321###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)")&&minute < 60))	&&(AKA_mark("lis===1723###sois===46590###eois===46601###lif===6###soif===325###eoif===336###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)")&&second < 60))) {
		AKA_mark("lis===1724###sois===46605###eois===46634###lif===7###soif===340###eoif===369###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)");s=hour*3600+minute*60+second;
	}
	else {AKA_mark("lis===-1723-###sois===-46522-###eois===-4652279-###lif===-6-###soif===-###eoif===-336-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)");}
	AKA_mark("lis===1725###sois===46636###eois===46645###lif===8###soif===371###eoif===380###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CountSecond1(int,int,int)");return s;
}


//Tang them 1 giay
//Ket qua tra ve la tong so giay tinh tu luc 0h
/** Instrumented function PlusOneSecond0(int,int,int) */
long PlusOneSecond0(int hour, int minute, int second)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.PlusOneSecond0.46728.stub"

	AKA_mark("lis===1733###sois===46781###eois===46797###lif===2###soif===58###eoif===74###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)");second=second+1;
	if (AKA_mark("lis===1734###sois===46803###eois===46813###lif===3###soif===80###eoif===90###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)") && (AKA_mark("lis===1734###sois===46803###eois===46813###lif===3###soif===80###eoif===90###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)")&&second>=60)) {
		AKA_mark("lis===1735###sois===46819###eois===46836###lif===4###soif===96###eoif===113###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)");second=second-60;
		AKA_mark("lis===1736###sois===46839###eois===46855###lif===5###soif===116###eoif===132###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)");minute=minute+1;
		if (AKA_mark("lis===1737###sois===46862###eois===46872###lif===6###soif===139###eoif===149###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)") && (AKA_mark("lis===1737###sois===46862###eois===46872###lif===6###soif===139###eoif===149###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)")&&minute>=60)) {
			AKA_mark("lis===1738###sois===46879###eois===46896###lif===7###soif===156###eoif===173###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)");minute=minute-60;
			AKA_mark("lis===1739###sois===46900###eois===46912###lif===8###soif===177###eoif===189###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)");hour=hour+1;
			if (AKA_mark("lis===1740###sois===46920###eois===46928###lif===9###soif===197###eoif===205###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)") && (AKA_mark("lis===1740###sois===46920###eois===46928###lif===9###soif===197###eoif===205###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)")&&hour>=24)) {
				AKA_mark("lis===1741###sois===46934###eois===46947###lif===10###soif===211###eoif===224###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)");hour=hour-24;
			}
			else {AKA_mark("lis===-1740-###sois===-46920-###eois===-469208-###lif===-9-###soif===-###eoif===-205-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)");}
		}
		else {AKA_mark("lis===-1737-###sois===-46862-###eois===-4686210-###lif===-6-###soif===-###eoif===-149-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)");}
	}
	else {AKA_mark("lis===-1734-###sois===-46803-###eois===-4680310-###lif===-3-###soif===-###eoif===-90-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)");}
	AKA_mark("lis===1744###sois===46956###eois===46965###lif===13###soif===233###eoif===242###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond0(int,int,int)");return 0;
}


//Tang them 1 giay
//Ket qua tra ve la tong so giay tinh tu luc 0h
/** Instrumented function PlusOneSecond(int,int,int) */
long PlusOneSecond(int hour, int minute, int second)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.PlusOneSecond.47048.stub"

	AKA_mark("lis===1752###sois===47100###eois===47113###lif===2###soif===57###eoif===70###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");int s=second;
	AKA_mark("lis===1753###sois===47115###eois===47121###lif===3###soif===72###eoif===78###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");s=s+1;
	if (AKA_mark("lis===1754###sois===47127###eois===47133###lif===4###soif===84###eoif===90###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)") && (AKA_mark("lis===1754###sois===47127###eois===47133###lif===4###soif===84###eoif===90###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)")&&s > 60)) {
		AKA_mark("lis===1755###sois===47151###eois===47163###lif===5###soif===108###eoif===120###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");second=s-60;
		AKA_mark("lis===1756###sois===47166###eois===47182###lif===6###soif===123###eoif===139###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");minute=minute+1;
		if (AKA_mark("lis===1757###sois===47189###eois===47200###lif===7###soif===146###eoif===157###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)") && (AKA_mark("lis===1757###sois===47189###eois===47200###lif===7###soif===146###eoif===157###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)")&&minute > 60)) {
			AKA_mark("lis===1758###sois===47220###eois===47237###lif===8###soif===177###eoif===194###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");minute=minute-60;
			AKA_mark("lis===1759###sois===47241###eois===47253###lif===9###soif===198###eoif===210###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");hour=hour+1;
			if (AKA_mark("lis===1760###sois===47261###eois===47270###lif===10###soif===218###eoif===227###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)") && (AKA_mark("lis===1760###sois===47261###eois===47270###lif===10###soif===218###eoif===227###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)")&&hour > 24)) {
				AKA_mark("lis===1761###sois===47289###eois===47302###lif===11###soif===246###eoif===259###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");hour=hour-24;
			}
			else {AKA_mark("lis===-1760-###sois===-47261-###eois===-472619-###lif===-10-###soif===-###eoif===-227-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");}
		}
		else {AKA_mark("lis===-1757-###sois===-47189-###eois===-4718911-###lif===-7-###soif===-###eoif===-157-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");}
	}
	else {AKA_mark("lis===-1754-###sois===-47127-###eois===-471276-###lif===-4-###soif===-###eoif===-90-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");}
	AKA_mark("lis===1764###sois===47311###eois===47345###lif===14###soif===268###eoif===302###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\PlusOneSecond(int,int,int)");return hour*3600+minute*60+second;
}


//Kiem tra 3 so nhap vao co tao thanh thoi gian hop le khong
/** Instrumented function CheckValidTime0(int,int,int) */
int CheckValidTime0(int hour, int minute, int second)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime0(int,int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CheckValidTime0.47420.stub"

	if (AKA_mark("lis===1771###sois===47495###eois===47568###lif===2###soif===79###eoif===152###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime0(int,int,int)") && ((((((AKA_mark("lis===1771###sois===47495###eois===47502###lif===2###soif===79###eoif===86###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime0(int,int,int)")&&hour>=0)	&&(AKA_mark("lis===1771###sois===47506###eois===47514###lif===2###soif===90###eoif===98###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime0(int,int,int)")&&hour<=23))	&&(AKA_mark("lis===1771###sois===47518###eois===47527###lif===2###soif===102###eoif===111###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime0(int,int,int)")&&minute>=0))	&&(AKA_mark("lis===1771###sois===47531###eois===47541###lif===2###soif===115###eoif===125###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime0(int,int,int)")&&minute<=59))	&&(AKA_mark("lis===1771###sois===47545###eois===47554###lif===2###soif===129###eoif===138###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime0(int,int,int)")&&second>=0))	&&(AKA_mark("lis===1771###sois===47558###eois===47568###lif===2###soif===142###eoif===152###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime0(int,int,int)")&&second<=59))) {
		AKA_mark("lis===1771###sois===47570###eois===47579###lif===2###soif===154###eoif===163###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime0(int,int,int)");return 1;
	}
	else {AKA_mark("lis===-1771-###sois===-47495-###eois===-4749573-###lif===-2-###soif===-###eoif===-152-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime0(int,int,int)");}
	AKA_mark("lis===1772###sois===47581###eois===47590###lif===3###soif===165###eoif===174###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime0(int,int,int)");return 0;
}


/** Instrumented function CFGIfElse(int) */
int CFGIfElse(int x){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CFGIfElse.47603.stub"

	if (AKA_mark("lis===1779###sois===47644###eois===47649###lif===3###soif===45###eoif===50###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)") && (AKA_mark("lis===1779###sois===47644###eois===47649###lif===3###soif===45###eoif===50###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)")&&x < 0)) {
		AKA_mark("lis===1780###sois===47654###eois===47661###lif===4###soif===55###eoif===62###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");x = -x;
	}
	else {AKA_mark("lis===-1779-###sois===-47644-###eois===-476445-###lif===-3-###soif===-###eoif===-50-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");}
	if (AKA_mark("lis===1783###sois===47684###eois===47690###lif===7###soif===85###eoif===91###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)") && (AKA_mark("lis===1783###sois===47684###eois===47690###lif===7###soif===85###eoif===91###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)")&&x < 10)) {
		AKA_mark("lis===1784###sois===47695###eois===47699###lif===8###soif===96###eoif===100###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");x++;
	}
	else {
		AKA_mark("lis===1786###sois===47710###eois===47714###lif===10###soif===111###eoif===115###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");x--;
	}
	if (AKA_mark("lis===1789###sois===47743###eois===47750###lif===13###soif===144###eoif===151###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)") && (AKA_mark("lis===1789###sois===47743###eois===47750###lif===13###soif===144###eoif===151###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)")&&x == 11)) {
		AKA_mark("lis===1790###sois===47755###eois===47761###lif===14###soif===156###eoif===162###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");x = 1;
	}
	else {
		if (AKA_mark("lis===1791###sois===47773###eois===47780###lif===15###soif===174###eoif===181###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)") && (AKA_mark("lis===1791###sois===47773###eois===47780###lif===15###soif===174###eoif===181###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)")&&x == 12)) {
			AKA_mark("lis===1792###sois===47785###eois===47791###lif===16###soif===186###eoif===192###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");x = 2;
		}
		else {
			AKA_mark("lis===1794###sois===47802###eois===47806###lif===18###soif===203###eoif===207###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");x--;
		}
	}
	if (AKA_mark("lis===1797###sois===47835###eois===47841###lif===21###soif===236###eoif===242###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)") && (AKA_mark("lis===1797###sois===47835###eois===47841###lif===21###soif===236###eoif===242###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)")&&x > 20)) {
		if (AKA_mark("lis===1798###sois===47851###eois===47857###lif===22###soif===252###eoif===258###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)") && (AKA_mark("lis===1798###sois===47851###eois===47857###lif===22###soif===252###eoif===258###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)")&&x > 30)) {
			AKA_mark("lis===1799###sois===47863###eois===47873###lif===23###soif===264###eoif===274###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");x = x + 2;
		}
		else {
			AKA_mark("lis===1801###sois===47886###eois===47896###lif===25###soif===287###eoif===297###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");x = x - 2;
		}
	}
	else {AKA_mark("lis===-1797-###sois===-47835-###eois===-478356-###lif===-21-###soif===-###eoif===-242-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");}
	AKA_mark("lis===1804###sois===47905###eois===47914###lif===28###soif===306###eoif===315###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\CFGIfElse(int)");return x;
}


/** Instrumented function ch_eqi(char,char) */
bool ch_eqi ( char ch1, char ch2 )

//****************************************************************************80
//
//  Purpose:
//
//    CH_EQI is true if two characters are equal, disregarding case.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    13 September 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, char CH1, CH2, the characters to compare.
//
//    Output, bool CH_EQI, is true if the two characters are equal,
//    disregarding case.
//
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.ch_eqi.47928.stub"

	AKA_mark("lis===1836###sois===48498###eois===48509###lif===28###soif===575###eoif===586###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)");bool value;
	if (AKA_mark("lis===1838###sois===48520###eois===48543###lif===30###soif===597###eoif===620###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)") && ((AKA_mark("lis===1838###sois===48520###eois===48529###lif===30###soif===597###eoif===606###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)")&&97 <= ch1)	&&(AKA_mark("lis===1838###sois===48533###eois===48543###lif===30###soif===610###eoif===620###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)")&&ch1 <= 122))) {
		AKA_mark("lis===1840###sois===48556###eois===48571###lif===32###soif===633###eoif===648###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)");ch1 = ch1 - 32;
	}
	else {AKA_mark("lis===-1838-###sois===-48520-###eois===-4852023-###lif===-30-###soif===-###eoif===-620-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)");}
	if (AKA_mark("lis===1842###sois===48585###eois===48608###lif===34###soif===662###eoif===685###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)") && ((AKA_mark("lis===1842###sois===48585###eois===48594###lif===34###soif===662###eoif===671###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)")&&97 <= ch2)	&&(AKA_mark("lis===1842###sois===48598###eois===48608###lif===34###soif===675###eoif===685###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)")&&ch2 <= 122))) {
		AKA_mark("lis===1844###sois===48621###eois===48636###lif===36###soif===698###eoif===713###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)");ch2 = ch2 - 32;
	}
	else {AKA_mark("lis===-1842-###sois===-48585-###eois===-4858523-###lif===-34-###soif===-###eoif===-685-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)");}
	AKA_mark("lis===1847###sois===48647###eois===48670###lif===39###soif===724###eoif===747###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)");value = ( ch1 == ch2 );
	AKA_mark("lis===1849###sois===48676###eois===48689###lif===41###soif===753###eoif===766###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ch_eqi(char,char)");return value;
}

//D:\OneDrive - Cao Dang Su Pham Trung Uong\NCS\ava\data-test\tsdv\Sample_for_R1_4

//Da them 4 loi
//Loi tai age=4,14,15, distance=10
/** Instrumented function getFare1(int,int) */
int getFare1(int age, int distance)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.getFare1.48839.stub"

	AKA_mark("lis===1860###sois===48929###eois===48938###lif===4###soif===94###eoif===103###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");int fare;
	if (AKA_mark("lis===1861###sois===48944###eois===48963###lif===5###soif===109###eoif===128###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)") && ((AKA_mark("lis===1861###sois===48944###eois===48951###lif===5###soif===109###eoif===116###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&age > 4)	&&(AKA_mark("lis===1861###sois===48955###eois===48963###lif===5###soif===120###eoif===128###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&age < 14))) {
		if (AKA_mark("lis===1863###sois===49011###eois===49025###lif===7###soif===176###eoif===190###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)") && (AKA_mark("lis===1863###sois===49011###eois===49025###lif===7###soif===176###eoif===190###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&distance >= 10)) {
			AKA_mark("lis===1864###sois===49058###eois===49069###lif===8###soif===223###eoif===234###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");fare = 130;
		}
		else {
			AKA_mark("lis===1865###sois===49078###eois===49089###lif===9###soif===243###eoif===254###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");fare = 100;
		}
	}
	else {AKA_mark("lis===-1861-###sois===-48944-###eois===-4894419-###lif===-5-###soif===-###eoif===-128-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");}
	if (AKA_mark("lis===1867###sois===49099###eois===49108###lif===11###soif===264###eoif===273###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)") && (AKA_mark("lis===1867###sois===49099###eois===49108###lif===11###soif===264###eoif===273###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&age >  15)) {
		if (AKA_mark("lis===1869###sois===49142###eois===49167###lif===13###soif===307###eoif===332###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)") && ((AKA_mark("lis===1869###sois===49142###eois===49154###lif===13###soif===307###eoif===319###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&distance <10)	&&(AKA_mark("lis===1869###sois===49158###eois===49167###lif===13###soif===323###eoif===332###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&age >= 60))) {
			AKA_mark("lis===1870###sois===49173###eois===49184###lif===14###soif===338###eoif===349###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");fare = 160;
		}
		else {
			if (AKA_mark("lis===1871###sois===49196###eois===49221###lif===15###soif===361###eoif===386###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)") && ((AKA_mark("lis===1871###sois===49196###eois===49209###lif===15###soif===361###eoif===374###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&distance > 10)	&&(AKA_mark("lis===1871###sois===49213###eois===49221###lif===15###soif===378###eoif===386###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&age < 60))) {
				AKA_mark("lis===1872###sois===49227###eois===49238###lif===16###soif===392###eoif===403###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");fare = 250;
			}
			else {
				AKA_mark("lis===1873###sois===49248###eois===49259###lif===17###soif===413###eoif===424###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");fare = 200;
			}
		}
	}
	else {AKA_mark("lis===-1867-###sois===-49099-###eois===-490999-###lif===-11-###soif===-###eoif===-273-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");}
	AKA_mark("lis===1875###sois===49266###eois===49278###lif===19###soif===431###eoif===443###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");return fare;
}

/**

Parameter:
 - b_w: weight
 - he: height

Return list
 - UNDERWEIGHT: 0
 - Perfect Shape: 1
 - OVERWEIGHT: 2
 - A VICTIM OF OBESITY: 3
 - Out of believeable: -1

*/
/** Instrumented function bmi(float,float) */
int bmi(float b_w, float he)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.bmi.49472.stub"

	AKA_mark("lis===1894###sois===49502###eois===49511###lif===2###soif===34###eoif===43###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)");double c;
	AKA_mark("lis===1895###sois===49514###eois===49544###lif===3###soif===46###eoif===76###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)");c = (b_w / (he * he / 10000));
	{
		if (AKA_mark("lis===1898###sois===49558###eois===49564###lif===6###soif===90###eoif===96###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)") && (AKA_mark("lis===1898###sois===49558###eois===49564###lif===6###soif===90###eoif===96###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)")&&c < 19)) {
			AKA_mark("lis===1899###sois===49572###eois===49581###lif===7###soif===104###eoif===113###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)");return 0;
		}
		else {
			if (AKA_mark("lis===1902###sois===49601###eois===49618###lif===10###soif===133###eoif===150###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)") && ((AKA_mark("lis===1902###sois===49601###eois===49608###lif===10###soif===133###eoif===140###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)")&&c >= 19)	&&(AKA_mark("lis===1902###sois===49612###eois===49618###lif===10###soif===144###eoif===150###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)")&&c < 25))) {
				AKA_mark("lis===1903###sois===49626###eois===49635###lif===11###soif===158###eoif===167###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)");return 1;
			}
			else {
				if (AKA_mark("lis===1907###sois===49657###eois===49674###lif===15###soif===189###eoif===206###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)") && ((AKA_mark("lis===1907###sois===49657###eois===49664###lif===15###soif===189###eoif===196###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)")&&c >= 25)	&&(AKA_mark("lis===1907###sois===49668###eois===49674###lif===15###soif===200###eoif===206###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)")&&c < 30))) {
					AKA_mark("lis===1908###sois===49682###eois===49691###lif===16###soif===214###eoif===223###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)");return 2;
				}
				else {
					if (AKA_mark("lis===1911###sois===49711###eois===49718###lif===19###soif===243###eoif===250###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)") && (AKA_mark("lis===1911###sois===49711###eois===49718###lif===19###soif===243###eoif===250###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)")&&c >= 30)) {
						AKA_mark("lis===1912###sois===49726###eois===49735###lif===20###soif===258###eoif===267###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)");return 3;
					}
					else {
						AKA_mark("lis===1916###sois===49774###eois===49784###lif===24###soif===306###eoif===316###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\bmi(float,float)");return -1;
					}
				}
			}
		}
	}
}


/** Instrumented function testme(int,int) */
int testme(int a, int b)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme.49806.stub"

	AKA_mark("lis===1925###sois===49874###eois===49882###lif===3###soif===72###eoif===80###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)");int s=0;
	if (AKA_mark("lis===1926###sois===49887###eois===49890###lif===4###soif===85###eoif===88###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)") && (AKA_mark("lis===1926###sois===49887###eois===49890###lif===4###soif===85###eoif===88###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)")&&a>0)) {
		if (AKA_mark("lis===1927###sois===49901###eois===49904###lif===5###soif===99###eoif===102###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)") && (AKA_mark("lis===1927###sois===49901###eois===49904###lif===5###soif===99###eoif===102###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)")&&b>0)) {
			AKA_mark("lis===1928###sois===49911###eois===49917###lif===6###soif===109###eoif===115###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)");s=a+b;
		}
		else {
			if (AKA_mark("lis===1930###sois===49938###eois===49943###lif===8###soif===136###eoif===141###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)") && (AKA_mark("lis===1930###sois===49938###eois===49943###lif===8###soif===136###eoif===141###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)")&&b<-10)) {
				AKA_mark("lis===1931###sois===49954###eois===49960###lif===9###soif===152###eoif===158###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)");s=a-b;
			}
			else {
				AKA_mark("lis===1932###sois===49974###eois===49980###lif===10###soif===172###eoif===178###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)");s=a*b;
			}
		}
	}
	else {
		if (AKA_mark("lis===1934###sois===49996###eois===50001###lif===12###soif===194###eoif===199###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)") && (AKA_mark("lis===1934###sois===49996###eois===50001###lif===12###soif===194###eoif===199###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)")&&a<-50)) {
			AKA_mark("lis===1935###sois===50012###eois===50018###lif===13###soif===210###eoif===216###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)");s=a+b;
		}
		else {AKA_mark("lis===-1934-###sois===-49996-###eois===-499965-###lif===-12-###soif===-###eoif===-199-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)");}
	}
	AKA_mark("lis===1936###sois===50021###eois===50030###lif===14###soif===219###eoif===228###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme(int,int)");return s;
}

/** Instrumented function testme1(int,int) */
int testme1(int a, int b)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\testme1(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme1.50041.stub"

	AKA_mark("lis===1942###sois===50110###eois===50118###lif===3###soif===73###eoif===81###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme1(int,int)");int s=0;
	if (AKA_mark("lis===1943###sois===50123###eois===50127###lif===4###soif===86###eoif===90###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme1(int,int)") && (AKA_mark("lis===1943###sois===50123###eois===50127###lif===4###soif===86###eoif===90###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme1(int,int)")&&a>10)) {
		if (AKA_mark("lis===1944###sois===50138###eois===50141###lif===5###soif===101###eoif===104###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme1(int,int)") && (AKA_mark("lis===1944###sois===50138###eois===50141###lif===5###soif===101###eoif===104###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme1(int,int)")&&b>0)) {
			AKA_mark("lis===1945###sois===50148###eois===50154###lif===6###soif===111###eoif===117###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme1(int,int)");s=a+b;
		}
		else {
			AKA_mark("lis===1947###sois===50174###eois===50180###lif===8###soif===137###eoif===143###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme1(int,int)");s=a*b;
		}
	}
	else {
		AKA_mark("lis===1949###sois===50194###eois===50200###lif===10###soif===157###eoif===163###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme1(int,int)");s=a-b;
	}
	AKA_mark("lis===1950###sois===50203###eois===50212###lif===11###soif===166###eoif===175###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme1(int,int)");return s;
}
/** Instrumented function testme2(int,int) */
int testme2(int a, int b)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\testme2(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme2.50221.stub"

	AKA_mark("lis===1955###sois===50290###eois===50298###lif===3###soif===73###eoif===81###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme2(int,int)");int s=0;
	if (AKA_mark("lis===1956###sois===50303###eois===50314###lif===4###soif===86###eoif===97###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme2(int,int)") && ((AKA_mark("lis===1956###sois===50303###eois===50307###lif===4###soif===86###eoif===90###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme2(int,int)")&&a>10)	&&(AKA_mark("lis===1956###sois===50311###eois===50314###lif===4###soif===94###eoif===97###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme2(int,int)")&&b>0))) {
		AKA_mark("lis===1956###sois===50316###eois===50322###lif===4###soif===99###eoif===105###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme2(int,int)");s=a+b;
	}
	else {AKA_mark("lis===-1956-###sois===-50303-###eois===-5030311-###lif===-4-###soif===-###eoif===-97-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme2(int,int)");}
	AKA_mark("lis===1957###sois===50327###eois===50333###lif===5###soif===110###eoif===116###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme2(int,int)");s=a-b;
	AKA_mark("lis===1958###sois===50336###eois===50345###lif===6###soif===119###eoif===128###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme2(int,int)");return s;
}

/** Instrumented function testme3(int) */
int testme3(int a)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\testme3(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme3.50356.stub"

	AKA_mark("lis===1965###sois===50449###eois===50457###lif===4###soif===97###eoif===105###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme3(int)");int s=0;
	if (AKA_mark("lis===1966###sois===50462###eois===50467###lif===5###soif===110###eoif===115###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme3(int)") && (AKA_mark("lis===1966###sois===50462###eois===50467###lif===5###soif===110###eoif===115###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme3(int)")&&a==10)) {
		AKA_mark("lis===1966###sois===50469###eois===50473###lif===5###soif===117###eoif===121###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme3(int)");s=a;
	}
	else {AKA_mark("lis===-1966-###sois===-50462-###eois===-504625-###lif===-5-###soif===-###eoif===-115-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme3(int)");}
	AKA_mark("lis===1967###sois===50477###eois===50486###lif===6###soif===125###eoif===134###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme3(int)");return s;
}
/** Instrumented function testme4(int) */
int testme4(int a)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\testme4(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme4.50495.stub"

	AKA_mark("lis===1973###sois===50598###eois===50606###lif===4###soif===107###eoif===115###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme4(int)");int s=0;
	if (AKA_mark("lis===1974###sois===50611###eois===50615###lif===5###soif===120###eoif===124###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme4(int)") && (AKA_mark("lis===1974###sois===50611###eois===50615###lif===5###soif===120###eoif===124###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme4(int)")&&a>10)) {
		AKA_mark("lis===1974###sois===50617###eois===50621###lif===5###soif===126###eoif===130###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme4(int)");s=a;
	}
	else {AKA_mark("lis===-1974-###sois===-50611-###eois===-506114-###lif===-5-###soif===-###eoif===-124-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme4(int)");}
	AKA_mark("lis===1975###sois===50625###eois===50634###lif===6###soif===134###eoif===143###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme4(int)");return s;
}
/** Instrumented function testme5(int) */
int testme5(int a)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\testme5(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme5.50643.stub"

	AKA_mark("lis===1981###sois===50746###eois===50754###lif===4###soif===107###eoif===115###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme5(int)");int s=0;
	if (AKA_mark("lis===1982###sois===50759###eois===50764###lif===5###soif===120###eoif===125###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme5(int)") && (AKA_mark("lis===1982###sois===50759###eois===50764###lif===5###soif===120###eoif===125###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme5(int)")&&a>=10)) {
		AKA_mark("lis===1982###sois===50766###eois===50770###lif===5###soif===127###eoif===131###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme5(int)");s=a;
	}
	else {AKA_mark("lis===-1982-###sois===-50759-###eois===-507595-###lif===-5-###soif===-###eoif===-125-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme5(int)");}
	AKA_mark("lis===1983###sois===50774###eois===50783###lif===6###soif===135###eoif===144###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme5(int)");return s;
}
/** Instrumented function testme6(int) */
int testme6(int a)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\testme6(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme6.50792.stub"

	AKA_mark("lis===1989###sois===50895###eois===50903###lif===4###soif===107###eoif===115###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme6(int)");int s=0;
	if (AKA_mark("lis===1990###sois===50908###eois===50912###lif===5###soif===120###eoif===124###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme6(int)") && (AKA_mark("lis===1990###sois===50908###eois===50912###lif===5###soif===120###eoif===124###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme6(int)")&&a<10)) {
		AKA_mark("lis===1990###sois===50914###eois===50918###lif===5###soif===126###eoif===130###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme6(int)");s=a;
	}
	else {AKA_mark("lis===-1990-###sois===-50908-###eois===-509084-###lif===-5-###soif===-###eoif===-124-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme6(int)");}
	AKA_mark("lis===1991###sois===50922###eois===50931###lif===6###soif===134###eoif===143###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme6(int)");return s;
}
/** Instrumented function testme7(int) */
int testme7(int a)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\testme7(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme7.50940.stub"

	AKA_mark("lis===1997###sois===51043###eois===51051###lif===4###soif===107###eoif===115###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme7(int)");int s=0;
	if (AKA_mark("lis===1998###sois===51056###eois===51061###lif===5###soif===120###eoif===125###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme7(int)") && (AKA_mark("lis===1998###sois===51056###eois===51061###lif===5###soif===120###eoif===125###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme7(int)")&&a!=10)) {
		AKA_mark("lis===1998###sois===51063###eois===51067###lif===5###soif===127###eoif===131###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme7(int)");s=a;
	}
	else {AKA_mark("lis===-1998-###sois===-51056-###eois===-510565-###lif===-5-###soif===-###eoif===-125-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme7(int)");}
	AKA_mark("lis===1999###sois===51071###eois===51080###lif===6###soif===135###eoif===144###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme7(int)");return s;
}
/** Instrumented function testme8(int) */
int testme8(int a)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\testme8(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme8.51089.stub"

	AKA_mark("lis===2005###sois===51192###eois===51200###lif===4###soif===107###eoif===115###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme8(int)");int s=0;
	if (AKA_mark("lis===2006###sois===51205###eois===51210###lif===5###soif===120###eoif===125###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme8(int)") && (AKA_mark("lis===2006###sois===51205###eois===51210###lif===5###soif===120###eoif===125###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme8(int)")&&a<=10)) {
		AKA_mark("lis===2006###sois===51212###eois===51216###lif===5###soif===127###eoif===131###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme8(int)");s=a;
	}
	else {AKA_mark("lis===-2006-###sois===-51205-###eois===-512055-###lif===-5-###soif===-###eoif===-125-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme8(int)");}
	AKA_mark("lis===2007###sois===51220###eois===51229###lif===6###soif===135###eoif===144###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\testme8(int)");return s;
}
/** Instrumented function ForTest(int) */
float ForTest(int x)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.ForTest.51240.stub"

	AKA_mark("lis===2011###sois===51263###eois===51273###lif===2###soif===29###eoif===39###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)");int t,s=0;
	if (AKA_mark("lis===2012###sois===51283###eois===51286###lif===3###soif===49###eoif===52###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)") && (AKA_mark("lis===2012###sois===51283###eois===51286###lif===3###soif===49###eoif===52###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)")&&x>1)) {
		AKA_mark("lis===2013###sois===51299###eois===51307###lif===4###soif===65###eoif===73###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)");for (int i=1;AKA_mark("lis===2013###sois===51308###eois===51312###lif===4###soif===74###eoif===78###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)") && AKA_mark("lis===2013###sois===51308###eois===51312###lif===4###soif===74###eoif===78###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)")&&i<=x;({AKA_mark("lis===2013###sois===51314###eois===51317###lif===4###soif===80###eoif===83###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)");i++;})) {
			AKA_mark("lis===2015###sois===51339###eois===51345###lif===6###soif===105###eoif===111###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)");s=s+i;
			if (AKA_mark("lis===2016###sois===51359###eois===51362###lif===7###soif===125###eoif===128###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)") && (AKA_mark("lis===2016###sois===51359###eois===51362###lif===7###soif===125###eoif===128###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)")&&x>5)) {
				AKA_mark("lis===2017###sois===51377###eois===51381###lif===8###soif===143###eoif===147###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)");s=0;
			}
			else {AKA_mark("lis===-2016-###sois===-51359-###eois===-513593-###lif===-7-###soif===-###eoif===-128-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)");}
		}
		AKA_mark("lis===2019###sois===51399###eois===51405###lif===10###soif===165###eoif===171###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)");t=1/s;
	}
	else {
		AKA_mark("lis===2022###sois===51428###eois===51432###lif===13###soif===194###eoif===198###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)");t=0;
	}
	AKA_mark("lis===2023###sois===51434###eois===51443###lif===14###soif===200###eoif===209###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\ForTest(int)");return t;
}


/*
	input: a, b
	output: This function return Greatest common divisor of 2 numbers.
*/
/** Instrumented function gcd2(int,int) */
int gcd2(int a, int b)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\gcd2(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.gcd2.51547.stub"

	AKA_mark("lis===2033###sois===51571###eois===51580###lif===2###soif===28###eoif===37###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd2(int,int)");int temp;
	while (AKA_mark("lis===2035###sois===51592###eois===51597###lif===4###soif===49###eoif===54###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd2(int,int)") && (AKA_mark("lis===2035###sois===51592###eois===51597###lif===4###soif===49###eoif===54###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd2(int,int)")&&b > 0)) {
		AKA_mark("lis===2036###sois===51604###eois===51617###lif===5###soif===61###eoif===74###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd2(int,int)");temp = a % b;
		AKA_mark("lis===2037###sois===51621###eois===51627###lif===6###soif===78###eoif===84###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd2(int,int)");a = b;
		AKA_mark("lis===2038###sois===51631###eois===51640###lif===7###soif===88###eoif===97###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd2(int,int)");b = temp;
	}
	AKA_mark("lis===2041###sois===51649###eois===51658###lif===10###soif===106###eoif===115###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\gcd2(int,int)");return a;
}
/*
	input: a array, min , maxx, tcnt, vcnt
	output: caculate averge value of the first 100 elements in given array, which is in [min, max].

*/

/** Instrumented function Average(double[],double,double,int&,int&) */
double Average(double value[], double min, double max, int& tcnt, int& vcnt) //sach
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.Average.51821.stub"

	AKA_mark("lis===2051###sois===51903###eois===51916###lif===2###soif===89###eoif===102###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");double sum=0;
	AKA_mark("lis===2052###sois===51919###eois===51927###lif===3###soif===105###eoif===113###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");int i=0;
	AKA_mark("lis===2053###sois===51930###eois===51942###lif===4###soif===116###eoif===128###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");tcnt=vcnt=0;
	while (AKA_mark("lis===2054###sois===51951###eois===51977###lif===5###soif===137###eoif===163###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)") && ((AKA_mark("lis===2054###sois===51951###eois===51965###lif===5###soif===137###eoif===151###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)")&&value[i]!=-999)	&&(AKA_mark("lis===2054###sois===51969###eois===51977###lif===5###soif===155###eoif===163###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)")&&tcnt<100))) {
		AKA_mark("lis===2056###sois===51986###eois===51993###lif===7###soif===172###eoif===179###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");tcnt++;
		if (AKA_mark("lis===2057###sois===52000###eois===52029###lif===8###soif===186###eoif===215###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)") && ((AKA_mark("lis===2057###sois===52000###eois===52013###lif===8###soif===186###eoif===199###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)")&&min<=value[i])	&&(AKA_mark("lis===2057###sois===52016###eois===52029###lif===8###soif===202###eoif===215###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)")&&value[i]<=max))) {
			AKA_mark("lis===2059###sois===52040###eois===52054###lif===10###soif===226###eoif===240###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");sum+=value[i];
			AKA_mark("lis===2060###sois===52059###eois===52066###lif===11###soif===245###eoif===252###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");vcnt++;
		}
		else {AKA_mark("lis===-2057-###sois===-52000-###eois===-5200029-###lif===-8-###soif===-###eoif===-215-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");}
		AKA_mark("lis===2062###sois===52075###eois===52079###lif===13###soif===261###eoif===265###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");i++;
	}
	if (AKA_mark("lis===2065###sois===52091###eois===52097###lif===16###soif===277###eoif===283###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)") && (AKA_mark("lis===2065###sois===52091###eois===52097###lif===16###soif===277###eoif===283###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)")&&vcnt>0)) {
		AKA_mark("lis===2066###sois===52102###eois===52118###lif===17###soif===288###eoif===304###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");return sum/vcnt;
	}
	else {AKA_mark("lis===-2065-###sois===-52091-###eois===-520916-###lif===-16-###soif===-###eoif===-283-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");}
	AKA_mark("lis===2067###sois===52122###eois===52134###lif===18###soif===308###eoif===320###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");return -999;
}


/** Instrumented function twoWhileloop(int,int) */
int twoWhileloop(int m, int n)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.twoWhileloop.52147.stub"

	AKA_mark("lis===2073###sois===52182###eois===52190###lif===2###soif===39###eoif===47###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");int s=0;
	AKA_mark("lis===2073###sois===52191###eois===52200###lif===2###soif===48###eoif===57###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");int i, j;
	if (AKA_mark("lis===2074###sois===52210###eois===52220###lif===3###soif===67###eoif===77###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)") && ((AKA_mark("lis===2074###sois===52210###eois===52213###lif===3###soif===67###eoif===70###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)")&&m>0)	&&(AKA_mark("lis===2074###sois===52217###eois===52220###lif===3###soif===74###eoif===77###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)")&&n>0))) {
		AKA_mark("lis===2076###sois===52242###eois===52246###lif===5###soif===99###eoif===103###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");i=1;
		AKA_mark("lis===2076###sois===52247###eois===52251###lif===5###soif===104###eoif===108###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");j=1;
		while (AKA_mark("lis===2077###sois===52268###eois===52272###lif===6###soif===125###eoif===129###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)") && (AKA_mark("lis===2077###sois===52268###eois===52272###lif===6###soif===125###eoif===129###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)")&&i<=m)) {
			while (AKA_mark("lis===2079###sois===52303###eois===52307###lif===8###soif===160###eoif===164###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)") && (AKA_mark("lis===2079###sois===52303###eois===52307###lif===8###soif===160###eoif===164###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)")&&j<=n)) {
				AKA_mark("lis===2081###sois===52352###eois===52360###lif===10###soif===209###eoif===217###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");s=s+i+j;
				AKA_mark("lis===2082###sois===52383###eois===52389###lif===11###soif===240###eoif===246###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");j=j+1;
			}
			AKA_mark("lis===2084###sois===52422###eois===52428###lif===13###soif===279###eoif===285###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");i=i+1;
		}
	}
	else {AKA_mark("lis===-2074-###sois===-52210-###eois===-5221010-###lif===-3-###soif===-###eoif===-77-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");}
	AKA_mark("lis===2087###sois===52452###eois===52461###lif===16###soif===309###eoif===318###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");return s;
}
/** Instrumented function i4_log_10(int) */
int i4_log_10 ( int i )

//****************************************************************************80
//
//  Purpose:
//
//    I4_LOG_10 returns the integer part of the logarithm base 10 of ABS(X).
//
//  Example:
//
//        I  I4_LOG_10
//    -----  --------
//        0    0
//        1    0
//        2    0
//        9    0
//       10    1
//       11    1
//       99    1
//      100    2
//      101    2
//      999    2
//     1000    3
//     1001    3
//     9999    3
//    10000    4
//
//  Discussion:
//
//    I4_LOG_10 ( I ) + 1 is the number of decimal digits in I.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    04 January 2004
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, the number whose logarithm base 10 is desired.
//
//    Output, int I4_LOG_10, the integer part of the logarithm base 10 of
//    the absolute value of X.
//
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.i4_log_10.52470.stub"

	AKA_mark("lis===2140###sois===53471###eois===53481###lif===51###soif===1005###eoif===1015###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");int i_abs;
	AKA_mark("lis===2141###sois===53485###eois===53497###lif===52###soif===1019###eoif===1031###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");int ten_pow;
	AKA_mark("lis===2142###sois===53501###eois===53511###lif===53###soif===1035###eoif===1045###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");int value;
	if (AKA_mark("lis===2144###sois===53522###eois===53528###lif===55###soif===1056###eoif===1062###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)") && (AKA_mark("lis===2144###sois===53522###eois===53528###lif===55###soif===1056###eoif===1062###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)")&&i == 0)) {
		AKA_mark("lis===2146###sois===53541###eois===53551###lif===57###soif===1075###eoif===1085###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");value = 0;
	}
	else {
		AKA_mark("lis===2150###sois===53575###eois===53585###lif===61###soif===1109###eoif===1119###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");value = 0;
		AKA_mark("lis===2151###sois===53591###eois===53604###lif===62###soif===1125###eoif===1138###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");ten_pow = 10;
		if (AKA_mark("lis===2154###sois===53642###eois===53647###lif===65###soif===1176###eoif===1181###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)") && (AKA_mark("lis===2154###sois===53642###eois===53647###lif===65###soif===1176###eoif===1181###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)")&&i < 0)) {
			AKA_mark("lis===2155###sois===53655###eois===53666###lif===66###soif===1189###eoif===1200###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");i_abs = -i;
		}
		else {
			AKA_mark("lis===2157###sois===53683###eois===53693###lif===68###soif===1217###eoif===1227###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");i_abs = i;
		}
		while (AKA_mark("lis===2159###sois===53709###eois===53725###lif===70###soif===1243###eoif===1259###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)") && (AKA_mark("lis===2159###sois===53709###eois===53725###lif===70###soif===1243###eoif===1259###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)")&&ten_pow <= i_abs)) {
			AKA_mark("lis===2161###sois===53742###eois===53760###lif===72###soif===1276###eoif===1294###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");value = value + 1;
			AKA_mark("lis===2162###sois===53768###eois===53791###lif===73###soif===1302###eoif===1325###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");ten_pow = ten_pow * 10;
		}
	}
	AKA_mark("lis===2167###sois===53811###eois===53824###lif===78###soif===1345###eoif===1358###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\i4_log_10(int)");return value;
}
/** Instrumented function MathAndEnglishGrade0(int,int) */
char  MathAndEnglishGrade0 (int Math, int English)
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.MathAndEnglishGrade0.53835.stub"

	if (AKA_mark("lis===2173###sois===53986###eois===54009###lif===4###soif===157###eoif===180###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)") && ((AKA_mark("lis===2173###sois===53986###eois===53994###lif===4###soif===157###eoif===165###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)")&&Math>=50)	&&(AKA_mark("lis===2173###sois===53998###eois===54009###lif===4###soif===169###eoif===180###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)")&&English>=60))) {
		if (AKA_mark("lis===2176###sois===54057###eois===54080###lif===7###soif===228###eoif===251###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)") && ((AKA_mark("lis===2176###sois===54057###eois===54065###lif===7###soif===228###eoif===236###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)")&&Math>=80)	||(AKA_mark("lis===2176###sois===54069###eois===54080###lif===7###soif===240###eoif===251###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)")&&English>=90))) {
			AKA_mark("lis===2178###sois===54091###eois===54102###lif===9###soif===262###eoif===273###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)");return 'B';
		}
		else {
			if (AKA_mark("lis===2182###sois===54129###eois===54148###lif===13###soif===300###eoif===319###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)") && (AKA_mark("lis===2182###sois===54129###eois===54148###lif===13###soif===300###eoif===319###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)")&&Math + English>=180)) {
				AKA_mark("lis===2184###sois===54161###eois===54172###lif===15###soif===332###eoif===343###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)");return 'A';
			}
			else {
				AKA_mark("lis===2188###sois===54202###eois===54213###lif===19###soif===373###eoif===384###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)");return 'C';
			}
		}
	}
	else {AKA_mark("lis===-2173-###sois===-53986-###eois===-5398623-###lif===-4-###soif===-###eoif===-180-###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)");}
	AKA_mark("lis===2192###sois===54237###eois===54248###lif===23###soif===408###eoif===419###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\MathAndEnglishGrade0(int,int)");return 'D';
}

/*
	input: date of birth
	output: this function return zodiac given date.

struct Date{
	int date;
	int month;
	int year;
};
*/
/** Instrumented function calculateZodiac00(Date) */
int calculateZodiac00(Date born){AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.calculateZodiac00.54397.stub"

	AKA_mark("lis===2206###sois===54429###eois===54451###lif===1###soif===36###eoif===58###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");int date1 = born.date;
	AKA_mark("lis===2207###sois===54454###eois===54478###lif===2###soif===61###eoif===85###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");int month1 = born.month;
	AKA_mark("lis===2208###sois===54481###eois===54503###lif===3###soif===88###eoif===110###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");int year1 = born.year;
	AKA_mark("lis===2209###sois===54506###eois===54512###lif===4###soif===113###eoif===119###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");int t;
	{
		if (AKA_mark("lis===2212###sois===54526###eois===54611###lif===7###soif===133###eoif===218###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2212###sois===54528###eois===54539###lif===7###soif===135###eoif===146###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 3)	&&(AKA_mark("lis===2212###sois===54545###eois===54556###lif===7###soif===152###eoif===163###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 21))	&&(AKA_mark("lis===2212###sois===54562###eois===54573###lif===7###soif===169###eoif===180###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 31))	||((AKA_mark("lis===2212###sois===54581###eois===54592###lif===7###soif===188###eoif===199###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 4)	&&(AKA_mark("lis===2212###sois===54598###eois===54609###lif===7###soif===205###eoif===216###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 19)))) {
			AKA_mark("lis===2214###sois===54620###eois===54626###lif===9###soif===227###eoif===233###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 1;
		}
		else {
			if (AKA_mark("lis===2217###sois===54646###eois===54731###lif===12###soif===253###eoif===338###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2217###sois===54648###eois===54659###lif===12###soif===255###eoif===266###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 4)	&&(AKA_mark("lis===2217###sois===54665###eois===54676###lif===12###soif===272###eoif===283###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 20))	&&(AKA_mark("lis===2217###sois===54682###eois===54693###lif===12###soif===289###eoif===300###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 30))	||((AKA_mark("lis===2217###sois===54701###eois===54712###lif===12###soif===308###eoif===319###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 5)	&&(AKA_mark("lis===2217###sois===54718###eois===54729###lif===12###soif===325###eoif===336###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 20)))) {
				AKA_mark("lis===2219###sois===54741###eois===54747###lif===14###soif===348###eoif===354###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 2;
			}
			else {
				if (AKA_mark("lis===2222###sois===54767###eois===54852###lif===17###soif===374###eoif===459###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2222###sois===54769###eois===54780###lif===17###soif===376###eoif===387###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 5)	&&(AKA_mark("lis===2222###sois===54786###eois===54797###lif===17###soif===393###eoif===404###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 21))	&&(AKA_mark("lis===2222###sois===54803###eois===54814###lif===17###soif===410###eoif===421###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 31))	||((AKA_mark("lis===2222###sois===54822###eois===54833###lif===17###soif===429###eoif===440###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 6)	&&(AKA_mark("lis===2222###sois===54839###eois===54850###lif===17###soif===446###eoif===457###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 20)))) {
					AKA_mark("lis===2224###sois===54862###eois===54868###lif===19###soif===469###eoif===475###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 3;
				}
				else {
					if (AKA_mark("lis===2227###sois===54888###eois===54973###lif===22###soif===495###eoif===580###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2227###sois===54890###eois===54901###lif===22###soif===497###eoif===508###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 6)	&&(AKA_mark("lis===2227###sois===54907###eois===54918###lif===22###soif===514###eoif===525###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 21))	&&(AKA_mark("lis===2227###sois===54924###eois===54935###lif===22###soif===531###eoif===542###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 30))	||((AKA_mark("lis===2227###sois===54943###eois===54954###lif===22###soif===550###eoif===561###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 7)	&&(AKA_mark("lis===2227###sois===54960###eois===54971###lif===22###soif===567###eoif===578###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 22)))) {
						AKA_mark("lis===2228###sois===54981###eois===54987###lif===23###soif===588###eoif===594###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 4;
					}
					else {
						if (AKA_mark("lis===2231###sois===55007###eois===55092###lif===26###soif===614###eoif===699###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2231###sois===55009###eois===55020###lif===26###soif===616###eoif===627###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 7)	&&(AKA_mark("lis===2231###sois===55026###eois===55037###lif===26###soif===633###eoif===644###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 23))	&&(AKA_mark("lis===2231###sois===55043###eois===55054###lif===26###soif===650###eoif===661###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 31))	||((AKA_mark("lis===2231###sois===55062###eois===55073###lif===26###soif===669###eoif===680###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 8)	&&(AKA_mark("lis===2231###sois===55079###eois===55090###lif===26###soif===686###eoif===697###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 22)))) {
							AKA_mark("lis===2233###sois===55102###eois===55108###lif===28###soif===709###eoif===715###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 5;
						}
						else {
							if (AKA_mark("lis===2236###sois===55128###eois===55213###lif===31###soif===735###eoif===820###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2236###sois===55130###eois===55141###lif===31###soif===737###eoif===748###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 8)	&&(AKA_mark("lis===2236###sois===55147###eois===55158###lif===31###soif===754###eoif===765###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 23))	&&(AKA_mark("lis===2236###sois===55164###eois===55175###lif===31###soif===771###eoif===782###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 31))	||((AKA_mark("lis===2236###sois===55183###eois===55194###lif===31###soif===790###eoif===801###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 9)	&&(AKA_mark("lis===2236###sois===55200###eois===55211###lif===31###soif===807###eoif===818###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 22)))) {
								AKA_mark("lis===2238###sois===55223###eois===55229###lif===33###soif===830###eoif===836###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 6;
							}
							else {
								if (AKA_mark("lis===2241###sois===55249###eois===55335###lif===36###soif===856###eoif===942###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2241###sois===55251###eois===55262###lif===36###soif===858###eoif===869###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 9)	&&(AKA_mark("lis===2241###sois===55268###eois===55279###lif===36###soif===875###eoif===886###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 23))	&&(AKA_mark("lis===2241###sois===55285###eois===55296###lif===36###soif===892###eoif===903###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 30))	||((AKA_mark("lis===2241###sois===55304###eois===55316###lif===36###soif===911###eoif===923###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 10)	&&(AKA_mark("lis===2241###sois===55322###eois===55333###lif===36###soif===929###eoif===940###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 22)))) {
									AKA_mark("lis===2243###sois===55345###eois===55351###lif===38###soif===952###eoif===958###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 7;
								}
								else {
									if (AKA_mark("lis===2246###sois===55371###eois===55458###lif===41###soif===978###eoif===1065###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2246###sois===55373###eois===55385###lif===41###soif===980###eoif===992###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 10)	&&(AKA_mark("lis===2246###sois===55391###eois===55402###lif===41###soif===998###eoif===1009###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 23))	&&(AKA_mark("lis===2246###sois===55408###eois===55419###lif===41###soif===1015###eoif===1026###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 31))	||((AKA_mark("lis===2246###sois===55427###eois===55439###lif===41###soif===1034###eoif===1046###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 11)	&&(AKA_mark("lis===2246###sois===55445###eois===55456###lif===41###soif===1052###eoif===1063###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 21)))) {
										AKA_mark("lis===2248###sois===55468###eois===55474###lif===43###soif===1075###eoif===1081###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 8;
									}
									else {
										if (AKA_mark("lis===2251###sois===55494###eois===55581###lif===46###soif===1101###eoif===1188###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2251###sois===55496###eois===55508###lif===46###soif===1103###eoif===1115###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 11)	&&(AKA_mark("lis===2251###sois===55514###eois===55525###lif===46###soif===1121###eoif===1132###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 22))	&&(AKA_mark("lis===2251###sois===55531###eois===55542###lif===46###soif===1138###eoif===1149###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 31))	||((AKA_mark("lis===2251###sois===55550###eois===55562###lif===46###soif===1157###eoif===1169###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 12)	&&(AKA_mark("lis===2251###sois===55568###eois===55579###lif===46###soif===1175###eoif===1186###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 21)))) {
											AKA_mark("lis===2253###sois===55591###eois===55597###lif===48###soif===1198###eoif===1204###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 9;
										}
										else {
											if (AKA_mark("lis===2256###sois===55617###eois===55703###lif===51###soif===1224###eoif===1310###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2256###sois===55619###eois===55631###lif===51###soif===1226###eoif===1238###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 12)	&&(AKA_mark("lis===2256###sois===55637###eois===55648###lif===51###soif===1244###eoif===1255###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 22))	&&(AKA_mark("lis===2256###sois===55654###eois===55665###lif===51###soif===1261###eoif===1272###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 30))	||((AKA_mark("lis===2256###sois===55673###eois===55684###lif===51###soif===1280###eoif===1291###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 1)	&&(AKA_mark("lis===2256###sois===55690###eois===55701###lif===51###soif===1297###eoif===1308###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 19)))) {
												AKA_mark("lis===2258###sois===55713###eois===55720###lif===53###soif===1320###eoif===1327###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 10;
											}
											else {
												if (AKA_mark("lis===2261###sois===55740###eois===55825###lif===56###soif===1347###eoif===1432###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2261###sois===55742###eois===55753###lif===56###soif===1349###eoif===1360###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 1)	&&(AKA_mark("lis===2261###sois===55759###eois===55770###lif===56###soif===1366###eoif===1377###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 20))	&&(AKA_mark("lis===2261###sois===55776###eois===55787###lif===56###soif===1383###eoif===1394###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 31))	||((AKA_mark("lis===2261###sois===55795###eois===55806###lif===56###soif===1402###eoif===1413###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 2)	&&(AKA_mark("lis===2261###sois===55812###eois===55823###lif===56###soif===1419###eoif===1430###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 18)))) {
													AKA_mark("lis===2263###sois===55835###eois===55842###lif===58###soif===1442###eoif===1449###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 11;
												}
												else {
													if (AKA_mark("lis===2266###sois===55862###eois===55947###lif===61###soif===1469###eoif===1554###ifc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)") && ((((AKA_mark("lis===2266###sois===55864###eois===55875###lif===61###soif===1471###eoif===1482###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 2)	&&(AKA_mark("lis===2266###sois===55881###eois===55892###lif===61###soif===1488###eoif===1499###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 >= 19))	&&(AKA_mark("lis===2266###sois===55898###eois===55909###lif===61###soif===1505###eoif===1516###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 29))	||((AKA_mark("lis===2266###sois===55917###eois===55928###lif===61###soif===1524###eoif===1535###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&month1 == 3)	&&(AKA_mark("lis===2266###sois===55934###eois===55945###lif===61###soif===1541###eoif===1552###isc===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)")&&date1 <= 20)))) {
														AKA_mark("lis===2268###sois===55957###eois===55964###lif===63###soif===1564###eoif===1571###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = 12;
													}
													else {
														AKA_mark("lis===2271###sois===55984###eois===55991###lif===66###soif===1591###eoif===1598###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");t = -1;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	AKA_mark("lis===2276###sois===56007###eois===56016###lif===71###soif===1614###eoif===1623###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac00(Date)");return t;
}


/** Instrumented function main() */
int AKA_MAIN()
{AKA_mark("Calling: .\\Sample_for_R1_2\\test17082021.cpp\\main()");AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.main.56029.stub"

	AKA_mark("lis===2282###sois===56041###eois===56062###lif===2###soif===16###eoif===37###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\main()");cout<<getFare(2, 50);
	AKA_mark("lis===2284###sois===56104###eois===56113###lif===4###soif===79###eoif===88###ins===true###function===.\\Sample_for_R1_2\\test17082021.cpp\\main()");return 0;
}





#endif

