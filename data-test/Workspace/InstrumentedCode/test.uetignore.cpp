/** Guard statement to avoid multiple declaration */
#ifndef UET_SRC_D__TOOL_VNU_DATA_TEST_SAMPLE_FOR_R1_2_TEST_CPP
#define UET_SRC_D__TOOL_VNU_DATA_TEST_SAMPLE_FOR_R1_2_TEST_CPP
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
int factorial(int x){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\factorial(int)");UET_fCall++;
	if (UET_mark("lis===19###sois===396###eois===401###lif===2###soif===33###eoif===38###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\factorial(int)") && (UET_mark("lis===19###sois===396###eois===401###lif===2###soif===33###eoif===38###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\factorial(int)")&&x < 1)) {
		UET_mark("lis===20###sois===426###eois===435###lif===3###soif===63###eoif===72###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\factorial(int)");return 1;
	}
	UET_mark("lis===21###sois===441###eois===453###lif===4###soif===78###eoif===90###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\factorial(int)");int res = 2;
	UET_mark("lis===22###sois===464###eois===474###lif===5###soif===101###eoif===111###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\factorial(int)");for (int i = 3;UET_mark("lis===22###sois===475###eois===481###lif===5###soif===112###eoif===118###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\factorial(int)") && UET_mark("lis===22###sois===475###eois===481###lif===5###soif===112###eoif===118###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\factorial(int)")&&i <= x;({UET_mark("lis===22###sois===483###eois===486###lif===5###soif===120###eoif===123###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\factorial(int)");i++;})) {
		UET_mark("lis===23###sois===497###eois===511###lif===6###soif===134###eoif===148###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\factorial(int)");res = res * i;
	}
	UET_mark("lis===24###sois===517###eois===528###lif===7###soif===154###eoif===165###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\factorial(int)");return res;
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
char grade(int averageGrade){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)");UET_fCall++;
	if (UET_mark("lis===44###sois===1011###eois===1046###lif===1###soif===35###eoif===70###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)") && ((UET_mark("lis===44###sois===1011###eois===1026###lif===1###soif===35###eoif===50###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)")&&averageGrade>90)	&&(UET_mark("lis===44###sois===1030###eois===1046###lif===1###soif===54###eoif===70###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)")&&averageGrade<100))) {
		UET_mark("lis===45###sois===1051###eois===1062###lif===2###soif===75###eoif===86###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)");return 'A';
	}
	else {
		if (UET_mark("lis===46###sois===1073###eois===1107###lif===3###soif===97###eoif===131###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)") && ((UET_mark("lis===46###sois===1073###eois===1088###lif===3###soif===97###eoif===112###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)")&&averageGrade>80)	&&(UET_mark("lis===46###sois===1092###eois===1107###lif===3###soif===116###eoif===131###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)")&&averageGrade<90))) {
			UET_mark("lis===47###sois===1112###eois===1123###lif===4###soif===136###eoif===147###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)");return 'B';
		}
		else {
			if (UET_mark("lis===48###sois===1134###eois===1168###lif===5###soif===158###eoif===192###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)") && ((UET_mark("lis===48###sois===1134###eois===1149###lif===5###soif===158###eoif===173###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)")&&averageGrade>70)	&&(UET_mark("lis===48###sois===1153###eois===1168###lif===5###soif===177###eoif===192###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)")&&averageGrade<80))) {
				UET_mark("lis===49###sois===1173###eois===1184###lif===6###soif===197###eoif===208###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)");return 'C';
			}
			else {
				if (UET_mark("lis===50###sois===1195###eois===1229###lif===7###soif===219###eoif===253###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)") && ((UET_mark("lis===50###sois===1195###eois===1210###lif===7###soif===219###eoif===234###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)")&&averageGrade>60)	&&(UET_mark("lis===50###sois===1214###eois===1229###lif===7###soif===238###eoif===253###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)")&&averageGrade<70))) {
					UET_mark("lis===51###sois===1234###eois===1245###lif===8###soif===258###eoif===269###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)");return 'D';
				}
				else {
					if (UET_mark("lis===52###sois===1256###eois===1290###lif===9###soif===280###eoif===314###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)") && ((UET_mark("lis===52###sois===1256###eois===1270###lif===9###soif===280###eoif===294###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)")&&averageGrade>0)	&&(UET_mark("lis===52###sois===1274###eois===1290###lif===9###soif===298###eoif===314###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)")&&averageGrade <60))) {
						UET_mark("lis===53###sois===1295###eois===1306###lif===10###soif===319###eoif===330###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)");return 'F';
					}
				}
			}
		}
	}
	UET_mark("lis===54###sois===1309###eois===1320###lif===11###soif===333###eoif===344###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\grade(int)");return 'I';
}

//****************************************************************************
/*
test function has loop

****************************************************************************/

/** Instrumented function testLoopFor(int,int) */
int testLoopFor(int n, int m){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)");UET_fCall++;
	UET_mark("lis===65###sois===1561###eois===1569###lif===2###soif===43###eoif===51###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)");for (int i=1;UET_mark("lis===65###sois===1570###eois===1574###lif===2###soif===52###eoif===56###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)") && UET_mark("lis===65###sois===1570###eois===1574###lif===2###soif===52###eoif===56###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)")&&i<=n;({UET_mark("lis===65###sois===1576###eois===1579###lif===2###soif===58###eoif===61###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)");i++;})) {
		UET_mark("lis===66###sois===1595###eois===1603###lif===3###soif===77###eoif===85###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)");for (int j=1;UET_mark("lis===66###sois===1604###eois===1608###lif===3###soif===86###eoif===90###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)") && UET_mark("lis===66###sois===1604###eois===1608###lif===3###soif===86###eoif===90###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)")&&j<=m;({UET_mark("lis===66###sois===1610###eois===1613###lif===3###soif===92###eoif===95###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)");j++;})) {
			if (UET_mark("lis===67###sois===1627###eois===1639###lif===4###soif===109###eoif===121###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)") && ((UET_mark("lis===67###sois===1627###eois===1631###lif===4###soif===109###eoif===113###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)")&&n==5)	&&(UET_mark("lis===67###sois===1635###eois===1639###lif===4###soif===117###eoif===121###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)")&&m==6))) {
				UET_mark("lis===67###sois===1641###eois===1652###lif===4###soif===123###eoif===134###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)");return m+n;
			}
		}
	}
	UET_mark("lis===68###sois===1660###eois===1669###lif===5###soif===142###eoif===151###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor(int,int)");return 0;
}
/** Instrumented function testLoopFor1(int) */
int testLoopFor1(int n){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor1(int)");UET_fCall++;
	UET_mark("lis===72###sois===1711###eois===1719###lif===2###soif===37###eoif===45###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor1(int)");for (int i=1;UET_mark("lis===72###sois===1720###eois===1724###lif===2###soif===46###eoif===50###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor1(int)") && UET_mark("lis===72###sois===1720###eois===1724###lif===2###soif===46###eoif===50###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor1(int)")&&i<=n;({UET_mark("lis===72###sois===1726###eois===1729###lif===2###soif===52###eoif===55###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor1(int)");i++;})) {
		if (UET_mark("lis===74###sois===1745###eois===1749###lif===4###soif===71###eoif===75###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor1(int)") && (UET_mark("lis===74###sois===1745###eois===1749###lif===4###soif===71###eoif===75###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor1(int)")&&n==5)) {
			UET_mark("lis===74###sois===1751###eois===1760###lif===4###soif===77###eoif===86###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor1(int)");return n;
		}
	}
	UET_mark("lis===75###sois===1768###eois===1777###lif===5###soif===94###eoif===103###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testLoopFor1(int)");return 0;
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
int getFare(int age, int distance){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)");UET_fCall++;
	UET_mark("lis===95###sois===2296###eois===2305###lif===2###soif===40###eoif===49###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)");int fare;
	if (UET_mark("lis===97###sois===2341###eois===2360###lif===4###soif===85###eoif===104###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)") && ((UET_mark("lis===97###sois===2341###eois===2348###lif===4###soif===85###eoif===92###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)")&&age > 4)	&&(UET_mark("lis===97###sois===2352###eois===2360###lif===4###soif===96###eoif===104###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)")&&age < 14))) {
		if (UET_mark("lis===100###sois===2398###eois===2412###lif===7###soif===142###eoif===156###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)") && (UET_mark("lis===100###sois===2398###eois===2412###lif===7###soif===142###eoif===156###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)")&&distance >= 10)) {
			UET_mark("lis===101###sois===2418###eois===2429###lif===8###soif===162###eoif===173###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)");fare = 130;
		}
		else {
			UET_mark("lis===102###sois===2438###eois===2449###lif===9###soif===182###eoif===193###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)");fare = 100;
		}
	}
	if (UET_mark("lis===105###sois===2477###eois===2485###lif===12###soif===221###eoif===229###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)") && (UET_mark("lis===105###sois===2477###eois===2485###lif===12###soif===221###eoif===229###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)")&&age > 15)) {
		if (UET_mark("lis===107###sois===2497###eois===2522###lif===14###soif===241###eoif===266###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)") && ((UET_mark("lis===107###sois===2497###eois===2509###lif===14###soif===241###eoif===253###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)")&&distance <10)	&&(UET_mark("lis===107###sois===2513###eois===2522###lif===14###soif===257###eoif===266###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)")&&age >= 60))) {
			UET_mark("lis===108###sois===2528###eois===2539###lif===15###soif===272###eoif===283###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)");fare = 160;
		}
		else {
			if (UET_mark("lis===109###sois===2551###eois===2576###lif===16###soif===295###eoif===320###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)") && ((UET_mark("lis===109###sois===2551###eois===2564###lif===16###soif===295###eoif===308###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)")&&distance > 10)	&&(UET_mark("lis===109###sois===2568###eois===2576###lif===16###soif===312###eoif===320###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)")&&age < 60))) {
				UET_mark("lis===110###sois===2582###eois===2593###lif===17###soif===326###eoif===337###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)");fare = 250;
			}
			else {
				UET_mark("lis===111###sois===2603###eois===2614###lif===18###soif===347###eoif===358###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)");fare = 200;
			}
		}
	}
	UET_mark("lis===113###sois===2621###eois===2633###lif===20###soif===365###eoif===377###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare(int,int)");return fare;
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
int i4_power(int i, int j){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");UET_fCall++;
	UET_mark("lis===162###sois===3579###eois===3585###lif===26###soif===503###eoif===509###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");int k;
	UET_mark("lis===163###sois===3589###eois===3599###lif===27###soif===513###eoif===523###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");int value;
	if (UET_mark("lis===165###sois===3609###eois===3612###lif===29###soif===533###eoif===536###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)") && (UET_mark("lis===165###sois===3609###eois===3612###lif===29###soif===533###eoif===536###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)")&&j<0)) {
		if (UET_mark("lis===167###sois===3628###eois===3632###lif===31###soif===552###eoif===556###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)") && (UET_mark("lis===167###sois===3628###eois===3632###lif===31###soif===552###eoif===556###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)")&&i==1)) {
			UET_mark("lis===169###sois===3648###eois===3656###lif===33###soif===572###eoif===580###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");value=1;
		}
		else {
			if (UET_mark("lis===171###sois===3678###eois===3682###lif===35###soif===602###eoif===606###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)") && (UET_mark("lis===171###sois===3678###eois===3682###lif===35###soif===602###eoif===606###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)")&&i==0)) {
				UET_mark("lis===177###sois===3854###eois===3864###lif===41###soif===778###eoif===788###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");return -1;
			}
			else {
				UET_mark("lis===181###sois===3896###eois===3904###lif===45###soif===820###eoif===828###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");value=0;
			}
		}
	}
	else {
		if (UET_mark("lis===184###sois===3929###eois===3933###lif===48###soif===853###eoif===857###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)") && (UET_mark("lis===184###sois===3929###eois===3933###lif===48###soif===853###eoif===857###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)")&&j==0)) {
			if (UET_mark("lis===186###sois===3957###eois===3961###lif===50###soif===881###eoif===885###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)") && (UET_mark("lis===186###sois===3957###eois===3961###lif===50###soif===881###eoif===885###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)")&&i>=0)) {
				UET_mark("lis===192###sois===4146###eois===4156###lif===56###soif===1070###eoif===1080###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");return -1;
			}
			else {
				UET_mark("lis===196###sois===4188###eois===4196###lif===60###soif===1112###eoif===1120###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");value=1;
			}
		}
		else {
			if (UET_mark("lis===199###sois===4221###eois===4225###lif===63###soif===1145###eoif===1149###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)") && (UET_mark("lis===199###sois===4221###eois===4225###lif===63###soif===1145###eoif===1149###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)")&&j>=1)) {
				UET_mark("lis===201###sois===4255###eois===4263###lif===65###soif===1179###eoif===1187###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");value=i;
			}
			else {
				UET_mark("lis===205###sois===4287###eois===4295###lif===69###soif===1211###eoif===1219###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");value=1;
				UET_mark("lis===206###sois===4306###eois===4310###lif===70###soif===1230###eoif===1234###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");for (k=1;UET_mark("lis===206###sois===4311###eois===4315###lif===70###soif===1235###eoif===1239###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)") && UET_mark("lis===206###sois===4311###eois===4315###lif===70###soif===1235###eoif===1239###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)")&&k<=j;({UET_mark("lis===206###sois===4317###eois===4320###lif===70###soif===1241###eoif===1244###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");k++;})) {
					UET_mark("lis===208###sois===4336###eois===4352###lif===72###soif===1260###eoif===1276###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");value = value*i;
				}
			}
		}
	}
	UET_mark("lis===211###sois===4368###eois===4381###lif===75###soif===1292###eoif===1305###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\i4_power(int,int)");return value;
}

//****************************************************************************

//Tinh toan cung hoang dao (Zodiac) va du bao
/*
	intput : date, month
 	output: this function return zodiac given date
*/
/** Instrumented function calculateZodiac(int,int) */
int calculateZodiac(int date, int month){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");UET_fCall++;
	UET_mark("lis===222###sois===4644###eois===4650###lif===1###soif===46###eoif===52###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");int t;
	{
		if (UET_mark("lis===225###sois===4670###eois===4732###lif===4###soif===72###eoif===134###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===225###sois===4672###eois===4680###lif===4###soif===74###eoif===82###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==3)	&&(UET_mark("lis===225###sois===4684###eois===4692###lif===4###soif===86###eoif===94###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=21))	&&(UET_mark("lis===225###sois===4696###eois===4704###lif===4###soif===98###eoif===106###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===225###sois===4710###eois===4718###lif===4###soif===112###eoif===120###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==4)	&&(UET_mark("lis===225###sois===4722###eois===4730###lif===4###soif===124###eoif===132###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=19)))) {
			UET_mark("lis===228###sois===4755###eois===4801###lif===7###soif===157###eoif===203###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t\tYour Zodiac sign is ARIES";
			UET_mark("lis===229###sois===4812###eois===4919###lif===8###soif===214###eoif===321###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n 2012 would be a good year overall. You will experience a rise in financial luck and inflows";
			UET_mark("lis===230###sois===4930###eois===4979###lif===9###soif===332###eoif===381###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
			UET_mark("lis===231###sois===4990###eois===4996###lif===10###soif===392###eoif===398###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 1;
		}
		else {
			if (UET_mark("lis===234###sois===5024###eois===5086###lif===13###soif===426###eoif===488###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===234###sois===5026###eois===5034###lif===13###soif===428###eoif===436###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==4)	&&(UET_mark("lis===234###sois===5038###eois===5046###lif===13###soif===440###eoif===448###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=20))	&&(UET_mark("lis===234###sois===5050###eois===5058###lif===13###soif===452###eoif===460###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=30))	||((UET_mark("lis===234###sois===5064###eois===5072###lif===13###soif===466###eoif===474###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==5)	&&(UET_mark("lis===234###sois===5076###eois===5084###lif===13###soif===478###eoif===486###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=20)))) {
				UET_mark("lis===235###sois===5100###eois===5145###lif===14###soif===502###eoif===547###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is TAURUS";
				UET_mark("lis===236###sois===5156###eois===5283###lif===15###soif===558###eoif===685###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n A very eventful year. Career would be on a high growth trajectory and bring in major progress and achievements.";
				UET_mark("lis===237###sois===5294###eois===5343###lif===16###soif===696###eoif===745###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
				UET_mark("lis===238###sois===5354###eois===5360###lif===17###soif===756###eoif===762###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 2;
			}
			else {
				if (UET_mark("lis===241###sois===5388###eois===5450###lif===20###soif===790###eoif===852###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===241###sois===5390###eois===5398###lif===20###soif===792###eoif===800###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==5)	&&(UET_mark("lis===241###sois===5402###eois===5410###lif===20###soif===804###eoif===812###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=21))	&&(UET_mark("lis===241###sois===5414###eois===5422###lif===20###soif===816###eoif===824###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===241###sois===5428###eois===5436###lif===20###soif===830###eoif===838###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==6)	&&(UET_mark("lis===241###sois===5440###eois===5448###lif===20###soif===842###eoif===850###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=20)))) {
					UET_mark("lis===242###sois===5464###eois===5509###lif===21###soif===866###eoif===911###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is GEMINI";
					UET_mark("lis===243###sois===5520###eois===5669###lif===22###soif===922###eoif===1071###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\nA very positive year. Income & professional growth would be immense. You will find the ability to make some very profitable deals now.";
					UET_mark("lis===244###sois===5680###eois===5729###lif===23###soif===1082###eoif===1131###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
					UET_mark("lis===245###sois===5740###eois===5746###lif===24###soif===1142###eoif===1148###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 3;
				}
				else {
					if (UET_mark("lis===248###sois===5774###eois===5836###lif===27###soif===1176###eoif===1238###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===248###sois===5776###eois===5784###lif===27###soif===1178###eoif===1186###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==6)	&&(UET_mark("lis===248###sois===5788###eois===5796###lif===27###soif===1190###eoif===1198###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=21))	&&(UET_mark("lis===248###sois===5800###eois===5808###lif===27###soif===1202###eoif===1210###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=30))	||((UET_mark("lis===248###sois===5814###eois===5822###lif===27###soif===1216###eoif===1224###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==7)	&&(UET_mark("lis===248###sois===5826###eois===5834###lif===27###soif===1228###eoif===1236###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
						UET_mark("lis===249###sois===5850###eois===5895###lif===28###soif===1252###eoif===1297###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is CANCER";
						UET_mark("lis===250###sois===5906###eois===6053###lif===29###soif===1308###eoif===1455###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\nA very eventful year, although negative thoughts and unnecessary pessimism could spoil your spirit and bring in unnecessary tension.";
						UET_mark("lis===251###sois===6064###eois===6113###lif===30###soif===1466###eoif===1515###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
						UET_mark("lis===252###sois===6124###eois===6130###lif===31###soif===1526###eoif===1532###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 4;
					}
					else {
						if (UET_mark("lis===255###sois===6158###eois===6220###lif===34###soif===1560###eoif===1622###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===255###sois===6160###eois===6168###lif===34###soif===1562###eoif===1570###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==7)	&&(UET_mark("lis===255###sois===6172###eois===6180###lif===34###soif===1574###eoif===1582###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(UET_mark("lis===255###sois===6184###eois===6192###lif===34###soif===1586###eoif===1594###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===255###sois===6198###eois===6206###lif===34###soif===1600###eoif===1608###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==8)	&&(UET_mark("lis===255###sois===6210###eois===6218###lif===34###soif===1612###eoif===1620###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
							UET_mark("lis===256###sois===6234###eois===6276###lif===35###soif===1636###eoif===1678###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is LEO";
							UET_mark("lis===257###sois===6287###eois===6429###lif===36###soif===1689###eoif===1831###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\nAn exceptional year again. You will see a rise in status and expansion in career this year too. Luck will favor you throughout.";
							UET_mark("lis===258###sois===6440###eois===6489###lif===37###soif===1842###eoif===1891###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
							UET_mark("lis===259###sois===6500###eois===6506###lif===38###soif===1902###eoif===1908###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 5;
						}
						else {
							if (UET_mark("lis===262###sois===6534###eois===6596###lif===41###soif===1936###eoif===1998###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===262###sois===6536###eois===6544###lif===41###soif===1938###eoif===1946###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==8)	&&(UET_mark("lis===262###sois===6548###eois===6556###lif===41###soif===1950###eoif===1958###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(UET_mark("lis===262###sois===6560###eois===6568###lif===41###soif===1962###eoif===1970###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===262###sois===6574###eois===6582###lif===41###soif===1976###eoif===1984###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==9)	&&(UET_mark("lis===262###sois===6586###eois===6594###lif===41###soif===1988###eoif===1996###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
								UET_mark("lis===263###sois===6610###eois===6654###lif===42###soif===2012###eoif===2056###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is VIRGO";
								UET_mark("lis===264###sois===6665###eois===6803###lif===43###soif===2067###eoif===2205###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\nA brilliant & positive year, where you will make things happen on your own strength, rather than seeking support of others.";
								UET_mark("lis===265###sois===6814###eois===6863###lif===44###soif===2216###eoif===2265###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
								UET_mark("lis===266###sois===6874###eois===6880###lif===45###soif===2276###eoif===2282###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 6;
							}
							else {
								if (UET_mark("lis===269###sois===6908###eois===6971###lif===48###soif===2310###eoif===2373###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===269###sois===6910###eois===6918###lif===48###soif===2312###eoif===2320###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==9)	&&(UET_mark("lis===269###sois===6922###eois===6930###lif===48###soif===2324###eoif===2332###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(UET_mark("lis===269###sois===6934###eois===6942###lif===48###soif===2336###eoif===2344###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=30))	||((UET_mark("lis===269###sois===6948###eois===6957###lif===48###soif===2350###eoif===2359###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==10)	&&(UET_mark("lis===269###sois===6961###eois===6969###lif===48###soif===2363###eoif===2371###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
									UET_mark("lis===270###sois===6985###eois===7029###lif===49###soif===2387###eoif===2431###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is LIBRA";
									UET_mark("lis===271###sois===7040###eois===7260###lif===50###soif===2442###eoif===2662###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\nA powerful phase will be in operation this month. You will find your role as defined by nature will change and all efforts and activities carried out by you will assume higher importance and effectiveness.";
									UET_mark("lis===272###sois===7271###eois===7320###lif===51###soif===2673###eoif===2722###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
									UET_mark("lis===273###sois===7331###eois===7337###lif===52###soif===2733###eoif===2739###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 7;
								}
								else {
									if (UET_mark("lis===276###sois===7365###eois===7429###lif===55###soif===2767###eoif===2831###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===276###sois===7367###eois===7376###lif===55###soif===2769###eoif===2778###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==10)	&&(UET_mark("lis===276###sois===7380###eois===7388###lif===55###soif===2782###eoif===2790###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(UET_mark("lis===276###sois===7392###eois===7400###lif===55###soif===2794###eoif===2802###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===276###sois===7406###eois===7415###lif===55###soif===2808###eoif===2817###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==11)	&&(UET_mark("lis===276###sois===7419###eois===7427###lif===55###soif===2821###eoif===2829###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=21)))) {
										UET_mark("lis===277###sois===7443###eois===7489###lif===56###soif===2845###eoif===2891###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is SCORPIO";
										UET_mark("lis===278###sois===7500###eois===7640###lif===57###soif===2902###eoif===3042###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\nPositive period would continue, although you need to be careful that throwing good money after bad money is not a great idea.";
										UET_mark("lis===279###sois===7651###eois===7700###lif===58###soif===3053###eoif===3102###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
										UET_mark("lis===280###sois===7711###eois===7717###lif===59###soif===3113###eoif===3119###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 8;
									}
									else {
										if (UET_mark("lis===283###sois===7745###eois===7809###lif===62###soif===3147###eoif===3211###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===283###sois===7747###eois===7756###lif===62###soif===3149###eoif===3158###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==11)	&&(UET_mark("lis===283###sois===7760###eois===7768###lif===62###soif===3162###eoif===3170###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=22))	&&(UET_mark("lis===283###sois===7772###eois===7780###lif===62###soif===3174###eoif===3182###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===283###sois===7786###eois===7795###lif===62###soif===3188###eoif===3197###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==12)	&&(UET_mark("lis===283###sois===7799###eois===7807###lif===62###soif===3201###eoif===3209###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=21)))) {
											UET_mark("lis===284###sois===7823###eois===7873###lif===63###soif===3225###eoif===3275###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is SAGITTARIUS";
											UET_mark("lis===285###sois===7884###eois===8118###lif===64###soif===3286###eoif===3520###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n2012 brings in promise and progress. New ideas and cerebral approach to matters will bring in much progress this year. You will be at your creative best till May 2012 and thereafter dynamic activity will take you along.";
											UET_mark("lis===286###sois===8129###eois===8178###lif===65###soif===3531###eoif===3580###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
											UET_mark("lis===287###sois===8189###eois===8195###lif===66###soif===3591###eoif===3597###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 9;
										}
										else {
											if (UET_mark("lis===290###sois===8223###eois===8286###lif===69###soif===3625###eoif===3688###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===290###sois===8225###eois===8234###lif===69###soif===3627###eoif===3636###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==12)	&&(UET_mark("lis===290###sois===8238###eois===8246###lif===69###soif===3640###eoif===3648###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=22))	&&(UET_mark("lis===290###sois===8250###eois===8258###lif===69###soif===3652###eoif===3660###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=30))	||((UET_mark("lis===290###sois===8264###eois===8272###lif===69###soif===3666###eoif===3674###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==1)	&&(UET_mark("lis===290###sois===8276###eois===8284###lif===69###soif===3678###eoif===3686###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=19)))) {
												UET_mark("lis===291###sois===8300###eois===8348###lif===70###soif===3702###eoif===3750###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is CAPRICORN";
												UET_mark("lis===292###sois===8359###eois===8495###lif===71###soif===3761###eoif===3897###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\nA very positive year for you. You would be at your creative best and luck related peak in most of the works you get into.";
												UET_mark("lis===293###sois===8506###eois===8555###lif===72###soif===3908###eoif===3957###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
												UET_mark("lis===294###sois===8566###eois===8573###lif===73###soif===3968###eoif===3975###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 10;
											}
											else {
												if (UET_mark("lis===297###sois===8601###eois===8663###lif===76###soif===4003###eoif===4065###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===297###sois===8603###eois===8611###lif===76###soif===4005###eoif===4013###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==1)	&&(UET_mark("lis===297###sois===8615###eois===8623###lif===76###soif===4017###eoif===4025###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=20))	&&(UET_mark("lis===297###sois===8627###eois===8635###lif===76###soif===4029###eoif===4037###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===297###sois===8641###eois===8649###lif===76###soif===4043###eoif===4051###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==2)	&&(UET_mark("lis===297###sois===8653###eois===8661###lif===76###soif===4055###eoif===4063###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=18)))) {
													UET_mark("lis===298###sois===8677###eois===8724###lif===77###soif===4079###eoif===4126###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is AQUARIUS";
													UET_mark("lis===299###sois===8735###eois===8886###lif===78###soif===4137###eoif===4288###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\nA much better year in comparison to 2010 & 2011. You will feel a surge in your luck, productivity and general sense of positive outlook.";
													UET_mark("lis===300###sois===8897###eois===8946###lif===79###soif===4299###eoif===4348###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
													UET_mark("lis===301###sois===8957###eois===8964###lif===80###soif===4359###eoif===4366###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 11;
												}
												else {
													if (UET_mark("lis===304###sois===8992###eois===9054###lif===83###soif===4394###eoif===4456###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===304###sois===8994###eois===9002###lif===83###soif===4396###eoif===4404###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==2)	&&(UET_mark("lis===304###sois===9006###eois===9014###lif===83###soif===4408###eoif===4416###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date>=19))	&&(UET_mark("lis===304###sois===9018###eois===9026###lif===83###soif===4420###eoif===4428###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=29))	||((UET_mark("lis===304###sois===9032###eois===9040###lif===83###soif===4434###eoif===4442###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&month==3)	&&(UET_mark("lis===304###sois===9044###eois===9052###lif===83###soif===4446###eoif===4454###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)")&&date<=20)))) {
														UET_mark("lis===305###sois===9068###eois===9113###lif===84###soif===4470###eoif===4515###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is PISCES";
														UET_mark("lis===306###sois===9124###eois===9269###lif===85###soif===4526###eoif===4671###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\nSome amount of struggle and hurdles could come about in life this year. You will have a positive and gainful period till May 2012.";
														UET_mark("lis===307###sois===9280###eois===9329###lif===86###soif===4682###eoif===4731###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
														UET_mark("lis===308###sois===9340###eois===9347###lif===87###soif===4742###eoif===4749###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = 12;
													}
													else {
														UET_mark("lis===312###sois===9383###eois===9390###lif===91###soif===4785###eoif===4792###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");t = -1;
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
	UET_mark("lis===317###sois===9414###eois===9423###lif===96###soif===4816###eoif===4825###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\calculateZodiac(int,int)");return t;
}

//****************************************************************************
//GCD(int, int)
/*
	intput : integer number m, n
 	output: return integer number correspond to GCD(m,n)
*/
/** Instrumented function GCD(int,int) */
int GCD(int m, int n){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)");UET_fCall++;
	if (UET_mark("lis===328###sois===9653###eois===9656###lif===2###soif===31###eoif===34###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)") && (UET_mark("lis===328###sois===9653###eois===9656###lif===2###soif===31###eoif===34###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)")&&m<0)) {
		UET_mark("lis===328###sois===9658###eois===9663###lif===2###soif===36###eoif===41###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)");m=-m;
	}
	if (UET_mark("lis===329###sois===9670###eois===9673###lif===3###soif===48###eoif===51###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)") && (UET_mark("lis===329###sois===9670###eois===9673###lif===3###soif===48###eoif===51###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)")&&n<0)) {
		UET_mark("lis===329###sois===9675###eois===9680###lif===3###soif===53###eoif===58###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)");n=-n;
	}
	if (UET_mark("lis===330###sois===9687###eois===9691###lif===4###soif===65###eoif===69###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)") && (UET_mark("lis===330###sois===9687###eois===9691###lif===4###soif===65###eoif===69###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)")&&m==0)) {
		UET_mark("lis===330###sois===9693###eois===9702###lif===4###soif===71###eoif===80###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)");return n;
	}
	if (UET_mark("lis===331###sois===9709###eois===9713###lif===5###soif===87###eoif===91###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)") && (UET_mark("lis===331###sois===9709###eois===9713###lif===5###soif===87###eoif===91###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)")&&n==0)) {
		UET_mark("lis===331###sois===9715###eois===9724###lif===5###soif===93###eoif===102###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)");return m;
	}
	while (UET_mark("lis===332###sois===9734###eois===9738###lif===6###soif===112###eoif===116###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)") && (UET_mark("lis===332###sois===9734###eois===9738###lif===6###soif===112###eoif===116###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)")&&m!=n)) {
		if (UET_mark("lis===333###sois===9747###eois===9750###lif===7###soif===125###eoif===128###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)") && (UET_mark("lis===333###sois===9747###eois===9750###lif===7###soif===125###eoif===128###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)")&&m>n)) {
			UET_mark("lis===333###sois===9752###eois===9758###lif===7###soif===130###eoif===136###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)");m=m-n;
		}
		else {
			UET_mark("lis===334###sois===9767###eois===9773###lif===8###soif===145###eoif===151###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)");n=n-m;
		}
	}
	UET_mark("lis===335###sois===9776###eois===9785###lif===9###soif===154###eoif===163###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\GCD(int,int)");return m;
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
int Tritype(double i, double j, double k){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)");UET_fCall++;
	UET_mark("lis===363###sois===10675###eois===10690###lif===2###soif===133###eoif===148###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)");int trityp = 0;
	if (UET_mark("lis===364###sois===10714###eois===10743###lif===3###soif===172###eoif===201###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)") && (((UET_mark("lis===364###sois===10714###eois===10721###lif===3###soif===172###eoif===179###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)")&&i < 0.0)	||(UET_mark("lis===364###sois===10725###eois===10732###lif===3###soif===183###eoif===190###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)")&&j < 0.0))	||(UET_mark("lis===364###sois===10736###eois===10743###lif===3###soif===194###eoif===201###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)")&&k < 0.0))) {
		UET_mark("lis===365###sois===10763###eois===10772###lif===4###soif===221###eoif===230###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)");return 3;
	}
	if (UET_mark("lis===366###sois===10797###eois===10833###lif===5###soif===255###eoif===291###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)") && (((UET_mark("lis===366###sois===10797###eois===10807###lif===5###soif===255###eoif===265###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)")&&i + j <= k)	||(UET_mark("lis===366###sois===10811###eois===10820###lif===5###soif===269###eoif===278###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)")&&j + k < i))	||(UET_mark("lis===366###sois===10824###eois===10833###lif===5###soif===282###eoif===291###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)")&&k + i < j))) {
		UET_mark("lis===367###sois===10893###eois===10902###lif===6###soif===351###eoif===360###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)");return 3;
	}
	if (UET_mark("lis===368###sois===10927###eois===10932###lif===7###soif===385###eoif===390###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)") && (UET_mark("lis===368###sois===10927###eois===10932###lif===7###soif===385###eoif===390###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)")&&i > j)) {
		UET_mark("lis===368###sois===10934###eois===10954###lif===7###soif===392###eoif===412###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)");trityp = trityp + 1;
	}
	if (UET_mark("lis===369###sois===11009###eois===11015###lif===8###soif===467###eoif===473###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)") && (UET_mark("lis===369###sois===11009###eois===11015###lif===8###soif===467###eoif===473###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)")&&i == k)) {
		UET_mark("lis===369###sois===11017###eois===11037###lif===8###soif===475###eoif===495###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)");trityp = trityp + 1;
	}
	if (UET_mark("lis===370###sois===11058###eois===11064###lif===9###soif===516###eoif===522###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)") && (UET_mark("lis===370###sois===11058###eois===11064###lif===9###soif===516###eoif===522###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)")&&j == k)) {
		UET_mark("lis===370###sois===11066###eois===11086###lif===9###soif===524###eoif===544###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)");trityp = trityp + 1;
	}
	if (UET_mark("lis===371###sois===11107###eois===11117###lif===10###soif===565###eoif===575###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)") && (UET_mark("lis===371###sois===11107###eois===11117###lif===10###soif===565###eoif===575###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)")&&trityp >=2)) {
		UET_mark("lis===372###sois===11141###eois===11152###lif===11###soif===599###eoif===610###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)");trityp = 2;
	}
	UET_mark("lis===373###sois===11174###eois===11188###lif===12###soif===632###eoif===646###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Tritype(double,double,double)");return trityp;
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
/** Instrumented function MathEnglishGrade(int,int) */
char MathEnglishGrade (int Math, int English){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)");UET_fCall++;
	if (UET_mark("lis===395###sois===11935###eois===11956###lif===4###soif===153###eoif===174###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)") && ((UET_mark("lis===395###sois===11935###eois===11942###lif===4###soif===153###eoif===160###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)")&&Math>50)	&&(UET_mark("lis===395###sois===11946###eois===11956###lif===4###soif===164###eoif===174###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)")&&English>60))) {
		if (UET_mark("lis===398###sois===12004###eois===12025###lif===7###soif===222###eoif===243###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)") && ((UET_mark("lis===398###sois===12004###eois===12011###lif===7###soif===222###eoif===229###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)")&&Math>80)	||(UET_mark("lis===398###sois===12015###eois===12025###lif===7###soif===233###eoif===243###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)")&&English>90))) {
			UET_mark("lis===400###sois===12036###eois===12047###lif===9###soif===254###eoif===265###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)");return 'B';
		}
		else {
			if (UET_mark("lis===404###sois===12074###eois===12093###lif===13###soif===292###eoif===311###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)") && (UET_mark("lis===404###sois===12074###eois===12093###lif===13###soif===292###eoif===311###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)")&&Math + English>=180)) {
				UET_mark("lis===406###sois===12106###eois===12117###lif===15###soif===324###eoif===335###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)");return 'A';
			}
			else {
				UET_mark("lis===410###sois===12147###eois===12158###lif===19###soif===365###eoif===376###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)");return 'C';
			}
		}
	}
	UET_mark("lis===414###sois===12182###eois===12193###lif===23###soif===400###eoif===411###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGrade(int,int)");return 'D';
}

/** Instrumented function MathEnglishGradechar(char,char) */
char MathEnglishGradechar (char Math, char English){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)");UET_fCall++;
	if (UET_mark("lis===421###sois===12359###eois===12380###lif===4###soif===159###eoif===180###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)") && ((UET_mark("lis===421###sois===12359###eois===12366###lif===4###soif===159###eoif===166###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)")&&Math>50)	&&(UET_mark("lis===421###sois===12370###eois===12380###lif===4###soif===170###eoif===180###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)")&&English>60))) {
		if (UET_mark("lis===424###sois===12428###eois===12449###lif===7###soif===228###eoif===249###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)") && ((UET_mark("lis===424###sois===12428###eois===12435###lif===7###soif===228###eoif===235###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)")&&Math>80)	||(UET_mark("lis===424###sois===12439###eois===12449###lif===7###soif===239###eoif===249###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)")&&English>90))) {
			UET_mark("lis===426###sois===12460###eois===12471###lif===9###soif===260###eoif===271###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)");return 'B';
		}
		else {
			if (UET_mark("lis===430###sois===12498###eois===12517###lif===13###soif===298###eoif===317###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)") && (UET_mark("lis===430###sois===12498###eois===12517###lif===13###soif===298###eoif===317###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)")&&Math + English>=180)) {
				UET_mark("lis===432###sois===12530###eois===12541###lif===15###soif===330###eoif===341###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)");return 'A';
			}
			else {
				UET_mark("lis===436###sois===12571###eois===12582###lif===19###soif===371###eoif===382###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)");return 'C';
			}
		}
	}
	UET_mark("lis===440###sois===12606###eois===12617###lif===23###soif===406###eoif===417###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradechar(char,char)");return 'D';
}

/** Instrumented function MathEnglishGradeshort(short,short) */
char MathEnglishGradeshort (short Math, short English){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)");UET_fCall++;
	if (UET_mark("lis===447###sois===12786###eois===12807###lif===4###soif===162###eoif===183###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)") && ((UET_mark("lis===447###sois===12786###eois===12793###lif===4###soif===162###eoif===169###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)")&&Math>50)	&&(UET_mark("lis===447###sois===12797###eois===12807###lif===4###soif===173###eoif===183###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)")&&English>60))) {
		if (UET_mark("lis===450###sois===12855###eois===12876###lif===7###soif===231###eoif===252###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)") && ((UET_mark("lis===450###sois===12855###eois===12862###lif===7###soif===231###eoif===238###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)")&&Math>80)	||(UET_mark("lis===450###sois===12866###eois===12876###lif===7###soif===242###eoif===252###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)")&&English>90))) {
			UET_mark("lis===452###sois===12887###eois===12898###lif===9###soif===263###eoif===274###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)");return 'B';
		}
		else {
			if (UET_mark("lis===456###sois===12925###eois===12944###lif===13###soif===301###eoif===320###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)") && (UET_mark("lis===456###sois===12925###eois===12944###lif===13###soif===301###eoif===320###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)")&&Math + English>=180)) {
				UET_mark("lis===458###sois===12957###eois===12968###lif===15###soif===333###eoif===344###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)");return 'A';
			}
			else {
				UET_mark("lis===462###sois===12998###eois===13009###lif===19###soif===374###eoif===385###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)");return 'C';
			}
		}
	}
	UET_mark("lis===466###sois===13033###eois===13044###lif===23###soif===409###eoif===420###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeshort(short,short)");return 'D';
}
/** Instrumented function MathEnglishGradeUnsignedShort(unsigned short,unsigned short) */
char MathEnglishGradeUnsignedShort (unsigned short Math, unsigned short English){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)");UET_fCall++;
	if (UET_mark("lis===472###sois===13237###eois===13258###lif===4###soif===188###eoif===209###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)") && ((UET_mark("lis===472###sois===13237###eois===13244###lif===4###soif===188###eoif===195###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)")&&Math>50)	&&(UET_mark("lis===472###sois===13248###eois===13258###lif===4###soif===199###eoif===209###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)")&&English>60))) {
		if (UET_mark("lis===475###sois===13306###eois===13327###lif===7###soif===257###eoif===278###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)") && ((UET_mark("lis===475###sois===13306###eois===13313###lif===7###soif===257###eoif===264###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)")&&Math>80)	||(UET_mark("lis===475###sois===13317###eois===13327###lif===7###soif===268###eoif===278###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)")&&English>90))) {
			UET_mark("lis===477###sois===13338###eois===13349###lif===9###soif===289###eoif===300###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)");return 'B';
		}
		else {
			if (UET_mark("lis===481###sois===13376###eois===13395###lif===13###soif===327###eoif===346###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)") && (UET_mark("lis===481###sois===13376###eois===13395###lif===13###soif===327###eoif===346###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)")&&Math + English>=180)) {
				UET_mark("lis===483###sois===13408###eois===13419###lif===15###soif===359###eoif===370###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)");return 'A';
			}
			else {
				UET_mark("lis===487###sois===13449###eois===13460###lif===19###soif===400###eoif===411###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)");return 'C';
			}
		}
	}
	UET_mark("lis===491###sois===13484###eois===13495###lif===23###soif===435###eoif===446###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradeUnsignedShort(unsigned short,unsigned short)");return 'D';
}
/** Instrumented function MathEnglishGradelong(long,long) */
char MathEnglishGradelong (long Math, long English){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)");UET_fCall++;
	if (UET_mark("lis===497###sois===13659###eois===13680###lif===4###soif===159###eoif===180###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)") && ((UET_mark("lis===497###sois===13659###eois===13666###lif===4###soif===159###eoif===166###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)")&&Math>50)	&&(UET_mark("lis===497###sois===13670###eois===13680###lif===4###soif===170###eoif===180###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)")&&English>60))) {
		if (UET_mark("lis===500###sois===13728###eois===13749###lif===7###soif===228###eoif===249###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)") && ((UET_mark("lis===500###sois===13728###eois===13735###lif===7###soif===228###eoif===235###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)")&&Math>80)	||(UET_mark("lis===500###sois===13739###eois===13749###lif===7###soif===239###eoif===249###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)")&&English>90))) {
			UET_mark("lis===502###sois===13760###eois===13771###lif===9###soif===260###eoif===271###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)");return 'B';
		}
		else {
			if (UET_mark("lis===506###sois===13798###eois===13817###lif===13###soif===298###eoif===317###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)") && (UET_mark("lis===506###sois===13798###eois===13817###lif===13###soif===298###eoif===317###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)")&&Math + English>=180)) {
				UET_mark("lis===508###sois===13830###eois===13841###lif===15###soif===330###eoif===341###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)");return 'A';
			}
			else {
				UET_mark("lis===512###sois===13871###eois===13882###lif===19###soif===371###eoif===382###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)");return 'C';
			}
		}
	}
	UET_mark("lis===516###sois===13906###eois===13917###lif===23###soif===406###eoif===417###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MathEnglishGradelong(long,long)");return 'D';
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
int isTriangle(int a, int b, int c){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\isTriangle(int,int,int)");UET_fCall++;
	if (UET_mark("lis===535###sois===14351###eois===14384###lif===1###soif===42###eoif===75###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\isTriangle(int,int,int)") && (((UET_mark("lis===535###sois===14352###eois===14358###lif===1###soif===43###eoif===49###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\isTriangle(int,int,int)")&&a<=b+c)	&&(UET_mark("lis===535###sois===14364###eois===14370###lif===1###soif===55###eoif===61###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\isTriangle(int,int,int)")&&b<=a+c))	&&(UET_mark("lis===535###sois===14376###eois===14383###lif===1###soif===67###eoif===74###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\isTriangle(int,int,int)")&&c < a+b))) {
		UET_mark("lis===536###sois===14390###eois===14399###lif===2###soif===81###eoif===90###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\isTriangle(int,int,int)");return 1;
	}
	else {
		UET_mark("lis===538###sois===14411###eois===14420###lif===4###soif===102###eoif===111###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\isTriangle(int,int,int)");return 0;
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
int leapYear(int year){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear(int)");UET_fCall++;
	if (UET_mark("lis===554###sois===15002###eois===15061###lif===1###soif===39###eoif===98###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear(int)") && (((UET_mark("lis===554###sois===15004###eois===15017###lif===1###soif===41###eoif===54###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear(int)")&&year % 4 == 0)	&&(UET_mark("lis===554###sois===15023###eois===15038###lif===1###soif===60###eoif===75###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear(int)")&&year % 100 != 0))	||(UET_mark("lis===554###sois===15045###eois===15060###lif===1###soif===82###eoif===97###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear(int)")&&year % 400 != 0))) {
		UET_mark("lis===555###sois===15067###eois===15076###lif===2###soif===104###eoif===113###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear(int)");return 1;
	}
	UET_mark("lis===557###sois===15115###eois===15124###lif===4###soif===152###eoif===161###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear(int)");return 0;
}
//****************************************************************************

/*
	input: x,minn,maxx
	Should return  probability density function of the continuous uniform distribution
	if maxx<minn or maxx=minn or x = maxx or x = minn the function may will return unexpected result
*/

/** Instrumented function PDF(int,int,int) */
float PDF(int x, int minn, int maxx){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\PDF(int,int,int)");UET_fCall++;
	if (UET_mark("lis===569###sois===15483###eois===15505###lif===1###soif===43###eoif===65###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\PDF(int,int,int)") && ((UET_mark("lis===569###sois===15483###eois===15492###lif===1###soif===43###eoif===52###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\PDF(int,int,int)")&&x <= minn)	||(UET_mark("lis===569###sois===15496###eois===15505###lif===1###soif===56###eoif===65###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\PDF(int,int,int)")&&x >= maxx))) {
		UET_mark("lis===570###sois===15511###eois===15520###lif===2###soif===71###eoif===80###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\PDF(int,int,int)");return 0;
	}
	UET_mark("lis===572###sois===15527###eois===15548###lif===4###soif===87###eoif===108###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\PDF(int,int,int)");return 1/(maxx-minn);
}

//****************************************************************************
/*
 	input: interger number a,b,c,d
 	output: float number
 Error:
 	Function may will return unexpected result if a>0
 */

/** Instrumented function foo(int,int,int,int) */
float foo(int a, int b, int c, int d){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)");UET_fCall++;
	UET_mark("lis===585###sois===15809###eois===15817###lif===2###soif===43###eoif===51###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)");float e;
	if (UET_mark("lis===586###sois===15823###eois===15829###lif===3###soif===57###eoif===63###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)") && (UET_mark("lis===586###sois===15823###eois===15829###lif===3###soif===57###eoif===63###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)")&&a >= 0)) {
		UET_mark("lis===586###sois===15831###eois===15840###lif===3###soif===65###eoif===74###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)");return 0;
	}
	UET_mark("lis===587###sois===15900###eois===15908###lif===4###soif===134###eoif===142###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)");int x=0;
	if (UET_mark("lis===588###sois===15914###eois===15928###lif===5###soif===148###eoif===162###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)") && ((UET_mark("lis===588###sois===15915###eois===15919###lif===5###soif===149###eoif===153###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)")&&a==b)	||(UET_mark("lis===588###sois===15923###eois===15927###lif===5###soif===157###eoif===161###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)")&&c==d))) {
		UET_mark("lis===589###sois===15933###eois===15937###lif===6###soif===167###eoif===171###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)");x=1;
	}
	UET_mark("lis===590###sois===15940###eois===15946###lif===7###soif===174###eoif===180###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)");e=1/x;
	UET_mark("lis===591###sois===15949###eois===15958###lif===8###soif===183###eoif===192###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\foo(int,int,int,int)");return e;
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
/** Instrumented function CDateToNumber(int,int,int) */
long CDateToNumber(int day, int month, int year){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");UET_fCall++;
	UET_mark("lis===608###sois===16391###eois===16446###lif===2###soif===53###eoif===108###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");int ngay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	UET_mark("lis===609###sois===16448###eois===16458###lif===3###soif===110###eoif===120###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");long s, i;
	UET_mark("lis===613###sois===16470###eois===16474###lif===7###soif===132###eoif===136###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");s=0;
	if (UET_mark("lis===614###sois===16480###eois===16491###lif===8###soif===142###eoif===153###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)") && (UET_mark("lis===614###sois===16480###eois===16491###lif===8###soif===142###eoif===153###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&year > 1900)) {
		UET_mark("lis===616###sois===16498###eois===16506###lif===10###soif===160###eoif===168###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");s=s+day;
		UET_mark("lis===617###sois===16514###eois===16518###lif===11###soif===176###eoif===180###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");for (i=0;UET_mark("lis===617###sois===16519###eois===16528###lif===11###soif===181###eoif===190###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)") && UET_mark("lis===617###sois===16519###eois===16528###lif===11###soif===181###eoif===190###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&i < month;({UET_mark("lis===617###sois===16530###eois===16533###lif===11###soif===192###eoif===195###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");i++;})) {
			UET_mark("lis===617###sois===16535###eois===16547###lif===11###soif===197###eoif===209###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");s=s+ngay[i];
		}
	}
	else {
		if (UET_mark("lis===620###sois===16563###eois===16572###lif===14###soif===225###eoif===234###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)") && (UET_mark("lis===620###sois===16563###eois===16572###lif===14###soif===225###eoif===234###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&year>1900)) {
			UET_mark("lis===622###sois===16581###eois===16589###lif===16###soif===243###eoif===251###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");s=s+day;
			UET_mark("lis===623###sois===16593###eois===16614###lif===17###soif===255###eoif===276###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");s= s+(year-1900)*365;
			UET_mark("lis===624###sois===16623###eois===16630###lif===18###soif===285###eoif===292###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");for (i=1900;UET_mark("lis===624###sois===16631###eois===16640###lif===18###soif===293###eoif===302###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)") && UET_mark("lis===624###sois===16631###eois===16640###lif===18###soif===293###eoif===302###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&i <= year;({UET_mark("lis===624###sois===16642###eois===16645###lif===18###soif===304###eoif===307###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");i++;})) {
				if (UET_mark("lis===625###sois===16655###eois===16689###lif===19###soif===317###eoif===351###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)") && (((UET_mark("lis===625###sois===16657###eois===16663###lif===19###soif===319###eoif===325###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&i%4==0)	&&(UET_mark("lis===625###sois===16667###eois===16675###lif===19###soif===329###eoif===337###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&i%100!=0))	||(UET_mark("lis===625###sois===16680###eois===16688###lif===19###soif===342###eoif===350###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&i%400==0))) {
					UET_mark("lis===625###sois===16691###eois===16697###lif===19###soif===353###eoif===359###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");s=s+1;
				}
			}
			UET_mark("lis===626###sois===16706###eois===16710###lif===20###soif===368###eoif===372###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");for (i=0;UET_mark("lis===626###sois===16711###eois===16720###lif===20###soif===373###eoif===382###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)") && UET_mark("lis===626###sois===16711###eois===16720###lif===20###soif===373###eoif===382###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&i < month;({UET_mark("lis===626###sois===16722###eois===16725###lif===20###soif===384###eoif===387###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");i++;})) {
				UET_mark("lis===628###sois===16736###eois===16749###lif===22###soif===398###eoif===411###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");s= s+ngay[i];
				if (UET_mark("lis===629###sois===16758###eois===16800###lif===23###soif===420###eoif===462###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)") && ((((UET_mark("lis===629###sois===16760###eois===16766###lif===23###soif===422###eoif===428###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&i%4==0)	&&(UET_mark("lis===629###sois===16770###eois===16778###lif===23###soif===432###eoif===440###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&i%100!=0))	||(UET_mark("lis===629###sois===16782###eois===16790###lif===23###soif===444###eoif===452###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&i%400==0))	&&(UET_mark("lis===629###sois===16795###eois===16799###lif===23###soif===457###eoif===461###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)")&&i==2))) {
					UET_mark("lis===629###sois===16802###eois===16808###lif===23###soif===464###eoif===470###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");s=s+1;
				}
			}
		}
	}
	UET_mark("lis===632###sois===16819###eois===16828###lif===26###soif===481###eoif===490###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CDateToNumber(int,int,int)");return s;
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
long CountSecond(int hour, int minute, int second){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)");UET_fCall++;
	UET_mark("lis===646###sois===17232###eois===17239###lif===2###soif===55###eoif===62###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)");long s;
	UET_mark("lis===649###sois===17422###eois===17427###lif===5###soif===245###eoif===250###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)");s=-1;
	if (UET_mark("lis===650###sois===17433###eois===17500###lif===6###soif===256###eoif===323###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)") && ((((((UET_mark("lis===650###sois===17433###eois===17439###lif===6###soif===256###eoif===262###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)")&&hour>0)	&&(UET_mark("lis===650###sois===17443###eois===17451###lif===6###soif===266###eoif===274###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)")&&minute>0))	&&(UET_mark("lis===650###sois===17455###eois===17463###lif===6###soif===278###eoif===286###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)")&&second>0))	&&(UET_mark("lis===650###sois===17467###eois===17474###lif===6###soif===290###eoif===297###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)")&&hour<24))	&&(UET_mark("lis===650###sois===17478###eois===17487###lif===6###soif===301###eoif===310###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)")&&minute<60))	&&(UET_mark("lis===650###sois===17491###eois===17500###lif===6###soif===314###eoif===323###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)")&&second<60))) {
		UET_mark("lis===651###sois===17504###eois===17533###lif===7###soif===327###eoif===356###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)");s=hour*3600+minute*60+second;
	}
	UET_mark("lis===652###sois===17535###eois===17544###lif===8###soif===358###eoif===367###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CountSecond(int,int,int)");return s;
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
int CheckValidDate(int day, int month, int year){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)");UET_fCall++;
	if (UET_mark("lis===666###sois===18134###eois===18195###lif===2###soif===159###eoif===220###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)") && ((((((UET_mark("lis===666###sois===18134###eois===18139###lif===2###soif===159###eoif===164###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&day>1)	&&(UET_mark("lis===666###sois===18143###eois===18150###lif===2###soif===168###eoif===175###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month>1))	&&(UET_mark("lis===666###sois===18154###eois===18160###lif===2###soif===179###eoif===185###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&year>1))	&&(UET_mark("lis===666###sois===18164###eois===18170###lif===2###soif===189###eoif===195###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&day<31))	&&(UET_mark("lis===666###sois===18174###eois===18182###lif===2###soif===199###eoif===207###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month<12))	&&(UET_mark("lis===666###sois===18186###eois===18195###lif===2###soif===211###eoif===220###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&year<2020))) {
		if (UET_mark("lis===667###sois===18205###eois===18302###lif===3###soif===230###eoif===327###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)") && ((((((((UET_mark("lis===667###sois===18206###eois===18214###lif===3###soif===231###eoif===239###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==1)	||(UET_mark("lis===667###sois===18218###eois===18226###lif===3###soif===243###eoif===251###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==3))	||(UET_mark("lis===667###sois===18230###eois===18238###lif===3###soif===255###eoif===263###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==5))	||(UET_mark("lis===667###sois===18242###eois===18250###lif===3###soif===267###eoif===275###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==7))	||(UET_mark("lis===667###sois===18254###eois===18262###lif===3###soif===279###eoif===287###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==8))	||(UET_mark("lis===667###sois===18266###eois===18275###lif===3###soif===291###eoif===300###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==10))	||(UET_mark("lis===667###sois===18279###eois===18288###lif===3###soif===304###eoif===313###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==12))	&&(UET_mark("lis===667###sois===18294###eois===18301###lif===3###soif===319###eoif===326###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&day<=31))) {
			UET_mark("lis===667###sois===18305###eois===18314###lif===3###soif===330###eoif===339###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)");return 1;
		}
		if (UET_mark("lis===668###sois===18322###eois===18381###lif===4###soif===347###eoif===406###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)") && (((((UET_mark("lis===668###sois===18323###eois===18331###lif===4###soif===348###eoif===356###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==4)	||(UET_mark("lis===668###sois===18335###eois===18343###lif===4###soif===360###eoif===368###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==6))	||(UET_mark("lis===668###sois===18347###eois===18355###lif===4###soif===372###eoif===380###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==9))	||(UET_mark("lis===668###sois===18358###eois===18367###lif===4###soif===383###eoif===392###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==11))	&&(UET_mark("lis===668###sois===18373###eois===18380###lif===4###soif===398###eoif===405###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&day<=30))) {
			UET_mark("lis===668###sois===18383###eois===18392###lif===4###soif===408###eoif===417###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)");return 1;
		}
		if (UET_mark("lis===669###sois===18400###eois===18422###lif===5###soif===425###eoif===447###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)") && ((UET_mark("lis===669###sois===18401###eois===18409###lif===5###soif===426###eoif===434###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==2)	&&(UET_mark("lis===669###sois===18415###eois===18421###lif===5###soif===440###eoif===446###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&day<28))) {
			UET_mark("lis===669###sois===18425###eois===18434###lif===5###soif===450###eoif===459###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)");return 1;
		}
		if (UET_mark("lis===670###sois===18455###eois===18510###lif===6###soif===480###eoif===535###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)") && ((((UET_mark("lis===670###sois===18456###eois===18464###lif===6###soif===481###eoif===489###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&month==2)	&&(UET_mark("lis===670###sois===18470###eois===18477###lif===6###soif===495###eoif===502###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&day==29))	&&(UET_mark("lis===670###sois===18483###eois===18492###lif===6###soif===508###eoif===517###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&year%4==0))	&&(UET_mark("lis===670###sois===18496###eois===18509###lif===6###soif===521###eoif===534###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)")&&year%400 != 0))) {
			UET_mark("lis===670###sois===18512###eois===18521###lif===6###soif===537###eoif===546###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)");return 1;
		}
	}
	UET_mark("lis===672###sois===18526###eois===18535###lif===8###soif===551###eoif===560###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidDate(int,int,int)");return 0;
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
int CheckValidTime(int hour, int minute, int second){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidTime(int,int,int)");UET_fCall++;
	if (UET_mark("lis===685###sois===19070###eois===19137###lif===2###soif===61###eoif===128###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidTime(int,int,int)") && ((((((UET_mark("lis===685###sois===19070###eois===19076###lif===2###soif===61###eoif===67###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidTime(int,int,int)")&&hour>0)	&&(UET_mark("lis===685###sois===19080###eois===19087###lif===2###soif===71###eoif===78###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidTime(int,int,int)")&&hour<23))	&&(UET_mark("lis===685###sois===19091###eois===19099###lif===2###soif===82###eoif===90###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidTime(int,int,int)")&&minute>0))	&&(UET_mark("lis===685###sois===19103###eois===19112###lif===2###soif===94###eoif===103###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidTime(int,int,int)")&&minute<59))	&&(UET_mark("lis===685###sois===19116###eois===19124###lif===2###soif===107###eoif===115###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidTime(int,int,int)")&&second>0))	&&(UET_mark("lis===685###sois===19128###eois===19137###lif===2###soif===119###eoif===128###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidTime(int,int,int)")&&second<59))) {
		UET_mark("lis===685###sois===19139###eois===19148###lif===2###soif===130###eoif===139###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidTime(int,int,int)");return 1;
	}
	UET_mark("lis===686###sois===19150###eois===19159###lif===3###soif===141###eoif===150###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\CheckValidTime(int,int,int)");return 0;
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
int divisionTest(int a, int b){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\divisionTest(int,int)");UET_fCall++;
	UET_mark("lis===701###sois===19590###eois===19602###lif===1###soif===34###eoif===46###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\divisionTest(int,int)");int x = a+b;
	UET_mark("lis===702###sois===19605###eois===19619###lif===2###soif===49###eoif===63###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\divisionTest(int,int)");int y = x +10;
	if (UET_mark("lis===703###sois===19625###eois===19629###lif===3###soif===69###eoif===73###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\divisionTest(int,int)") && (UET_mark("lis===703###sois===19625###eois===19629###lif===3###soif===69###eoif===73###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\divisionTest(int,int)")&&x<10)) {
		UET_mark("lis===704###sois===19635###eois===19646###lif===4###soif===79###eoif===90###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\divisionTest(int,int)");return 1/x;
	}
	else {
		UET_mark("lis===706###sois===19658###eois===19669###lif===6###soif===102###eoif===113###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\divisionTest(int,int)");return 1/y;
	}
}
//****************************************************************************

/*
	input: month, day, year
	output: the next date

*/

/** Instrumented function NextDate(int,int,int) */
long NextDate(int year, int month, int day){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)");UET_fCall++;
	UET_mark("lis===718###sois===19866###eois===19921###lif===2###soif===48###eoif===103###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)");int ngay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	UET_mark("lis===719###sois===19923###eois===19933###lif===3###soif===105###eoif===115###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)");day=day+1;
	while (UET_mark("lis===720###sois===19942###eois===19950###lif===4###soif===124###eoif===132###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)") && (UET_mark("lis===720###sois===19942###eois===19950###lif===4###soif===124###eoif===132###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)")&&day>=365)) {
		UET_mark("lis===722###sois===19958###eois===19970###lif===6###soif===140###eoif===152###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)");year=year+1;
		if (UET_mark("lis===723###sois===19977###eois===20021###lif===7###soif===159###eoif===203###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)") && (((UET_mark("lis===723###sois===19978###eois===19987###lif===7###soif===160###eoif===169###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)")&&year%4==0)	&&(UET_mark("lis===723###sois===19991###eois===20002###lif===7###soif===173###eoif===184###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)")&&year%100!=0))	||(UET_mark("lis===723###sois===20008###eois===20020###lif===7###soif===190###eoif===202###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)")&&year %400==0))) {
			UET_mark("lis===724###sois===20026###eois===20038###lif===8###soif===208###eoif===220###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)");day=day-366;
		}
		else {
			UET_mark("lis===726###sois===20050###eois===20062###lif===10###soif===232###eoif===244###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)");day=day-365;
		}
	}
	while (UET_mark("lis===729###sois===20077###eois===20092###lif===13###soif===259###eoif===274###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)") && (UET_mark("lis===729###sois===20077###eois===20092###lif===13###soif===259###eoif===274###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)")&&day>ngay[month])) {
		UET_mark("lis===731###sois===20101###eois===20121###lif===15###soif===283###eoif===303###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)");day=day-ngay[month];
		UET_mark("lis===732###sois===20124###eois===20138###lif===16###soif===306###eoif===320###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)");month=month+1;
		while (UET_mark("lis===733###sois===20148###eois===20157###lif===17###soif===330###eoif===339###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)") && (UET_mark("lis===733###sois===20148###eois===20157###lif===17###soif===330###eoif===339###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)")&&month>=12)) {
			UET_mark("lis===735###sois===20165###eois===20177###lif===19###soif===347###eoif===359###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)");year=year+1;
			UET_mark("lis===736###sois===20180###eois===20195###lif===20###soif===362###eoif===377###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)");month=month%12;
		}
	}
	UET_mark("lis===739###sois===20205###eois===20214###lif===23###soif===387###eoif===396###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\NextDate(int,int,int)");return 0;
}

//****************************************************************************

/*
	input: x, y
	This function is created for loop testing.
*/
/** Instrumented function simpleWhileTest(int,int) */
int simpleWhileTest(int x, int y){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\simpleWhileTest(int,int)");UET_fCall++;
	while (UET_mark("lis===749###sois===20413###eois===20418###lif===1###soif===43###eoif===48###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\simpleWhileTest(int,int)") && (UET_mark("lis===749###sois===20413###eois===20418###lif===1###soif===43###eoif===48###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\simpleWhileTest(int,int)")&&x < y)) {
		UET_mark("lis===750###sois===20424###eois===20429###lif===2###soif===54###eoif===59###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\simpleWhileTest(int,int)");x+=1;
	}
	UET_mark("lis===752###sois===20436###eois===20445###lif===4###soif===66###eoif===75###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\simpleWhileTest(int,int)");return 1;
}
//****************************************************************************

/*
	input: m, n
	This function is created for loop testing.
*/
/** Instrumented function twoForloop(int,int) */
int twoForloop(int m, int n){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)");UET_fCall++;
	UET_mark("lis===762###sois===20636###eois===20644###lif===2###soif===37###eoif===45###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)");int s=0;
	if (UET_mark("lis===763###sois===20654###eois===20664###lif===3###soif===55###eoif===65###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)") && ((UET_mark("lis===763###sois===20654###eois===20657###lif===3###soif===55###eoif===58###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)")&&m>0)	&&(UET_mark("lis===763###sois===20661###eois===20664###lif===3###soif===62###eoif===65###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)")&&n>0))) {
		UET_mark("lis===764###sois===20680###eois===20688###lif===4###soif===81###eoif===89###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)");for (int i=1;UET_mark("lis===764###sois===20689###eois===20693###lif===4###soif===90###eoif===94###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)") && UET_mark("lis===764###sois===20689###eois===20693###lif===4###soif===90###eoif===94###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)")&&i<=m;({UET_mark("lis===764###sois===20695###eois===20698###lif===4###soif===96###eoif===99###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)");i++;})) {
			UET_mark("lis===765###sois===20717###eois===20725###lif===5###soif===118###eoif===126###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)");for (int j=1;UET_mark("lis===765###sois===20726###eois===20730###lif===5###soif===127###eoif===131###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)") && UET_mark("lis===765###sois===20726###eois===20730###lif===5###soif===127###eoif===131###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)")&&j<=n;({UET_mark("lis===765###sois===20732###eois===20735###lif===5###soif===133###eoif===136###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)");j++;})) {
				UET_mark("lis===766###sois===20751###eois===20759###lif===6###soif===152###eoif===160###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)");s=s+i+j;
			}
		}
	}
	UET_mark("lis===767###sois===20765###eois===20774###lif===7###soif===166###eoif===175###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoForloop(int,int)");return s;
}

//****************************************************************************

/** Instrumented function selectionSort(int[],int) */
void selectionSort(int arr[], int n){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)");UET_fCall++;
	UET_mark("lis===774###sois===20908###eois===20932###lif===2###soif===45###eoif===69###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)");int i, j, min_idx, temp;
	UET_mark("lis===777###sois===20999###eois===21005###lif===5###soif===136###eoif===142###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)");for (i = 0;UET_mark("lis===777###sois===21006###eois===21013###lif===5###soif===143###eoif===150###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)") && UET_mark("lis===777###sois===21006###eois===21013###lif===5###soif===143###eoif===150###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)")&&i < n-1;({UET_mark("lis===777###sois===21015###eois===21018###lif===5###soif===152###eoif===155###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)");i++;})) {
		UET_mark("lis===780###sois===21091###eois===21103###lif===8###soif===228###eoif===240###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)");min_idx = i;
		UET_mark("lis===781###sois===21118###eois===21126###lif===9###soif===255###eoif===263###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)");for (j = i+1;UET_mark("lis===781###sois===21127###eois===21132###lif===9###soif===264###eoif===269###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)") && UET_mark("lis===781###sois===21127###eois===21132###lif===9###soif===264###eoif===269###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)")&&j < n;({UET_mark("lis===781###sois===21134###eois===21137###lif===9###soif===271###eoif===274###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)");j++;})) {
			if (UET_mark("lis===782###sois===21152###eois===21173###lif===10###soif===289###eoif===310###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)") && (UET_mark("lis===782###sois===21152###eois===21173###lif===10###soif===289###eoif===310###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)")&&arr[j] < arr[min_idx])) {
				UET_mark("lis===783###sois===21188###eois===21200###lif===11###soif===325###eoif===337###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)");min_idx = j;
			}
		}
		UET_mark("lis===786###sois===21278###eois===21296###lif===14###soif===415###eoif===433###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)");temp=arr[min_idx];
		UET_mark("lis===787###sois===21306###eois===21326###lif===15###soif===443###eoif===463###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)");arr[min_idx]=arr[i];
		UET_mark("lis===788###sois===21336###eois===21348###lif===16###soif===473###eoif===485###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\selectionSort(int[],int)");arr[i]=temp;
	}
}

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
int tritype0(int i, int j, int k){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");UET_fCall++;
	UET_mark("lis===806###sois===21876###eois===21890###lif===1###soif===38###eoif===52###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");int type_code;
	if (UET_mark("lis===807###sois===21898###eois===21930###lif===2###soif===60###eoif===92###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)") && (((UET_mark("lis===807###sois===21899###eois===21905###lif===2###soif===61###eoif===67###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&i == 0)	||(UET_mark("lis===807###sois===21911###eois===21917###lif===2###soif===73###eoif===79###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&j == 0))	||(UET_mark("lis===807###sois===21923###eois===21929###lif===2###soif===85###eoif===91###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&k == 0))) {
		UET_mark("lis===807###sois===21932###eois===21946###lif===2###soif===94###eoif===108###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = 4;
	}
	else {
		UET_mark("lis===809###sois===21980###eois===21994###lif===4###soif===142###eoif===156###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = 0;
		if (UET_mark("lis===810###sois===22004###eois===22010###lif===5###soif===166###eoif===172###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)") && (UET_mark("lis===810###sois===22004###eois===22010###lif===5###soif===166###eoif===172###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&i == j)) {
			UET_mark("lis===810###sois===22012###eois===22038###lif===5###soif===174###eoif===200###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = type_code + 1;
		}
		if (UET_mark("lis===811###sois===22078###eois===22084###lif===6###soif===240###eoif===246###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)") && (UET_mark("lis===811###sois===22078###eois===22084###lif===6###soif===240###eoif===246###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&i == k)) {
			UET_mark("lis===811###sois===22086###eois===22112###lif===6###soif===248###eoif===274###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = type_code + 2;
		}
		if (UET_mark("lis===812###sois===22152###eois===22158###lif===7###soif===314###eoif===320###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)") && (UET_mark("lis===812###sois===22152###eois===22158###lif===7###soif===314###eoif===320###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&j == k)) {
			UET_mark("lis===812###sois===22160###eois===22186###lif===7###soif===322###eoif===348###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = type_code + 3;
		}
		if (UET_mark("lis===813###sois===22226###eois===22240###lif===8###soif===388###eoif===402###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)") && (UET_mark("lis===813###sois===22226###eois===22240###lif===8###soif===388###eoif===402###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&type_code == 0)) {
			if (UET_mark("lis===814###sois===22302###eois===22340###lif===9###soif===464###eoif===502###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)") && (((UET_mark("lis===814###sois===22303###eois===22311###lif===9###soif===465###eoif===473###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&i+j <= k)	||(UET_mark("lis===814###sois===22317###eois===22325###lif===9###soif===479###eoif===487###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&j+k <= i))	||(UET_mark("lis===814###sois===22331###eois===22339###lif===9###soif===493###eoif===501###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&i+k <= j))) {
				UET_mark("lis===815###sois===22367###eois===22381###lif===10###soif===529###eoif===543###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = 4;
			}
			else {
				UET_mark("lis===817###sois===22396###eois===22410###lif===12###soif===558###eoif===572###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = 1;
			}
		}
		else {
			if (UET_mark("lis===819###sois===22434###eois===22447###lif===14###soif===596###eoif===609###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)") && (UET_mark("lis===819###sois===22434###eois===22447###lif===14###soif===596###eoif===609###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&type_code > 3)) {
				UET_mark("lis===819###sois===22449###eois===22463###lif===14###soif===611###eoif===625###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = 3;
			}
			else {
				if (UET_mark("lis===820###sois===22508###eois===22537###lif===15###soif===670###eoif===699###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)") && ((UET_mark("lis===820###sois===22509###eois===22523###lif===15###soif===671###eoif===685###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&type_code == 1)	&&(UET_mark("lis===820###sois===22529###eois===22536###lif===15###soif===691###eoif===698###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&i+j > k))) {
					UET_mark("lis===820###sois===22539###eois===22553###lif===15###soif===701###eoif===715###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = 2;
				}
				else {
					if (UET_mark("lis===821###sois===22582###eois===22611###lif===16###soif===744###eoif===773###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)") && ((UET_mark("lis===821###sois===22583###eois===22597###lif===16###soif===745###eoif===759###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&type_code == 2)	&&(UET_mark("lis===821###sois===22603###eois===22610###lif===16###soif===765###eoif===772###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&i+k > j))) {
						UET_mark("lis===821###sois===22613###eois===22627###lif===16###soif===775###eoif===789###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = 2;
					}
					else {
						if (UET_mark("lis===822###sois===22656###eois===22685###lif===17###soif===818###eoif===847###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)") && ((UET_mark("lis===822###sois===22657###eois===22671###lif===17###soif===819###eoif===833###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&type_code == 3)	&&(UET_mark("lis===822###sois===22677###eois===22684###lif===17###soif===839###eoif===846###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)")&&j+k > i))) {
							UET_mark("lis===822###sois===22687###eois===22701###lif===17###soif===849###eoif===863###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = 2;
						}
						else {
							UET_mark("lis===823###sois===22726###eois===22740###lif===18###soif===888###eoif===902###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");type_code = 4;
						}
					}
				}
			}
		}
	}
	UET_mark("lis===825###sois===22751###eois===22768###lif===20###soif===913###eoif===930###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\tritype0(int,int,int)");return type_code;
}

 /** Instrumented function leapYear1(int) */
int leapYear1(int year){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear1(int)");UET_fCall++;
	if (UET_mark("lis===829###sois===22809###eois===22822###lif===1###soif===33###eoif===46###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear1(int)") && (UET_mark("lis===829###sois===22809###eois===22822###lif===1###soif===33###eoif===46###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear1(int)")&&year % 4 == 0)) {
		if (UET_mark("lis===830###sois===22839###eois===22854###lif===2###soif===63###eoif===78###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear1(int)") && (UET_mark("lis===830###sois===22839###eois===22854###lif===2###soif===63###eoif===78###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear1(int)")&&year % 100 == 0)) {
			if (UET_mark("lis===831###sois===22875###eois===22890###lif===3###soif===99###eoif===114###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear1(int)") && (UET_mark("lis===831###sois===22875###eois===22890###lif===3###soif===99###eoif===114###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear1(int)")&&year % 400 == 0)) {
				UET_mark("lis===832###sois===22909###eois===22918###lif===4###soif===133###eoif===142###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear1(int)");return 1;
			}
			else {
				UET_mark("lis===834###sois===22966###eois===22975###lif===6###soif===190###eoif===199###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear1(int)");return 0;
			}
		}
		else {
			UET_mark("lis===837###sois===23030###eois===23039###lif===9###soif===254###eoif===263###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear1(int)");return 1;
		}
	}
	else {
		UET_mark("lis===840###sois===23066###eois===23075###lif===12###soif===290###eoif===299###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\leapYear1(int)");return 0;
	}
}


//http://pathcrawler-online.com:8080/#
//ExampleUnit
  /** Instrumented function uninit_var(int[3],int[3]) */
int uninit_var(int a[3], int b[3]){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])");UET_fCall++;
	UET_mark("lis===847###sois===23181###eois===23190###lif===1###soif===40###eoif===49###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])");int i, k;
	UET_mark("lis===848###sois===23198###eois===23202###lif===2###soif===57###eoif===61###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])");for (i=0;UET_mark("lis===848###sois===23203###eois===23206###lif===2###soif===62###eoif===65###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])") && UET_mark("lis===848###sois===23203###eois===23206###lif===2###soif===62###eoif===65###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])")&&i<2;({UET_mark("lis===848###sois===23208###eois===23211###lif===2###soif===67###eoif===70###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])");i++;})) {
		if (UET_mark("lis===849###sois===23239###eois===23248###lif===3###soif===98###eoif===107###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])") && (UET_mark("lis===849###sois===23239###eois===23248###lif===3###soif===98###eoif===107###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])")&&a[i] == 0)) {
			UET_mark("lis===850###sois===23269###eois===23278###lif===4###soif===128###eoif===137###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])");return 0;
		}
		if (UET_mark("lis===851###sois===23289###eois===23303###lif===5###soif===148###eoif===162###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])") && (UET_mark("lis===851###sois===23289###eois===23303###lif===5###soif===148###eoif===162###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])")&&a[i] != a[i+1])) {
			UET_mark("lis===852###sois===23326###eois===23332###lif===6###soif===185###eoif===191###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])");k = 0;
		}
		else {
			if (UET_mark("lis===854###sois===23357###eois===23363###lif===8###soif===216###eoif===222###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])") && (UET_mark("lis===854###sois===23357###eois===23363###lif===8###soif===216###eoif===222###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])")&&k == 2)) {
				UET_mark("lis===855###sois===23387###eois===23396###lif===9###soif===246###eoif===255###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])");return 0;
			}
		}
		while (UET_mark("lis===856###sois===23410###eois===23422###lif===10###soif===269###eoif===281###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])") && (UET_mark("lis===856###sois===23410###eois===23422###lif===10###soif===269###eoif===281###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])")&&b[k] != a[i])) {
			if (UET_mark("lis===857###sois===23450###eois===23456###lif===11###soif===309###eoif===315###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])") && (UET_mark("lis===857###sois===23450###eois===23456###lif===11###soif===309###eoif===315###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])")&&k == 2)) {
				UET_mark("lis===858###sois===23481###eois===23490###lif===12###soif===340###eoif===349###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])");return 0;
			}
			else {
				UET_mark("lis===860###sois===23520###eois===23524###lif===14###soif===379###eoif===383###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])");k++;
			}
		}
	}
	UET_mark("lis===862###sois===23537###eois===23546###lif===16###soif===396###eoif===405###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\uninit_var(int[3],int[3])");return 1;
}

//Sach thay Hung
/** Instrumented function average(double[],double,double,int&,int&) */
double average(double value[], double min, double max, int& tcnt, int& vcnt){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)");UET_fCall++;
	UET_mark("lis===868###sois===23660###eois===23673###lif===2###soif===89###eoif===102###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)");double sum=0;
	UET_mark("lis===869###sois===23676###eois===23684###lif===3###soif===105###eoif===113###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)");int i=0;
	UET_mark("lis===870###sois===23687###eois===23699###lif===4###soif===116###eoif===128###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)");tcnt=vcnt=0;
	while (UET_mark("lis===871###sois===23708###eois===23734###lif===5###soif===137###eoif===163###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)") && ((UET_mark("lis===871###sois===23708###eois===23722###lif===5###soif===137###eoif===151###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)")&&value[i]!=-999)	&&(UET_mark("lis===871###sois===23726###eois===23734###lif===5###soif===155###eoif===163###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)")&&tcnt<100))) {
		UET_mark("lis===873###sois===23743###eois===23750###lif===7###soif===172###eoif===179###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)");tcnt++;
		if (UET_mark("lis===874###sois===23757###eois===23786###lif===8###soif===186###eoif===215###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)") && ((UET_mark("lis===874###sois===23757###eois===23770###lif===8###soif===186###eoif===199###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)")&&min<=value[i])	&&(UET_mark("lis===874###sois===23773###eois===23786###lif===8###soif===202###eoif===215###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)")&&value[i]<=max))) {
			UET_mark("lis===876###sois===23797###eois===23811###lif===10###soif===226###eoif===240###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)");sum+=value[i];
			UET_mark("lis===877###sois===23816###eois===23823###lif===11###soif===245###eoif===252###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)");vcnt++;
		}
		UET_mark("lis===879###sois===23832###eois===23836###lif===13###soif===261###eoif===265###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)");i++;
	}
	if (UET_mark("lis===882###sois===23849###eois===23855###lif===16###soif===278###eoif===284###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)") && (UET_mark("lis===882###sois===23849###eois===23855###lif===16###soif===278###eoif===284###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)")&&vcnt>0)) {
		UET_mark("lis===883###sois===23860###eois===23876###lif===17###soif===289###eoif===305###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)");return sum/vcnt;
	}
	UET_mark("lis===884###sois===23880###eois===23892###lif===18###soif===309###eoif===321###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\average(double[],double,double,int&,int&)");return -999;
}

/** Instrumented function multiConditionTest(int) */
int multiConditionTest(int x){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");UET_fCall++;
	if (UET_mark("lis===888###sois===23935###eois===23938###lif===1###soif===36###eoif===39###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)") && (UET_mark("lis===888###sois===23935###eois===23938###lif===1###soif===36###eoif===39###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x<0)) {
		if (UET_mark("lis===889###sois===23947###eois===23952###lif===2###soif===48###eoif===53###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)") && (UET_mark("lis===889###sois===23947###eois===23952###lif===2###soif===48###eoif===53###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x>-10)) {
			if (UET_mark("lis===890###sois===23962###eois===23966###lif===3###soif===63###eoif===67###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)") && (UET_mark("lis===890###sois===23962###eois===23966###lif===3###soif===63###eoif===67###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x>-5)) {
				UET_mark("lis===891###sois===23974###eois===23983###lif===4###soif===75###eoif===84###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");return 1;
			}
			else {
				if (UET_mark("lis===893###sois===24002###eois===24016###lif===6###soif===103###eoif===117###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)") && ((UET_mark("lis===893###sois===24002###eois===24007###lif===6###soif===103###eoif===108###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x<=-5)	&&(UET_mark("lis===893###sois===24011###eois===24016###lif===6###soif===112###eoif===117###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x>=-8))) {
					UET_mark("lis===894###sois===24024###eois===24033###lif===7###soif===125###eoif===134###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");return 2;
				}
				else {
					UET_mark("lis===896###sois===24049###eois===24058###lif===9###soif===150###eoif===159###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");return 3;
				}
			}
		}
		else {
			UET_mark("lis===898###sois===24072###eois===24082###lif===11###soif===173###eoif===183###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");return -1;
		}
	}
	else {
		if (UET_mark("lis===900###sois===24097###eois===24107###lif===13###soif===198###eoif===208###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)") && ((UET_mark("lis===900###sois===24097###eois===24100###lif===13###soif===198###eoif===201###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x>0)	&&(UET_mark("lis===900###sois===24102###eois===24107###lif===13###soif===203###eoif===208###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x<100))) {
			if (UET_mark("lis===901###sois===24116###eois===24120###lif===14###soif===217###eoif===221###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)") && (UET_mark("lis===901###sois===24116###eois===24120###lif===14###soif===217###eoif===221###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x<50)) {
				if (UET_mark("lis===902###sois===24130###eois===24134###lif===15###soif===231###eoif===235###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)") && (UET_mark("lis===902###sois===24130###eois===24134###lif===15###soif===231###eoif===235###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x<20)) {
					UET_mark("lis===903###sois===24142###eois===24151###lif===16###soif===243###eoif===252###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");return 4;
				}
				else {
					UET_mark("lis===905###sois===24167###eois===24176###lif===18###soif===268###eoif===277###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");return 5;
				}
			}
			else {
				if (UET_mark("lis===907###sois===24193###eois===24204###lif===20###soif===294###eoif===305###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)") && ((UET_mark("lis===907###sois===24193###eois===24198###lif===20###soif===294###eoif===299###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x>=50)	&&(UET_mark("lis===907###sois===24200###eois===24204###lif===20###soif===301###eoif===305###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x<80))) {
					if (UET_mark("lis===908###sois===24214###eois===24219###lif===21###soif===315###eoif===320###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)") && (UET_mark("lis===908###sois===24214###eois===24219###lif===21###soif===315###eoif===320###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x==60)) {
						UET_mark("lis===908###sois===24221###eois===24230###lif===21###soif===322###eoif===331###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");return 6;
					}
					else {
						UET_mark("lis===909###sois===24240###eois===24249###lif===22###soif===341###eoif===350###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");return 7;
					}
				}
				else {
					UET_mark("lis===911###sois===24263###eois===24272###lif===24###soif===364###eoif===373###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");return 8;
				}
			}
		}
		else {
			if (UET_mark("lis===913###sois===24287###eois===24293###lif===26###soif===388###eoif===394###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)") && (UET_mark("lis===913###sois===24287###eois===24293###lif===26###soif===388###eoif===394###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)")&&x==101)) {
				UET_mark("lis===914###sois===24299###eois===24308###lif===27###soif===400###eoif===409###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");return 9;
			}
			else {
				UET_mark("lis===916###sois===24320###eois===24329###lif===29###soif===421###eoif===430###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\multiConditionTest(int)");return x;
			}
		}
	}
}

/** Instrumented function distanceTest(float) */
float distanceTest(float x){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)");UET_fCall++;
	if (UET_mark("lis===920###sois===24370###eois===24373###lif===1###soif===34###eoif===37###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)") && (UET_mark("lis===920###sois===24370###eois===24373###lif===1###soif===34###eoif===37###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)")&&x>1)) {
		if (UET_mark("lis===921###sois===24382###eois===24389###lif===2###soif===46###eoif===53###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)") && (UET_mark("lis===921###sois===24382###eois===24389###lif===2###soif===46###eoif===53###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)")&&x<1.001)) {
			if (UET_mark("lis===922###sois===24399###eois===24408###lif===3###soif===63###eoif===72###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)") && (UET_mark("lis===922###sois===24399###eois===24408###lif===3###soif===63###eoif===72###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)")&&x<1.00001)) {
				UET_mark("lis===923###sois===24416###eois===24425###lif===4###soif===80###eoif===89###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)");return 1;
			}
			else {
				UET_mark("lis===925###sois===24441###eois===24450###lif===6###soif===105###eoif===114###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)");return 2;
			}
		}
		else {
			UET_mark("lis===927###sois===24464###eois===24473###lif===8###soif===128###eoif===137###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)");return 3;
		}
	}
	else {
		if (UET_mark("lis===929###sois===24488###eois===24504###lif===10###soif===152###eoif===168###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)") && ((UET_mark("lis===929###sois===24488###eois===24492###lif===10###soif===152###eoif===156###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)")&&x<=1)	&&(UET_mark("lis===929###sois===24496###eois===24504###lif===10###soif===160###eoif===168###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)")&&x>=0.999))) {
			UET_mark("lis===930###sois===24510###eois===24519###lif===11###soif===174###eoif===183###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)");return 4;
		}
	}
	UET_mark("lis===932###sois===24526###eois===24535###lif===13###soif===190###eoif===199###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\distanceTest(float)");return 5;
}

/** Instrumented function smallIntervalTest(double) */
double smallIntervalTest(double x){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)");UET_fCall++;
	if (UET_mark("lis===936###sois===24583###eois===24588###lif===1###soif===41###eoif===46###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)") && (UET_mark("lis===936###sois===24583###eois===24588###lif===1###soif===41###eoif===46###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)")&&x>1.0)) {
		if (UET_mark("lis===937###sois===24597###eois===24620###lif===2###soif===55###eoif===78###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)") && ((UET_mark("lis===937###sois===24597###eois===24606###lif===2###soif===55###eoif===64###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)")&&x>2.00001)	&&(UET_mark("lis===937###sois===24610###eois===24620###lif===2###soif===68###eoif===78###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)")&&x<2.000015))) {
			UET_mark("lis===938###sois===24627###eois===24636###lif===3###soif===85###eoif===94###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)");return 1;
		}
		else {
			if (UET_mark("lis===940###sois===24653###eois===24676###lif===5###soif===111###eoif===134###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)") && ((UET_mark("lis===940###sois===24653###eois===24663###lif===5###soif===111###eoif===121###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)")&&x<=2.00001)	&&(UET_mark("lis===940###sois===24667###eois===24676###lif===5###soif===125###eoif===134###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)")&&x>=1.9999))) {
				UET_mark("lis===941###sois===24683###eois===24692###lif===6###soif===141###eoif===150###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)");return 2;
			}
			else {
				UET_mark("lis===943###sois===24706###eois===24715###lif===8###soif===164###eoif===173###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)");return 3;
			}
		}
	}
	UET_mark("lis===945###sois===24722###eois===24731###lif===10###soif===180###eoif===189###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\smallIntervalTest(double)");return 4;
}
/** Instrumented function mmin(int,int) */
int mmin(int a, int b){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\mmin(int,int)");UET_fCall++;
	UET_mark("lis===948###sois===24762###eois===24771###lif===1###soif===26###eoif===35###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\mmin(int,int)");return 1;
}
/** Instrumented function gcd3(int,int) */
int gcd3(int a, int b){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\gcd3(int,int)");UET_fCall++;
	UET_mark("lis===952###sois===24804###eois===24813###lif===2###soif===28###eoif===37###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\gcd3(int,int)");int temp;
	while (UET_mark("lis===954###sois===24825###eois===24830###lif===4###soif===49###eoif===54###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\gcd3(int,int)") && (UET_mark("lis===954###sois===24825###eois===24830###lif===4###soif===49###eoif===54###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\gcd3(int,int)")&&b > 0)) {
		UET_mark("lis===955###sois===24837###eois===24850###lif===5###soif===61###eoif===74###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\gcd3(int,int)");temp = a % b;
		UET_mark("lis===956###sois===24854###eois===24860###lif===6###soif===78###eoif===84###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\gcd3(int,int)");a = b;
		UET_mark("lis===957###sois===24864###eois===24873###lif===7###soif===88###eoif===97###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\gcd3(int,int)");b = temp;
	}
	UET_mark("lis===960###sois===24882###eois===24891###lif===10###soif===106###eoif===115###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\gcd3(int,int)");return a;
}

//D:\OneDrive - Cao Dang Su Pham Trung Uong\NCS\ava\data-test\tsdv\Sample_for_R1_4

//Da them 4 loi
//Loi tai age=4,14,15, distance=10
/** Instrumented function getFare1(int,int) */
int getFare1(int age, int distance){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)");UET_fCall++;
	UET_mark("lis===971###sois===25131###eois===25140###lif===4###soif===94###eoif===103###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)");int fare;
	if (UET_mark("lis===972###sois===25146###eois===25165###lif===5###soif===109###eoif===128###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)") && ((UET_mark("lis===972###sois===25146###eois===25153###lif===5###soif===109###eoif===116###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)")&&age > 4)	&&(UET_mark("lis===972###sois===25157###eois===25165###lif===5###soif===120###eoif===128###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)")&&age < 14))) {
		if (UET_mark("lis===974###sois===25213###eois===25227###lif===7###soif===176###eoif===190###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)") && (UET_mark("lis===974###sois===25213###eois===25227###lif===7###soif===176###eoif===190###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)")&&distance >= 10)) {
			UET_mark("lis===975###sois===25260###eois===25271###lif===8###soif===223###eoif===234###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)");fare = 130;
		}
		else {
			UET_mark("lis===976###sois===25280###eois===25291###lif===9###soif===243###eoif===254###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)");fare = 100;
		}
	}
	if (UET_mark("lis===978###sois===25301###eois===25310###lif===11###soif===264###eoif===273###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)") && (UET_mark("lis===978###sois===25301###eois===25310###lif===11###soif===264###eoif===273###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)")&&age >  15)) {
		if (UET_mark("lis===980###sois===25344###eois===25369###lif===13###soif===307###eoif===332###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)") && ((UET_mark("lis===980###sois===25344###eois===25356###lif===13###soif===307###eoif===319###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)")&&distance <10)	&&(UET_mark("lis===980###sois===25360###eois===25369###lif===13###soif===323###eoif===332###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)")&&age >= 60))) {
			UET_mark("lis===981###sois===25375###eois===25386###lif===14###soif===338###eoif===349###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)");fare = 160;
		}
		else {
			if (UET_mark("lis===982###sois===25398###eois===25423###lif===15###soif===361###eoif===386###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)") && ((UET_mark("lis===982###sois===25398###eois===25411###lif===15###soif===361###eoif===374###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)")&&distance > 10)	&&(UET_mark("lis===982###sois===25415###eois===25423###lif===15###soif===378###eoif===386###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)")&&age < 60))) {
				UET_mark("lis===983###sois===25429###eois===25440###lif===16###soif===392###eoif===403###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)");fare = 250;
			}
			else {
				UET_mark("lis===984###sois===25450###eois===25461###lif===17###soif===413###eoif===424###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)");fare = 200;
			}
		}
	}
	UET_mark("lis===986###sois===25468###eois===25480###lif===19###soif===431###eoif===443###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\getFare1(int,int)");return fare;
}

/** Instrumented function SimpleCondThanComplexCond(short,short,short) */
short SimpleCondThanComplexCond (short a, short b, short c){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)");UET_fCall++;
	if (UET_mark("lis===991###sois===25559###eois===25580###lif===2###soif===72###eoif===93###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)") && (((UET_mark("lis===991###sois===25560###eois===25563###lif===2###soif===73###eoif===76###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&a>0)	&&(UET_mark("lis===991###sois===25567###eois===25570###lif===2###soif===80###eoif===83###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&c>3))	&&(UET_mark("lis===991###sois===25574###eois===25579###lif===2###soif===87###eoif===92###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&b>-10))) {
		if (UET_mark("lis===993###sois===25602###eois===25605###lif===4###soif===115###eoif===118###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)") && (UET_mark("lis===993###sois===25602###eois===25605###lif===4###soif===115###eoif===118###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&b>0)) {
			if (UET_mark("lis===994###sois===25624###eois===25636###lif===5###soif===137###eoif===149###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)") && ((UET_mark("lis===994###sois===25625###eois===25628###lif===5###soif===138###eoif===141###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&a>b)	&&(UET_mark("lis===994###sois===25632###eois===25635###lif===5###soif===145###eoif===148###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&c>5))) {
				if (UET_mark("lis===995###sois===25658###eois===25661###lif===6###soif===171###eoif===174###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)") && (UET_mark("lis===995###sois===25658###eois===25661###lif===6###soif===171###eoif===174###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&a>c)) {
					if (UET_mark("lis===996###sois===25687###eois===25709###lif===7###soif===200###eoif===222###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)") && (((UET_mark("lis===996###sois===25688###eois===25692###lif===7###soif===201###eoif===205###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&a>10)	&&(UET_mark("lis===996###sois===25696###eois===25700###lif===7###soif===209###eoif===213###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&b>10))	&&(UET_mark("lis===996###sois===25704###eois===25708###lif===7###soif===217###eoif===221###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&c>10))) {
						if (UET_mark("lis===997###sois===25736###eois===25760###lif===8###soif===249###eoif===273###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)") && (((UET_mark("lis===997###sois===25737###eois===25742###lif===8###soif===250###eoif===255###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&a<=17)	&&(UET_mark("lis===997###sois===25746###eois===25751###lif===8###soif===259###eoif===264###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&c<=15))	&&(UET_mark("lis===997###sois===25755###eois===25759###lif===8###soif===268###eoif===272###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)")&&b<20))) {
							UET_mark("lis===998###sois===25784###eois===25793###lif===9###soif===297###eoif===306###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)");return 0;
						}
					}
				}
			}
		}
	}
	UET_mark("lis===1000###sois===25806###eois===25815###lif===11###soif===319###eoif===328###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\SimpleCondThanComplexCond(short,short,short)");return 1;
}

/** Instrumented function MoreComplexCond(long,long,long,long,long) */
long MoreComplexCond (long a, long b, long c, long d, long e){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)");UET_fCall++;
	if (UET_mark("lis===1005###sois===25896###eois===25940###lif===2###soif===74###eoif===118###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)") && ((((UET_mark("lis===1005###sois===25897###eois===25900###lif===2###soif===75###eoif===78###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&a>0)	&&(UET_mark("lis===1005###sois===25904###eois===25907###lif===2###soif===82###eoif===85###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&c>3))	&&(UET_mark("lis===1005###sois===25911###eois===25918###lif===2###soif===89###eoif===96###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&a+b>-10))	&&(UET_mark("lis===1005###sois===25921###eois===25940###lif===2###soif===99###eoif===118###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&(a+b+c>0)&(a+b-e<0)))) {
		if (UET_mark("lis===1006###sois===25957###eois===25969###lif===3###soif===135###eoif===147###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)") && ((UET_mark("lis===1006###sois===25958###eois===25961###lif===3###soif===136###eoif===139###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&b>2)	&&(UET_mark("lis===1006###sois===25965###eois===25968###lif===3###soif===143###eoif===146###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&b>c))) {
			if (UET_mark("lis===1007###sois===25988###eois===25993###lif===4###soif===166###eoif===171###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)") && (UET_mark("lis===1007###sois===25988###eois===25993###lif===4###soif===166###eoif===171###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&a+b>d)) {
				if (UET_mark("lis===1008###sois===26016###eois===26023###lif===5###soif===194###eoif===201###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)") && (UET_mark("lis===1008###sois===26016###eois===26023###lif===5###soif===194###eoif===201###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&c+d-e<0)) {
					if (UET_mark("lis===1009###sois===26050###eois===26053###lif===6###soif===228###eoif===231###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)") && (UET_mark("lis===1009###sois===26050###eois===26053###lif===6###soif===228###eoif===231###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&a>b)) {
						if (UET_mark("lis===1010###sois===26083###eois===26086###lif===7###soif===261###eoif===264###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)") && (UET_mark("lis===1010###sois===26083###eois===26086###lif===7###soif===261###eoif===264###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&a>c)) {
							if (UET_mark("lis===1011###sois===26120###eois===26160###lif===8###soif===298###eoif===338###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)") && ((((UET_mark("lis===1011###sois===26121###eois===26126###lif===8###soif===299###eoif===304###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&a-b>2)	&&(UET_mark("lis===1011###sois===26130###eois===26140###lif===8###soif===308###eoif===318###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&4*b-5*c==0))	&&(UET_mark("lis===1011###sois===26144###eois===26150###lif===8###soif===322###eoif===328###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&a-c==8))	&&(UET_mark("lis===1011###sois===26154###eois===26159###lif===8###soif===332###eoif===337###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&2*c>b))) {
								if (UET_mark("lis===1012###sois===26199###eois===26205###lif===9###soif===377###eoif===383###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)") && (UET_mark("lis===1012###sois===26199###eois===26205###lif===9###soif===377###eoif===383###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&a+d==e)) {
									if (UET_mark("lis===1013###sois===26248###eois===26266###lif===10###soif===426###eoif===444###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)") && ((UET_mark("lis===1013###sois===26249###eois===26254###lif===10###soif===427###eoif===432###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&2*b>a)	&&(UET_mark("lis===1013###sois===26260###eois===26265###lif===10###soif===438###eoif===443###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)")&&b+c>a))) {
										UET_mark("lis===1013###sois===26271###eois===26280###lif===10###soif===449###eoif===458###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)");return 0;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	UET_mark("lis===1014###sois===26284###eois===26293###lif===11###soif===462###eoif===471###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\MoreComplexCond(long,long,long,long,long)");return 1;
}


/** Instrumented function Average(double[],double,double,int&,int&) */
double Average(double value[], double min, double max, int& tcnt, int& vcnt){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)");UET_fCall++;
	UET_mark("lis===1020###sois===26391###eois===26404###lif===2###soif===89###eoif===102###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)");double sum=0;
	UET_mark("lis===1021###sois===26407###eois===26415###lif===3###soif===105###eoif===113###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)");int i=0;
	UET_mark("lis===1022###sois===26418###eois===26430###lif===4###soif===116###eoif===128###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)");tcnt=vcnt=0;
	while (UET_mark("lis===1023###sois===26439###eois===26465###lif===5###soif===137###eoif===163###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)") && ((UET_mark("lis===1023###sois===26439###eois===26453###lif===5###soif===137###eoif===151###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)")&&value[i]!=-999)	&&(UET_mark("lis===1023###sois===26457###eois===26465###lif===5###soif===155###eoif===163###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)")&&tcnt<100))) {
		UET_mark("lis===1025###sois===26474###eois===26481###lif===7###soif===172###eoif===179###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)");tcnt++;
		if (UET_mark("lis===1026###sois===26488###eois===26517###lif===8###soif===186###eoif===215###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)") && ((UET_mark("lis===1026###sois===26488###eois===26501###lif===8###soif===186###eoif===199###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)")&&min<=value[i])	&&(UET_mark("lis===1026###sois===26504###eois===26517###lif===8###soif===202###eoif===215###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)")&&value[i]<=max))) {
			UET_mark("lis===1028###sois===26528###eois===26542###lif===10###soif===226###eoif===240###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)");sum+=value[i];
			UET_mark("lis===1029###sois===26547###eois===26554###lif===11###soif===245###eoif===252###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)");vcnt++;
		}
		UET_mark("lis===1031###sois===26563###eois===26567###lif===13###soif===261###eoif===265###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)");i++;
	}
	if (UET_mark("lis===1034###sois===26579###eois===26585###lif===16###soif===277###eoif===283###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)") && (UET_mark("lis===1034###sois===26579###eois===26585###lif===16###soif===277###eoif===283###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)")&&vcnt>0)) {
		UET_mark("lis===1035###sois===26590###eois===26606###lif===17###soif===288###eoif===304###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)");return sum/vcnt;
	}
	UET_mark("lis===1036###sois===26610###eois===26622###lif===18###soif===308###eoif===320###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\Average(double[],double,double,int&,int&)");return -999;
}


/** Instrumented function twoWhileloop(int,int) */
int twoWhileloop(int m, int n){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)");UET_fCall++;
	UET_mark("lis===1042###sois===26670###eois===26678###lif===2###soif===39###eoif===47###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)");int s=0;
	UET_mark("lis===1042###sois===26679###eois===26688###lif===2###soif===48###eoif===57###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)");int i, j;
	if (UET_mark("lis===1043###sois===26698###eois===26708###lif===3###soif===67###eoif===77###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)") && ((UET_mark("lis===1043###sois===26698###eois===26701###lif===3###soif===67###eoif===70###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)")&&m>0)	&&(UET_mark("lis===1043###sois===26705###eois===26708###lif===3###soif===74###eoif===77###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)")&&n>0))) {
		UET_mark("lis===1045###sois===26730###eois===26734###lif===5###soif===99###eoif===103###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)");i=1;
		UET_mark("lis===1045###sois===26735###eois===26739###lif===5###soif===104###eoif===108###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)");j=1;
		while (UET_mark("lis===1046###sois===26756###eois===26760###lif===6###soif===125###eoif===129###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)") && (UET_mark("lis===1046###sois===26756###eois===26760###lif===6###soif===125###eoif===129###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)")&&i<=m)) {
			while (UET_mark("lis===1048###sois===26791###eois===26795###lif===8###soif===160###eoif===164###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)") && (UET_mark("lis===1048###sois===26791###eois===26795###lif===8###soif===160###eoif===164###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)")&&j<=n)) {
				UET_mark("lis===1050###sois===26840###eois===26848###lif===10###soif===209###eoif===217###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)");s=s+i+j;
				UET_mark("lis===1051###sois===26871###eois===26877###lif===11###soif===240###eoif===246###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)");j=j+1;
			}
			UET_mark("lis===1053###sois===26910###eois===26916###lif===13###soif===279###eoif===285###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)");i=i+1;
		}
	}
	UET_mark("lis===1056###sois===26940###eois===26949###lif===16###soif===309###eoif===318###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\twoWhileloop(int,int)");return s;
}

/** Instrumented function testBoundDouble(double) */
double testBoundDouble(double x){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundDouble(double)");UET_fCall++;
	if (UET_mark("lis===1061###sois===26997###eois===27011###lif===2###soif===41###eoif===55###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundDouble(double)") && ((UET_mark("lis===1061###sois===26997###eois===27002###lif===2###soif===41###eoif===46###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundDouble(double)")&&x>5.0)	&&(UET_mark("lis===1061###sois===27006###eois===27011###lif===2###soif===50###eoif===55###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundDouble(double)")&&x<1.0))) {
		UET_mark("lis===1061###sois===27013###eois===27024###lif===2###soif===57###eoif===68###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundDouble(double)");return 1.0;
	}
	UET_mark("lis===1062###sois===27027###eois===27036###lif===3###soif===71###eoif===80###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundDouble(double)");return 0;
}

/** Instrumented function testBoundFloat(float) */
float testBoundFloat(float x){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundFloat(float)");UET_fCall++;
	if (UET_mark("lis===1067###sois===27081###eois===27096###lif===2###soif===38###eoif===53###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundFloat(float)") && ((UET_mark("lis===1067###sois===27081###eois===27087###lif===2###soif===38###eoif===44###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundFloat(float)")&&x>15.0)	&&(UET_mark("lis===1067###sois===27091###eois===27096###lif===2###soif===48###eoif===53###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundFloat(float)")&&x<8.0))) {
		UET_mark("lis===1067###sois===27098###eois===27109###lif===2###soif===55###eoif===66###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundFloat(float)");return 1.0;
	}
	UET_mark("lis===1068###sois===27112###eois===27121###lif===3###soif===69###eoif===78###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test.cpp\\testBoundFloat(float)");return 0;
}


//
int UET_MAIN()
{
//	cout<<getFare(2, 50);
////	cout<<MathAndEnglishGrade(90, 90);
	return 0;
}





#endif

