/** Guard statement to avoid multiple declaration */
#ifndef UET_SRC_D__TOOL_VNU_DATA_TEST_SAMPLE_FOR_R1_2_TEST17082021_CPP
#define UET_SRC_D__TOOL_VNU_DATA_TEST_SAMPLE_FOR_R1_2_TEST17082021_CPP
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
int factorial(int x){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");UET_fCall++;
	if (UET_mark("lis===19###sois===396###eois===401###lif===2###soif===33###eoif===38###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)") && (UET_mark("lis===19###sois===396###eois===401###lif===2###soif===33###eoif===38###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)")&&x < 1)) {
		UET_mark("lis===20###sois===426###eois===435###lif===3###soif===63###eoif===72###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");return 1;
	}
	UET_mark("lis===21###sois===441###eois===453###lif===4###soif===78###eoif===90###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");int res = 2;
	UET_mark("lis===22###sois===464###eois===474###lif===5###soif===101###eoif===111###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");for (int i = 3;UET_mark("lis===22###sois===475###eois===481###lif===5###soif===112###eoif===118###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)") && UET_mark("lis===22###sois===475###eois===481###lif===5###soif===112###eoif===118###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)")&&i <= x;({UET_mark("lis===22###sois===483###eois===486###lif===5###soif===120###eoif===123###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");i++;})) {
		UET_mark("lis===23###sois===497###eois===511###lif===6###soif===134###eoif===148###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");res = res * i;
	}
	UET_mark("lis===24###sois===517###eois===528###lif===7###soif===154###eoif===165###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\factorial(int)");return res;
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
char grade(int averageGrade){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");UET_fCall++;
	if (UET_mark("lis===44###sois===1011###eois===1046###lif===1###soif===35###eoif===70###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)") && ((UET_mark("lis===44###sois===1011###eois===1026###lif===1###soif===35###eoif===50###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade>90)	&&(UET_mark("lis===44###sois===1030###eois===1046###lif===1###soif===54###eoif===70###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade<100))) {
		UET_mark("lis===45###sois===1051###eois===1062###lif===2###soif===75###eoif===86###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'A';
	}
	else {
		if (UET_mark("lis===46###sois===1073###eois===1107###lif===3###soif===97###eoif===131###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)") && ((UET_mark("lis===46###sois===1073###eois===1088###lif===3###soif===97###eoif===112###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade>80)	&&(UET_mark("lis===46###sois===1092###eois===1107###lif===3###soif===116###eoif===131###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade<90))) {
			UET_mark("lis===47###sois===1112###eois===1123###lif===4###soif===136###eoif===147###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'B';
		}
		else {
			if (UET_mark("lis===48###sois===1134###eois===1168###lif===5###soif===158###eoif===192###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)") && ((UET_mark("lis===48###sois===1134###eois===1149###lif===5###soif===158###eoif===173###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade>70)	&&(UET_mark("lis===48###sois===1153###eois===1168###lif===5###soif===177###eoif===192###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade<80))) {
				UET_mark("lis===49###sois===1173###eois===1184###lif===6###soif===197###eoif===208###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'C';
			}
			else {
				if (UET_mark("lis===50###sois===1195###eois===1229###lif===7###soif===219###eoif===253###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)") && ((UET_mark("lis===50###sois===1195###eois===1210###lif===7###soif===219###eoif===234###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade>60)	&&(UET_mark("lis===50###sois===1214###eois===1229###lif===7###soif===238###eoif===253###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade<70))) {
					UET_mark("lis===51###sois===1234###eois===1245###lif===8###soif===258###eoif===269###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'D';
				}
				else {
					if (UET_mark("lis===52###sois===1256###eois===1290###lif===9###soif===280###eoif===314###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)") && ((UET_mark("lis===52###sois===1256###eois===1270###lif===9###soif===280###eoif===294###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade>0)	&&(UET_mark("lis===52###sois===1274###eois===1290###lif===9###soif===298###eoif===314###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)")&&averageGrade <60))) {
						UET_mark("lis===53###sois===1295###eois===1306###lif===10###soif===319###eoif===330###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'F';
					}
				}
			}
		}
	}
	UET_mark("lis===54###sois===1309###eois===1320###lif===11###soif===333###eoif===344###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\grade(int)");return 'I';
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
int getFare(int age, int distance){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");UET_fCall++;
	UET_mark("lis===73###sois===1837###eois===1846###lif===2###soif===40###eoif===49###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");int fare;
	if (UET_mark("lis===75###sois===1882###eois===1901###lif===4###soif===85###eoif===104###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)") && ((UET_mark("lis===75###sois===1882###eois===1889###lif===4###soif===85###eoif===92###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&age > 4)	&&(UET_mark("lis===75###sois===1893###eois===1901###lif===4###soif===96###eoif===104###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&age < 14))) {
		if (UET_mark("lis===78###sois===1939###eois===1953###lif===7###soif===142###eoif===156###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)") && (UET_mark("lis===78###sois===1939###eois===1953###lif===7###soif===142###eoif===156###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&distance >= 10)) {
			UET_mark("lis===79###sois===1959###eois===1970###lif===8###soif===162###eoif===173###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");fare = 130;
		}
		else {
			UET_mark("lis===80###sois===1979###eois===1990###lif===9###soif===182###eoif===193###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");fare = 100;
		}
	}
	if (UET_mark("lis===83###sois===2018###eois===2026###lif===12###soif===221###eoif===229###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)") && (UET_mark("lis===83###sois===2018###eois===2026###lif===12###soif===221###eoif===229###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&age > 15)) {
		if (UET_mark("lis===85###sois===2038###eois===2063###lif===14###soif===241###eoif===266###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)") && ((UET_mark("lis===85###sois===2038###eois===2050###lif===14###soif===241###eoif===253###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&distance <10)	&&(UET_mark("lis===85###sois===2054###eois===2063###lif===14###soif===257###eoif===266###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&age >= 60))) {
			UET_mark("lis===86###sois===2069###eois===2080###lif===15###soif===272###eoif===283###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");fare = 160;
		}
		else {
			if (UET_mark("lis===87###sois===2092###eois===2117###lif===16###soif===295###eoif===320###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)") && ((UET_mark("lis===87###sois===2092###eois===2105###lif===16###soif===295###eoif===308###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&distance > 10)	&&(UET_mark("lis===87###sois===2109###eois===2117###lif===16###soif===312###eoif===320###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)")&&age < 60))) {
				UET_mark("lis===88###sois===2123###eois===2134###lif===17###soif===326###eoif===337###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");fare = 250;
			}
			else {
				UET_mark("lis===89###sois===2144###eois===2155###lif===18###soif===347###eoif===358###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");fare = 200;
			}
		}
	}
	UET_mark("lis===91###sois===2162###eois===2174###lif===20###soif===365###eoif===377###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare(int,int)");return fare;
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
int i4_power(int i, int j){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");UET_fCall++;
	UET_mark("lis===140###sois===3120###eois===3126###lif===26###soif===503###eoif===509###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");int k;
	UET_mark("lis===141###sois===3130###eois===3140###lif===27###soif===513###eoif===523###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");int value;
	if (UET_mark("lis===143###sois===3150###eois===3153###lif===29###soif===533###eoif===536###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (UET_mark("lis===143###sois===3150###eois===3153###lif===29###soif===533###eoif===536###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&j<0)) {
		if (UET_mark("lis===145###sois===3169###eois===3173###lif===31###soif===552###eoif===556###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (UET_mark("lis===145###sois===3169###eois===3173###lif===31###soif===552###eoif===556###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&i==1)) {
			UET_mark("lis===147###sois===3189###eois===3197###lif===33###soif===572###eoif===580###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value=1;
		}
		else {
			if (UET_mark("lis===149###sois===3219###eois===3223###lif===35###soif===602###eoif===606###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (UET_mark("lis===149###sois===3219###eois===3223###lif===35###soif===602###eoif===606###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&i==0)) {
				UET_mark("lis===155###sois===3395###eois===3405###lif===41###soif===778###eoif===788###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");return -1;
			}
			else {
				UET_mark("lis===159###sois===3437###eois===3445###lif===45###soif===820###eoif===828###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value=0;
			}
		}
	}
	else {
		if (UET_mark("lis===162###sois===3470###eois===3474###lif===48###soif===853###eoif===857###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (UET_mark("lis===162###sois===3470###eois===3474###lif===48###soif===853###eoif===857###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&j==0)) {
			if (UET_mark("lis===164###sois===3498###eois===3502###lif===50###soif===881###eoif===885###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (UET_mark("lis===164###sois===3498###eois===3502###lif===50###soif===881###eoif===885###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&i>=0)) {
				UET_mark("lis===170###sois===3687###eois===3697###lif===56###soif===1070###eoif===1080###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");return -1;
			}
			else {
				UET_mark("lis===174###sois===3729###eois===3737###lif===60###soif===1112###eoif===1120###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value=1;
			}
		}
		else {
			if (UET_mark("lis===177###sois===3762###eois===3766###lif===63###soif===1145###eoif===1149###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && (UET_mark("lis===177###sois===3762###eois===3766###lif===63###soif===1145###eoif===1149###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&j>=1)) {
				UET_mark("lis===179###sois===3796###eois===3804###lif===65###soif===1179###eoif===1187###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value=i;
			}
			else {
				UET_mark("lis===183###sois===3828###eois===3836###lif===69###soif===1211###eoif===1219###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value=1;
				UET_mark("lis===184###sois===3847###eois===3851###lif===70###soif===1230###eoif===1234###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");for (k=1;UET_mark("lis===184###sois===3852###eois===3856###lif===70###soif===1235###eoif===1239###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)") && UET_mark("lis===184###sois===3852###eois===3856###lif===70###soif===1235###eoif===1239###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)")&&k<=j;({UET_mark("lis===184###sois===3858###eois===3861###lif===70###soif===1241###eoif===1244###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");k++;})) {
					UET_mark("lis===186###sois===3877###eois===3893###lif===72###soif===1260###eoif===1276###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");value = value*i;
				}
			}
		}
	}
	UET_mark("lis===189###sois===3909###eois===3922###lif===75###soif===1292###eoif===1305###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\i4_power(int,int)");return value;
}

//****************************************************************************

//Tinh toan cung hoang dao (Zodiac) va du bao
/*
	intput : date, month
 	output: this function return zodiac given date
*/
/** Instrumented function calculateZodiac(int,int) */
int calculateZodiac(int date, int month){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");UET_fCall++;
	UET_mark("lis===200###sois===4185###eois===4191###lif===1###soif===46###eoif===52###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");int t;
	{
		if (UET_mark("lis===203###sois===4211###eois===4273###lif===4###soif===72###eoif===134###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===203###sois===4213###eois===4221###lif===4###soif===74###eoif===82###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==3)	&&(UET_mark("lis===203###sois===4225###eois===4233###lif===4###soif===86###eoif===94###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=21))	&&(UET_mark("lis===203###sois===4237###eois===4245###lif===4###soif===98###eoif===106###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===203###sois===4251###eois===4259###lif===4###soif===112###eoif===120###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==4)	&&(UET_mark("lis===203###sois===4263###eois===4271###lif===4###soif===124###eoif===132###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=19)))) {
			UET_mark("lis===206###sois===4296###eois===4342###lif===7###soif===157###eoif===203###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t\tYour Zodiac sign is ARIES";
			UET_mark("lis===207###sois===4353###eois===4460###lif===8###soif===214###eoif===321###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n 2012 would be a good year overall. You will experience a rise in financial luck and inflows";
			UET_mark("lis===208###sois===4471###eois===4520###lif===9###soif===332###eoif===381###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
			UET_mark("lis===209###sois===4531###eois===4537###lif===10###soif===392###eoif===398###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 1;
		}
		else {
			if (UET_mark("lis===212###sois===4565###eois===4627###lif===13###soif===426###eoif===488###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===212###sois===4567###eois===4575###lif===13###soif===428###eoif===436###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==4)	&&(UET_mark("lis===212###sois===4579###eois===4587###lif===13###soif===440###eoif===448###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=20))	&&(UET_mark("lis===212###sois===4591###eois===4599###lif===13###soif===452###eoif===460###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=30))	||((UET_mark("lis===212###sois===4605###eois===4613###lif===13###soif===466###eoif===474###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==5)	&&(UET_mark("lis===212###sois===4617###eois===4625###lif===13###soif===478###eoif===486###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=20)))) {
				UET_mark("lis===213###sois===4641###eois===4686###lif===14###soif===502###eoif===547###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is TAURUS";
				UET_mark("lis===214###sois===4697###eois===4824###lif===15###soif===558###eoif===685###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n A very eventful year. Career would be on a high growth trajectory and bring in major progress and achievements.";
				UET_mark("lis===215###sois===4835###eois===4884###lif===16###soif===696###eoif===745###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
				UET_mark("lis===216###sois===4895###eois===4901###lif===17###soif===756###eoif===762###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 2;
			}
			else {
				if (UET_mark("lis===219###sois===4929###eois===4991###lif===20###soif===790###eoif===852###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===219###sois===4931###eois===4939###lif===20###soif===792###eoif===800###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==5)	&&(UET_mark("lis===219###sois===4943###eois===4951###lif===20###soif===804###eoif===812###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=21))	&&(UET_mark("lis===219###sois===4955###eois===4963###lif===20###soif===816###eoif===824###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===219###sois===4969###eois===4977###lif===20###soif===830###eoif===838###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==6)	&&(UET_mark("lis===219###sois===4981###eois===4989###lif===20###soif===842###eoif===850###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=20)))) {
					UET_mark("lis===220###sois===5005###eois===5050###lif===21###soif===866###eoif===911###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is GEMINI";
					UET_mark("lis===221###sois===5061###eois===5210###lif===22###soif===922###eoif===1071###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA very positive year. Income & professional growth would be immense. You will find the ability to make some very profitable deals now.";
					UET_mark("lis===222###sois===5221###eois===5270###lif===23###soif===1082###eoif===1131###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
					UET_mark("lis===223###sois===5281###eois===5287###lif===24###soif===1142###eoif===1148###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 3;
				}
				else {
					if (UET_mark("lis===226###sois===5315###eois===5377###lif===27###soif===1176###eoif===1238###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===226###sois===5317###eois===5325###lif===27###soif===1178###eoif===1186###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==6)	&&(UET_mark("lis===226###sois===5329###eois===5337###lif===27###soif===1190###eoif===1198###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=21))	&&(UET_mark("lis===226###sois===5341###eois===5349###lif===27###soif===1202###eoif===1210###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=30))	||((UET_mark("lis===226###sois===5355###eois===5363###lif===27###soif===1216###eoif===1224###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==7)	&&(UET_mark("lis===226###sois===5367###eois===5375###lif===27###soif===1228###eoif===1236###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
						UET_mark("lis===227###sois===5391###eois===5436###lif===28###soif===1252###eoif===1297###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is CANCER";
						UET_mark("lis===228###sois===5447###eois===5594###lif===29###soif===1308###eoif===1455###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA very eventful year, although negative thoughts and unnecessary pessimism could spoil your spirit and bring in unnecessary tension.";
						UET_mark("lis===229###sois===5605###eois===5654###lif===30###soif===1466###eoif===1515###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
						UET_mark("lis===230###sois===5665###eois===5671###lif===31###soif===1526###eoif===1532###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 4;
					}
					else {
						if (UET_mark("lis===233###sois===5699###eois===5761###lif===34###soif===1560###eoif===1622###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===233###sois===5701###eois===5709###lif===34###soif===1562###eoif===1570###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==7)	&&(UET_mark("lis===233###sois===5713###eois===5721###lif===34###soif===1574###eoif===1582###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(UET_mark("lis===233###sois===5725###eois===5733###lif===34###soif===1586###eoif===1594###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===233###sois===5739###eois===5747###lif===34###soif===1600###eoif===1608###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==8)	&&(UET_mark("lis===233###sois===5751###eois===5759###lif===34###soif===1612###eoif===1620###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
							UET_mark("lis===234###sois===5775###eois===5817###lif===35###soif===1636###eoif===1678###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is LEO";
							UET_mark("lis===235###sois===5828###eois===5970###lif===36###soif===1689###eoif===1831###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nAn exceptional year again. You will see a rise in status and expansion in career this year too. Luck will favor you throughout.";
							UET_mark("lis===236###sois===5981###eois===6030###lif===37###soif===1842###eoif===1891###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
							UET_mark("lis===237###sois===6041###eois===6047###lif===38###soif===1902###eoif===1908###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 5;
						}
						else {
							if (UET_mark("lis===240###sois===6075###eois===6137###lif===41###soif===1936###eoif===1998###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===240###sois===6077###eois===6085###lif===41###soif===1938###eoif===1946###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==8)	&&(UET_mark("lis===240###sois===6089###eois===6097###lif===41###soif===1950###eoif===1958###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(UET_mark("lis===240###sois===6101###eois===6109###lif===41###soif===1962###eoif===1970###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===240###sois===6115###eois===6123###lif===41###soif===1976###eoif===1984###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==9)	&&(UET_mark("lis===240###sois===6127###eois===6135###lif===41###soif===1988###eoif===1996###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
								UET_mark("lis===241###sois===6151###eois===6195###lif===42###soif===2012###eoif===2056###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is VIRGO";
								UET_mark("lis===242###sois===6206###eois===6344###lif===43###soif===2067###eoif===2205###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA brilliant & positive year, where you will make things happen on your own strength, rather than seeking support of others.";
								UET_mark("lis===243###sois===6355###eois===6404###lif===44###soif===2216###eoif===2265###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
								UET_mark("lis===244###sois===6415###eois===6421###lif===45###soif===2276###eoif===2282###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 6;
							}
							else {
								if (UET_mark("lis===247###sois===6449###eois===6512###lif===48###soif===2310###eoif===2373###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===247###sois===6451###eois===6459###lif===48###soif===2312###eoif===2320###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==9)	&&(UET_mark("lis===247###sois===6463###eois===6471###lif===48###soif===2324###eoif===2332###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(UET_mark("lis===247###sois===6475###eois===6483###lif===48###soif===2336###eoif===2344###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=30))	||((UET_mark("lis===247###sois===6489###eois===6498###lif===48###soif===2350###eoif===2359###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==10)	&&(UET_mark("lis===247###sois===6502###eois===6510###lif===48###soif===2363###eoif===2371###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=22)))) {
									UET_mark("lis===248###sois===6526###eois===6570###lif===49###soif===2387###eoif===2431###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is LIBRA";
									UET_mark("lis===249###sois===6581###eois===6801###lif===50###soif===2442###eoif===2662###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA powerful phase will be in operation this month. You will find your role as defined by nature will change and all efforts and activities carried out by you will assume higher importance and effectiveness.";
									UET_mark("lis===250###sois===6812###eois===6861###lif===51###soif===2673###eoif===2722###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
									UET_mark("lis===251###sois===6872###eois===6878###lif===52###soif===2733###eoif===2739###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 7;
								}
								else {
									if (UET_mark("lis===254###sois===6906###eois===6970###lif===55###soif===2767###eoif===2831###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===254###sois===6908###eois===6917###lif===55###soif===2769###eoif===2778###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==10)	&&(UET_mark("lis===254###sois===6921###eois===6929###lif===55###soif===2782###eoif===2790###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=23))	&&(UET_mark("lis===254###sois===6933###eois===6941###lif===55###soif===2794###eoif===2802###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===254###sois===6947###eois===6956###lif===55###soif===2808###eoif===2817###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==11)	&&(UET_mark("lis===254###sois===6960###eois===6968###lif===55###soif===2821###eoif===2829###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=21)))) {
										UET_mark("lis===255###sois===6984###eois===7030###lif===56###soif===2845###eoif===2891###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is SCORPIO";
										UET_mark("lis===256###sois===7041###eois===7181###lif===57###soif===2902###eoif===3042###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nPositive period would continue, although you need to be careful that throwing good money after bad money is not a great idea.";
										UET_mark("lis===257###sois===7192###eois===7241###lif===58###soif===3053###eoif===3102###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
										UET_mark("lis===258###sois===7252###eois===7258###lif===59###soif===3113###eoif===3119###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 8;
									}
									else {
										if (UET_mark("lis===261###sois===7286###eois===7350###lif===62###soif===3147###eoif===3211###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===261###sois===7288###eois===7297###lif===62###soif===3149###eoif===3158###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==11)	&&(UET_mark("lis===261###sois===7301###eois===7309###lif===62###soif===3162###eoif===3170###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=22))	&&(UET_mark("lis===261###sois===7313###eois===7321###lif===62###soif===3174###eoif===3182###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===261###sois===7327###eois===7336###lif===62###soif===3188###eoif===3197###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==12)	&&(UET_mark("lis===261###sois===7340###eois===7348###lif===62###soif===3201###eoif===3209###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=21)))) {
											UET_mark("lis===262###sois===7364###eois===7414###lif===63###soif===3225###eoif===3275###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is SAGITTARIUS";
											UET_mark("lis===263###sois===7425###eois===7659###lif===64###soif===3286###eoif===3520###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n2012 brings in promise and progress. New ideas and cerebral approach to matters will bring in much progress this year. You will be at your creative best till May 2012 and thereafter dynamic activity will take you along.";
											UET_mark("lis===264###sois===7670###eois===7719###lif===65###soif===3531###eoif===3580###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
											UET_mark("lis===265###sois===7730###eois===7736###lif===66###soif===3591###eoif===3597###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 9;
										}
										else {
											if (UET_mark("lis===268###sois===7764###eois===7827###lif===69###soif===3625###eoif===3688###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===268###sois===7766###eois===7775###lif===69###soif===3627###eoif===3636###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==12)	&&(UET_mark("lis===268###sois===7779###eois===7787###lif===69###soif===3640###eoif===3648###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=22))	&&(UET_mark("lis===268###sois===7791###eois===7799###lif===69###soif===3652###eoif===3660###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=30))	||((UET_mark("lis===268###sois===7805###eois===7813###lif===69###soif===3666###eoif===3674###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==1)	&&(UET_mark("lis===268###sois===7817###eois===7825###lif===69###soif===3678###eoif===3686###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=19)))) {
												UET_mark("lis===269###sois===7841###eois===7889###lif===70###soif===3702###eoif===3750###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is CAPRICORN";
												UET_mark("lis===270###sois===7900###eois===8036###lif===71###soif===3761###eoif===3897###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA very positive year for you. You would be at your creative best and luck related peak in most of the works you get into.";
												UET_mark("lis===271###sois===8047###eois===8096###lif===72###soif===3908###eoif===3957###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
												UET_mark("lis===272###sois===8107###eois===8114###lif===73###soif===3968###eoif===3975###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 10;
											}
											else {
												if (UET_mark("lis===275###sois===8142###eois===8204###lif===76###soif===4003###eoif===4065###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===275###sois===8144###eois===8152###lif===76###soif===4005###eoif===4013###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==1)	&&(UET_mark("lis===275###sois===8156###eois===8164###lif===76###soif===4017###eoif===4025###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=20))	&&(UET_mark("lis===275###sois===8168###eois===8176###lif===76###soif===4029###eoif===4037###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=31))	||((UET_mark("lis===275###sois===8182###eois===8190###lif===76###soif===4043###eoif===4051###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==2)	&&(UET_mark("lis===275###sois===8194###eois===8202###lif===76###soif===4055###eoif===4063###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=18)))) {
													UET_mark("lis===276###sois===8218###eois===8265###lif===77###soif===4079###eoif===4126###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is AQUARIUS";
													UET_mark("lis===277###sois===8276###eois===8427###lif===78###soif===4137###eoif===4288###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nA much better year in comparison to 2010 & 2011. You will feel a surge in your luck, productivity and general sense of positive outlook.";
													UET_mark("lis===278###sois===8438###eois===8487###lif===79###soif===4299###eoif===4348###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
													UET_mark("lis===279###sois===8498###eois===8505###lif===80###soif===4359###eoif===4366###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 11;
												}
												else {
													if (UET_mark("lis===282###sois===8533###eois===8595###lif===83###soif===4394###eoif===4456###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)") && ((((UET_mark("lis===282###sois===8535###eois===8543###lif===83###soif===4396###eoif===4404###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==2)	&&(UET_mark("lis===282###sois===8547###eois===8555###lif===83###soif===4408###eoif===4416###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date>=19))	&&(UET_mark("lis===282###sois===8559###eois===8567###lif===83###soif===4420###eoif===4428###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=29))	||((UET_mark("lis===282###sois===8573###eois===8581###lif===83###soif===4434###eoif===4442###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&month==3)	&&(UET_mark("lis===282###sois===8585###eois===8593###lif===83###soif===4446###eoif===4454###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)")&&date<=20)))) {
														UET_mark("lis===283###sois===8609###eois===8654###lif===84###soif===4470###eoif===4515###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\tYour Zodiac sign is PISCES";
														UET_mark("lis===284###sois===8665###eois===8810###lif===85###soif===4526###eoif===4671###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\nSome amount of struggle and hurdles could come about in life this year. You will have a positive and gainful period till May 2012.";
														UET_mark("lis===285###sois===8821###eois===8870###lif===86###soif===4682###eoif===4731###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");cout << "\n\n\t\t Best of luck for Your Future ";
														UET_mark("lis===286###sois===8881###eois===8888###lif===87###soif===4742###eoif===4749###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = 12;
													}
													else {
														UET_mark("lis===290###sois===8924###eois===8931###lif===91###soif===4785###eoif===4792###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");t = -1;
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
	UET_mark("lis===295###sois===8955###eois===8964###lif===96###soif===4816###eoif===4825###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\calculateZodiac(int,int)");return t;
}

//****************************************************************************
//GCD(int, int)
/*
	intput : integer number m, n
 	output: return integer number correspond to GCD(m,n)
*/
/** Instrumented function GCD(int,int) */
int GCD(int m, int n){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");UET_fCall++;
	if (UET_mark("lis===306###sois===9194###eois===9197###lif===2###soif===31###eoif===34###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (UET_mark("lis===306###sois===9194###eois===9197###lif===2###soif===31###eoif===34###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&m<0)) {
		UET_mark("lis===306###sois===9199###eois===9204###lif===2###soif===36###eoif===41###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");m=-m;
	}
	if (UET_mark("lis===307###sois===9211###eois===9214###lif===3###soif===48###eoif===51###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (UET_mark("lis===307###sois===9211###eois===9214###lif===3###soif===48###eoif===51###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&n<0)) {
		UET_mark("lis===307###sois===9216###eois===9221###lif===3###soif===53###eoif===58###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");n=-n;
	}
	if (UET_mark("lis===308###sois===9228###eois===9232###lif===4###soif===65###eoif===69###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (UET_mark("lis===308###sois===9228###eois===9232###lif===4###soif===65###eoif===69###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&m==0)) {
		UET_mark("lis===308###sois===9234###eois===9243###lif===4###soif===71###eoif===80###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");return n;
	}
	if (UET_mark("lis===309###sois===9250###eois===9254###lif===5###soif===87###eoif===91###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (UET_mark("lis===309###sois===9250###eois===9254###lif===5###soif===87###eoif===91###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&n==0)) {
		UET_mark("lis===309###sois===9256###eois===9265###lif===5###soif===93###eoif===102###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");return m;
	}
	while (UET_mark("lis===310###sois===9275###eois===9279###lif===6###soif===112###eoif===116###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (UET_mark("lis===310###sois===9275###eois===9279###lif===6###soif===112###eoif===116###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&m!=n)) {
		if (UET_mark("lis===311###sois===9288###eois===9291###lif===7###soif===125###eoif===128###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)") && (UET_mark("lis===311###sois===9288###eois===9291###lif===7###soif===125###eoif===128###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)")&&m>n)) {
			UET_mark("lis===311###sois===9293###eois===9299###lif===7###soif===130###eoif===136###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");m=m-n;
		}
		else {
			UET_mark("lis===312###sois===9308###eois===9314###lif===8###soif===145###eoif===151###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");n=n-m;
		}
	}
	UET_mark("lis===313###sois===9317###eois===9326###lif===9###soif===154###eoif===163###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\GCD(int,int)");return m;
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
int Tritype(double i, double j, double k){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");UET_fCall++;
	UET_mark("lis===341###sois===10216###eois===10231###lif===2###soif===133###eoif===148###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");int trityp = 0;
	if (UET_mark("lis===342###sois===10255###eois===10284###lif===3###soif===172###eoif===201###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (((UET_mark("lis===342###sois===10255###eois===10262###lif===3###soif===172###eoif===179###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&i < 0.0)	||(UET_mark("lis===342###sois===10266###eois===10273###lif===3###soif===183###eoif===190###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&j < 0.0))	||(UET_mark("lis===342###sois===10277###eois===10284###lif===3###soif===194###eoif===201###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&k < 0.0))) {
		UET_mark("lis===343###sois===10304###eois===10313###lif===4###soif===221###eoif===230###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");return 3;
	}
	if (UET_mark("lis===344###sois===10338###eois===10374###lif===5###soif===255###eoif===291###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (((UET_mark("lis===344###sois===10338###eois===10348###lif===5###soif===255###eoif===265###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&i + j <= k)	||(UET_mark("lis===344###sois===10352###eois===10361###lif===5###soif===269###eoif===278###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&j + k < i))	||(UET_mark("lis===344###sois===10365###eois===10374###lif===5###soif===282###eoif===291###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&k + i < j))) {
		UET_mark("lis===345###sois===10434###eois===10443###lif===6###soif===351###eoif===360###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");return 3;
	}
	if (UET_mark("lis===346###sois===10468###eois===10473###lif===7###soif===385###eoif===390###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (UET_mark("lis===346###sois===10468###eois===10473###lif===7###soif===385###eoif===390###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&i > j)) {
		UET_mark("lis===346###sois===10475###eois===10495###lif===7###soif===392###eoif===412###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");trityp = trityp + 1;
	}
	if (UET_mark("lis===347###sois===10550###eois===10556###lif===8###soif===467###eoif===473###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (UET_mark("lis===347###sois===10550###eois===10556###lif===8###soif===467###eoif===473###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&i == k)) {
		UET_mark("lis===347###sois===10558###eois===10578###lif===8###soif===475###eoif===495###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");trityp = trityp + 1;
	}
	if (UET_mark("lis===348###sois===10599###eois===10605###lif===9###soif===516###eoif===522###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (UET_mark("lis===348###sois===10599###eois===10605###lif===9###soif===516###eoif===522###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&j == k)) {
		UET_mark("lis===348###sois===10607###eois===10627###lif===9###soif===524###eoif===544###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");trityp = trityp + 1;
	}
	if (UET_mark("lis===349###sois===10648###eois===10658###lif===10###soif===565###eoif===575###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)") && (UET_mark("lis===349###sois===10648###eois===10658###lif===10###soif===565###eoif===575###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)")&&trityp >=2)) {
		UET_mark("lis===350###sois===10682###eois===10693###lif===11###soif===599###eoif===610###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");trityp = 2;
	}
	UET_mark("lis===351###sois===10715###eois===10729###lif===12###soif===632###eoif===646###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Tritype(double,double,double)");return trityp;
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
char MathEnglishGrade (int Math, int English){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)");UET_fCall++;
	if (UET_mark("lis===373###sois===11476###eois===11497###lif===4###soif===153###eoif===174###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)") && ((UET_mark("lis===373###sois===11476###eois===11483###lif===4###soif===153###eoif===160###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)")&&Math>50)	&&(UET_mark("lis===373###sois===11487###eois===11497###lif===4###soif===164###eoif===174###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)")&&English>60))) {
		if (UET_mark("lis===376###sois===11545###eois===11566###lif===7###soif===222###eoif===243###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)") && ((UET_mark("lis===376###sois===11545###eois===11552###lif===7###soif===222###eoif===229###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)")&&Math>80)	||(UET_mark("lis===376###sois===11556###eois===11566###lif===7###soif===233###eoif===243###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)")&&English>90))) {
			UET_mark("lis===378###sois===11577###eois===11588###lif===9###soif===254###eoif===265###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)");return 'B';
		}
		else {
			if (UET_mark("lis===382###sois===11615###eois===11634###lif===13###soif===292###eoif===311###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)") && (UET_mark("lis===382###sois===11615###eois===11634###lif===13###soif===292###eoif===311###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)")&&Math + English>=180)) {
				UET_mark("lis===384###sois===11647###eois===11658###lif===15###soif===324###eoif===335###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)");return 'A';
			}
			else {
				UET_mark("lis===388###sois===11688###eois===11699###lif===19###soif===365###eoif===376###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)");return 'C';
			}
		}
	}
	UET_mark("lis===392###sois===11723###eois===11734###lif===23###soif===400###eoif===411###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MathEnglishGrade(int,int)");return 'D';
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
int isTriangle(int a, int b, int c){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)");UET_fCall++;
	if (UET_mark("lis===410###sois===12166###eois===12199###lif===1###soif===42###eoif===75###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)") && (((UET_mark("lis===410###sois===12167###eois===12173###lif===1###soif===43###eoif===49###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)")&&a<=b+c)	&&(UET_mark("lis===410###sois===12179###eois===12185###lif===1###soif===55###eoif===61###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)")&&b<=a+c))	&&(UET_mark("lis===410###sois===12191###eois===12198###lif===1###soif===67###eoif===74###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)")&&c < a+b))) {
		UET_mark("lis===411###sois===12205###eois===12214###lif===2###soif===81###eoif===90###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)");return 1;
	}
	else {
		UET_mark("lis===413###sois===12226###eois===12235###lif===4###soif===102###eoif===111###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\isTriangle(int,int,int)");return 0;
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
int leapYear(int year){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)");UET_fCall++;
	if (UET_mark("lis===429###sois===12817###eois===12876###lif===1###soif===39###eoif===98###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)") && (((UET_mark("lis===429###sois===12819###eois===12832###lif===1###soif===41###eoif===54###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)")&&year % 4 == 0)	&&(UET_mark("lis===429###sois===12838###eois===12853###lif===1###soif===60###eoif===75###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)")&&year % 100 != 0))	||(UET_mark("lis===429###sois===12860###eois===12875###lif===1###soif===82###eoif===97###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)")&&year % 400 != 0))) {
		UET_mark("lis===430###sois===12882###eois===12891###lif===2###soif===104###eoif===113###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)");return 1;
	}
	UET_mark("lis===432###sois===12930###eois===12939###lif===4###soif===152###eoif===161###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear(int)");return 0;
}
//****************************************************************************

/*
	input: x,minn,maxx
	Should return  probability density function of the continuous uniform distribution
	if maxx<minn or maxx=minn or x = maxx or x = minn the function may will return unexpected result
*/

/** Instrumented function PDF(int,int,int) */
float PDF(int x, int minn, int maxx){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)");UET_fCall++;
	if (UET_mark("lis===444###sois===13298###eois===13320###lif===1###soif===43###eoif===65###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)") && ((UET_mark("lis===444###sois===13298###eois===13307###lif===1###soif===43###eoif===52###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)")&&x <= minn)	||(UET_mark("lis===444###sois===13311###eois===13320###lif===1###soif===56###eoif===65###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)")&&x >= maxx))) {
		UET_mark("lis===445###sois===13326###eois===13335###lif===2###soif===71###eoif===80###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)");return 0;
	}
	UET_mark("lis===447###sois===13342###eois===13363###lif===4###soif===87###eoif===108###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\PDF(int,int,int)");return 1/(maxx-minn);
}

//****************************************************************************
/*
 	input: interger number a,b,c,d
 	output: float number
 Error:
 	Function may will return unexpected result if a>0
 */

/** Instrumented function foo(int,int,int,int) */
float foo(int a, int b, int c, int d){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");UET_fCall++;
	UET_mark("lis===460###sois===13624###eois===13632###lif===2###soif===43###eoif===51###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");float e;
	if (UET_mark("lis===461###sois===13638###eois===13644###lif===3###soif===57###eoif===63###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)") && (UET_mark("lis===461###sois===13638###eois===13644###lif===3###soif===57###eoif===63###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)")&&a >= 0)) {
		UET_mark("lis===461###sois===13646###eois===13655###lif===3###soif===65###eoif===74###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");return 0;
	}
	UET_mark("lis===462###sois===13715###eois===13723###lif===4###soif===134###eoif===142###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");int x=0;
	if (UET_mark("lis===463###sois===13729###eois===13743###lif===5###soif===148###eoif===162###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)") && ((UET_mark("lis===463###sois===13730###eois===13734###lif===5###soif===149###eoif===153###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)")&&a==b)	||(UET_mark("lis===463###sois===13738###eois===13742###lif===5###soif===157###eoif===161###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)")&&c==d))) {
		UET_mark("lis===464###sois===13748###eois===13752###lif===6###soif===167###eoif===171###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");x=1;
	}
	UET_mark("lis===465###sois===13755###eois===13761###lif===7###soif===174###eoif===180###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");e=1/x;
	UET_mark("lis===466###sois===13764###eois===13773###lif===8###soif===183###eoif===192###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\foo(int,int,int,int)");return e;
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
long CDateToNumber(int day, int month, int year){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");UET_fCall++;
	UET_mark("lis===483###sois===14206###eois===14261###lif===2###soif===53###eoif===108###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");int ngay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	UET_mark("lis===484###sois===14263###eois===14273###lif===3###soif===110###eoif===120###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");long s, i;
	UET_mark("lis===488###sois===14285###eois===14289###lif===7###soif===132###eoif===136###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");s=0;
	if (UET_mark("lis===489###sois===14295###eois===14306###lif===8###soif===142###eoif===153###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)") && (UET_mark("lis===489###sois===14295###eois===14306###lif===8###soif===142###eoif===153###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&year > 1900)) {
		UET_mark("lis===491###sois===14313###eois===14321###lif===10###soif===160###eoif===168###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");s=s+day;
		UET_mark("lis===492###sois===14329###eois===14333###lif===11###soif===176###eoif===180###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");for (i=0;UET_mark("lis===492###sois===14334###eois===14343###lif===11###soif===181###eoif===190###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)") && UET_mark("lis===492###sois===14334###eois===14343###lif===11###soif===181###eoif===190###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&i < month;({UET_mark("lis===492###sois===14345###eois===14348###lif===11###soif===192###eoif===195###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");i++;})) {
			UET_mark("lis===492###sois===14350###eois===14362###lif===11###soif===197###eoif===209###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");s=s+ngay[i];
		}
	}
	else {
		if (UET_mark("lis===495###sois===14378###eois===14387###lif===14###soif===225###eoif===234###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)") && (UET_mark("lis===495###sois===14378###eois===14387###lif===14###soif===225###eoif===234###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&year>1900)) {
			UET_mark("lis===497###sois===14396###eois===14404###lif===16###soif===243###eoif===251###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");s=s+day;
			UET_mark("lis===498###sois===14408###eois===14429###lif===17###soif===255###eoif===276###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");s= s+(year-1900)*365;
			UET_mark("lis===499###sois===14438###eois===14445###lif===18###soif===285###eoif===292###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");for (i=1900;UET_mark("lis===499###sois===14446###eois===14455###lif===18###soif===293###eoif===302###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)") && UET_mark("lis===499###sois===14446###eois===14455###lif===18###soif===293###eoif===302###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&i <= year;({UET_mark("lis===499###sois===14457###eois===14460###lif===18###soif===304###eoif===307###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");i++;})) {
				if (UET_mark("lis===500###sois===14470###eois===14504###lif===19###soif===317###eoif===351###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)") && (((UET_mark("lis===500###sois===14472###eois===14478###lif===19###soif===319###eoif===325###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&i%4==0)	&&(UET_mark("lis===500###sois===14482###eois===14490###lif===19###soif===329###eoif===337###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&i%100!=0))	||(UET_mark("lis===500###sois===14495###eois===14503###lif===19###soif===342###eoif===350###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&i%400==0))) {
					UET_mark("lis===500###sois===14506###eois===14512###lif===19###soif===353###eoif===359###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");s=s+1;
				}
			}
			UET_mark("lis===501###sois===14521###eois===14525###lif===20###soif===368###eoif===372###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");for (i=0;UET_mark("lis===501###sois===14526###eois===14535###lif===20###soif===373###eoif===382###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)") && UET_mark("lis===501###sois===14526###eois===14535###lif===20###soif===373###eoif===382###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&i < month;({UET_mark("lis===501###sois===14537###eois===14540###lif===20###soif===384###eoif===387###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");i++;})) {
				UET_mark("lis===503###sois===14551###eois===14564###lif===22###soif===398###eoif===411###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");s= s+ngay[i];
				if (UET_mark("lis===504###sois===14573###eois===14615###lif===23###soif===420###eoif===462###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)") && ((((UET_mark("lis===504###sois===14575###eois===14581###lif===23###soif===422###eoif===428###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&i%4==0)	&&(UET_mark("lis===504###sois===14585###eois===14593###lif===23###soif===432###eoif===440###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&i%100!=0))	||(UET_mark("lis===504###sois===14597###eois===14605###lif===23###soif===444###eoif===452###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&i%400==0))	&&(UET_mark("lis===504###sois===14610###eois===14614###lif===23###soif===457###eoif===461###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)")&&i==2))) {
					UET_mark("lis===504###sois===14617###eois===14623###lif===23###soif===464###eoif===470###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");s=s+1;
				}
			}
		}
	}
	UET_mark("lis===507###sois===14634###eois===14643###lif===26###soif===481###eoif===490###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CDateToNumber(int,int,int)");return s;
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
long CountSecond(int hour, int minute, int second){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)");UET_fCall++;
	UET_mark("lis===521###sois===15047###eois===15054###lif===2###soif===55###eoif===62###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)");long s;
	UET_mark("lis===524###sois===15237###eois===15242###lif===5###soif===245###eoif===250###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)");s=-1;
	if (UET_mark("lis===525###sois===15248###eois===15315###lif===6###soif===256###eoif===323###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)") && ((((((UET_mark("lis===525###sois===15248###eois===15254###lif===6###soif===256###eoif===262###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&hour>0)	&&(UET_mark("lis===525###sois===15258###eois===15266###lif===6###soif===266###eoif===274###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&minute>0))	&&(UET_mark("lis===525###sois===15270###eois===15278###lif===6###soif===278###eoif===286###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&second>0))	&&(UET_mark("lis===525###sois===15282###eois===15289###lif===6###soif===290###eoif===297###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&hour<24))	&&(UET_mark("lis===525###sois===15293###eois===15302###lif===6###soif===301###eoif===310###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&minute<60))	&&(UET_mark("lis===525###sois===15306###eois===15315###lif===6###soif===314###eoif===323###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)")&&second<60))) {
		UET_mark("lis===526###sois===15319###eois===15348###lif===7###soif===327###eoif===356###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)");s=hour*3600+minute*60+second;
	}
	UET_mark("lis===527###sois===15350###eois===15359###lif===8###soif===358###eoif===367###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CountSecond(int,int,int)");return s;
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
int CheckValidDate(int day, int month, int year){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");UET_fCall++;
	if (UET_mark("lis===541###sois===15949###eois===16010###lif===2###soif===159###eoif===220###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)") && ((((((UET_mark("lis===541###sois===15949###eois===15954###lif===2###soif===159###eoif===164###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day>1)	&&(UET_mark("lis===541###sois===15958###eois===15965###lif===2###soif===168###eoif===175###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month>1))	&&(UET_mark("lis===541###sois===15969###eois===15975###lif===2###soif===179###eoif===185###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&year>1))	&&(UET_mark("lis===541###sois===15979###eois===15985###lif===2###soif===189###eoif===195###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day<31))	&&(UET_mark("lis===541###sois===15989###eois===15997###lif===2###soif===199###eoif===207###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month<12))	&&(UET_mark("lis===541###sois===16001###eois===16010###lif===2###soif===211###eoif===220###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&year<2020))) {
		if (UET_mark("lis===542###sois===16020###eois===16117###lif===3###soif===230###eoif===327###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)") && ((((((((UET_mark("lis===542###sois===16021###eois===16029###lif===3###soif===231###eoif===239###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==1)	||(UET_mark("lis===542###sois===16033###eois===16041###lif===3###soif===243###eoif===251###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==3))	||(UET_mark("lis===542###sois===16045###eois===16053###lif===3###soif===255###eoif===263###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==5))	||(UET_mark("lis===542###sois===16057###eois===16065###lif===3###soif===267###eoif===275###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==7))	||(UET_mark("lis===542###sois===16069###eois===16077###lif===3###soif===279###eoif===287###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==8))	||(UET_mark("lis===542###sois===16081###eois===16090###lif===3###soif===291###eoif===300###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==10))	||(UET_mark("lis===542###sois===16094###eois===16103###lif===3###soif===304###eoif===313###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==12))	&&(UET_mark("lis===542###sois===16109###eois===16116###lif===3###soif===319###eoif===326###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day<=31))) {
			UET_mark("lis===542###sois===16120###eois===16129###lif===3###soif===330###eoif===339###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");return 1;
		}
		if (UET_mark("lis===543###sois===16137###eois===16196###lif===4###soif===347###eoif===406###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)") && (((((UET_mark("lis===543###sois===16138###eois===16146###lif===4###soif===348###eoif===356###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==4)	||(UET_mark("lis===543###sois===16150###eois===16158###lif===4###soif===360###eoif===368###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==6))	||(UET_mark("lis===543###sois===16162###eois===16170###lif===4###soif===372###eoif===380###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==9))	||(UET_mark("lis===543###sois===16173###eois===16182###lif===4###soif===383###eoif===392###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==11))	&&(UET_mark("lis===543###sois===16188###eois===16195###lif===4###soif===398###eoif===405###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day<=30))) {
			UET_mark("lis===543###sois===16198###eois===16207###lif===4###soif===408###eoif===417###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");return 1;
		}
		if (UET_mark("lis===544###sois===16215###eois===16237###lif===5###soif===425###eoif===447###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)") && ((UET_mark("lis===544###sois===16216###eois===16224###lif===5###soif===426###eoif===434###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==2)	&&(UET_mark("lis===544###sois===16230###eois===16236###lif===5###soif===440###eoif===446###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day<28))) {
			UET_mark("lis===544###sois===16240###eois===16249###lif===5###soif===450###eoif===459###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");return 1;
		}
		if (UET_mark("lis===545###sois===16270###eois===16325###lif===6###soif===480###eoif===535###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)") && ((((UET_mark("lis===545###sois===16271###eois===16279###lif===6###soif===481###eoif===489###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&month==2)	&&(UET_mark("lis===545###sois===16285###eois===16292###lif===6###soif===495###eoif===502###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&day==29))	&&(UET_mark("lis===545###sois===16298###eois===16307###lif===6###soif===508###eoif===517###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&year%4==0))	&&(UET_mark("lis===545###sois===16311###eois===16324###lif===6###soif===521###eoif===534###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)")&&year%400 != 0))) {
			UET_mark("lis===545###sois===16327###eois===16336###lif===6###soif===537###eoif===546###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");return 1;
		}
	}
	UET_mark("lis===547###sois===16341###eois===16350###lif===8###soif===551###eoif===560###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidDate(int,int,int)");return 0;
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
int CheckValidTime(int hour, int minute, int second){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)");UET_fCall++;
	if (UET_mark("lis===560###sois===16885###eois===16952###lif===2###soif===61###eoif===128###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)") && ((((((UET_mark("lis===560###sois===16885###eois===16891###lif===2###soif===61###eoif===67###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&hour>0)	&&(UET_mark("lis===560###sois===16895###eois===16902###lif===2###soif===71###eoif===78###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&hour<23))	&&(UET_mark("lis===560###sois===16906###eois===16914###lif===2###soif===82###eoif===90###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&minute>0))	&&(UET_mark("lis===560###sois===16918###eois===16927###lif===2###soif===94###eoif===103###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&minute<59))	&&(UET_mark("lis===560###sois===16931###eois===16939###lif===2###soif===107###eoif===115###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&second>0))	&&(UET_mark("lis===560###sois===16943###eois===16952###lif===2###soif===119###eoif===128###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)")&&second<59))) {
		UET_mark("lis===560###sois===16954###eois===16963###lif===2###soif===130###eoif===139###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)");return 1;
	}
	UET_mark("lis===561###sois===16965###eois===16974###lif===3###soif===141###eoif===150###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\CheckValidTime(int,int,int)");return 0;
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
int divisionTest(int a, int b){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)");UET_fCall++;
	UET_mark("lis===576###sois===17405###eois===17417###lif===1###soif===34###eoif===46###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)");int x = a+b;
	UET_mark("lis===577###sois===17420###eois===17434###lif===2###soif===49###eoif===63###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)");int y = x +10;
	if (UET_mark("lis===578###sois===17440###eois===17444###lif===3###soif===69###eoif===73###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)") && (UET_mark("lis===578###sois===17440###eois===17444###lif===3###soif===69###eoif===73###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)")&&x<10)) {
		UET_mark("lis===579###sois===17450###eois===17461###lif===4###soif===79###eoif===90###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)");return 1/x;
	}
	else {
		UET_mark("lis===581###sois===17473###eois===17484###lif===6###soif===102###eoif===113###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\divisionTest(int,int)");return 1/y;
	}
}
//****************************************************************************

/*
	input: month, day, year
	output: the next date

*/

/** Instrumented function NextDate(int,int,int) */
long NextDate(int year, int month, int day){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");UET_fCall++;
	UET_mark("lis===593###sois===17681###eois===17736###lif===2###soif===48###eoif===103###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");int ngay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	UET_mark("lis===594###sois===17738###eois===17748###lif===3###soif===105###eoif===115###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");day=day+1;
	while (UET_mark("lis===595###sois===17757###eois===17765###lif===4###soif===124###eoif===132###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)") && (UET_mark("lis===595###sois===17757###eois===17765###lif===4###soif===124###eoif===132###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&day>=365)) {
		UET_mark("lis===597###sois===17773###eois===17785###lif===6###soif===140###eoif===152###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");year=year+1;
		if (UET_mark("lis===598###sois===17792###eois===17836###lif===7###soif===159###eoif===203###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)") && (((UET_mark("lis===598###sois===17793###eois===17802###lif===7###soif===160###eoif===169###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&year%4==0)	&&(UET_mark("lis===598###sois===17806###eois===17817###lif===7###soif===173###eoif===184###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&year%100!=0))	||(UET_mark("lis===598###sois===17823###eois===17835###lif===7###soif===190###eoif===202###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&year %400==0))) {
			UET_mark("lis===599###sois===17841###eois===17853###lif===8###soif===208###eoif===220###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");day=day-366;
		}
		else {
			UET_mark("lis===601###sois===17865###eois===17877###lif===10###soif===232###eoif===244###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");day=day-365;
		}
	}
	while (UET_mark("lis===604###sois===17892###eois===17907###lif===13###soif===259###eoif===274###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)") && (UET_mark("lis===604###sois===17892###eois===17907###lif===13###soif===259###eoif===274###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&day>ngay[month])) {
		UET_mark("lis===606###sois===17916###eois===17936###lif===15###soif===283###eoif===303###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");day=day-ngay[month];
		UET_mark("lis===607###sois===17939###eois===17953###lif===16###soif===306###eoif===320###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");month=month+1;
		while (UET_mark("lis===608###sois===17963###eois===17972###lif===17###soif===330###eoif===339###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)") && (UET_mark("lis===608###sois===17963###eois===17972###lif===17###soif===330###eoif===339###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)")&&month>=12)) {
			UET_mark("lis===610###sois===17980###eois===17992###lif===19###soif===347###eoif===359###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");year=year+1;
			UET_mark("lis===611###sois===17995###eois===18010###lif===20###soif===362###eoif===377###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");month=month%12;
		}
	}
	UET_mark("lis===614###sois===18020###eois===18029###lif===23###soif===387###eoif===396###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\NextDate(int,int,int)");return 0;
}

//****************************************************************************

/*
	input: x, y
	This function is created for loop testing.
*/
/** Instrumented function simpleWhileTest(int,int) */
int simpleWhileTest(int x, int y){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\simpleWhileTest(int,int)");UET_fCall++;
	while (UET_mark("lis===624###sois===18228###eois===18233###lif===1###soif===43###eoif===48###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\simpleWhileTest(int,int)") && (UET_mark("lis===624###sois===18228###eois===18233###lif===1###soif===43###eoif===48###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\simpleWhileTest(int,int)")&&x < y)) {
		UET_mark("lis===625###sois===18239###eois===18244###lif===2###soif===54###eoif===59###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\simpleWhileTest(int,int)");x+=1;
	}
	UET_mark("lis===627###sois===18251###eois===18260###lif===4###soif===66###eoif===75###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\simpleWhileTest(int,int)");return 1;
}
//****************************************************************************

/*
	input: m, n
	This function is created for loop testing.
*/
/** Instrumented function twoForloop(int,int) */
int twoForloop(int m, int n){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");UET_fCall++;
	UET_mark("lis===637###sois===18451###eois===18459###lif===2###soif===37###eoif===45###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");int s=0;
	if (UET_mark("lis===638###sois===18469###eois===18479###lif===3###soif===55###eoif===65###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)") && ((UET_mark("lis===638###sois===18469###eois===18472###lif===3###soif===55###eoif===58###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)")&&m>0)	&&(UET_mark("lis===638###sois===18476###eois===18479###lif===3###soif===62###eoif===65###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)")&&n>0))) {
		UET_mark("lis===639###sois===18495###eois===18503###lif===4###soif===81###eoif===89###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");for (int i=1;UET_mark("lis===639###sois===18504###eois===18508###lif===4###soif===90###eoif===94###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)") && UET_mark("lis===639###sois===18504###eois===18508###lif===4###soif===90###eoif===94###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)")&&i<=m;({UET_mark("lis===639###sois===18510###eois===18513###lif===4###soif===96###eoif===99###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");i++;})) {
			UET_mark("lis===640###sois===18532###eois===18540###lif===5###soif===118###eoif===126###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");for (int j=1;UET_mark("lis===640###sois===18541###eois===18545###lif===5###soif===127###eoif===131###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)") && UET_mark("lis===640###sois===18541###eois===18545###lif===5###soif===127###eoif===131###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)")&&j<=n;({UET_mark("lis===640###sois===18547###eois===18550###lif===5###soif===133###eoif===136###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");j++;})) {
				UET_mark("lis===641###sois===18566###eois===18574###lif===6###soif===152###eoif===160###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");s=s+i+j;
			}
		}
	}
	UET_mark("lis===642###sois===18580###eois===18589###lif===7###soif===166###eoif===175###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoForloop(int,int)");return s;
}

//****************************************************************************

/** Instrumented function selectionSort(int[],int) */
void selectionSort(int arr[], int n){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");UET_fCall++;
	UET_mark("lis===649###sois===18723###eois===18747###lif===2###soif===45###eoif===69###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");int i, j, min_idx, temp;
	UET_mark("lis===652###sois===18814###eois===18820###lif===5###soif===136###eoif===142###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");for (i = 0;UET_mark("lis===652###sois===18821###eois===18828###lif===5###soif===143###eoif===150###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)") && UET_mark("lis===652###sois===18821###eois===18828###lif===5###soif===143###eoif===150###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)")&&i < n-1;({UET_mark("lis===652###sois===18830###eois===18833###lif===5###soif===152###eoif===155###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");i++;})) {
		UET_mark("lis===655###sois===18906###eois===18918###lif===8###soif===228###eoif===240###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");min_idx = i;
		UET_mark("lis===656###sois===18933###eois===18941###lif===9###soif===255###eoif===263###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");for (j = i+1;UET_mark("lis===656###sois===18942###eois===18947###lif===9###soif===264###eoif===269###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)") && UET_mark("lis===656###sois===18942###eois===18947###lif===9###soif===264###eoif===269###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)")&&j < n;({UET_mark("lis===656###sois===18949###eois===18952###lif===9###soif===271###eoif===274###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");j++;})) {
			if (UET_mark("lis===657###sois===18967###eois===18988###lif===10###soif===289###eoif===310###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)") && (UET_mark("lis===657###sois===18967###eois===18988###lif===10###soif===289###eoif===310###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)")&&arr[j] < arr[min_idx])) {
				UET_mark("lis===658###sois===19003###eois===19015###lif===11###soif===325###eoif===337###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");min_idx = j;
			}
		}
		UET_mark("lis===661###sois===19093###eois===19111###lif===14###soif===415###eoif===433###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");temp=arr[min_idx];
		UET_mark("lis===662###sois===19121###eois===19141###lif===15###soif===443###eoif===463###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");arr[min_idx]=arr[i];
		UET_mark("lis===663###sois===19151###eois===19163###lif===16###soif===473###eoif===485###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\selectionSort(int[],int)");arr[i]=temp;
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
int tritype0(int i, int j, int k){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");UET_fCall++;
	UET_mark("lis===681###sois===19691###eois===19705###lif===1###soif===38###eoif===52###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");int type_code;
	if (UET_mark("lis===682###sois===19713###eois===19745###lif===2###soif===60###eoif===92###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (((UET_mark("lis===682###sois===19714###eois===19720###lif===2###soif===61###eoif===67###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i == 0)	||(UET_mark("lis===682###sois===19726###eois===19732###lif===2###soif===73###eoif===79###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&j == 0))	||(UET_mark("lis===682###sois===19738###eois===19744###lif===2###soif===85###eoif===91###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&k == 0))) {
		UET_mark("lis===682###sois===19747###eois===19761###lif===2###soif===94###eoif===108###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 4;
	}
	else {
		UET_mark("lis===684###sois===19795###eois===19809###lif===4###soif===142###eoif===156###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 0;
		if (UET_mark("lis===685###sois===19819###eois===19825###lif===5###soif===166###eoif===172###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (UET_mark("lis===685###sois===19819###eois===19825###lif===5###soif===166###eoif===172###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i == j)) {
			UET_mark("lis===685###sois===19827###eois===19853###lif===5###soif===174###eoif===200###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = type_code + 1;
		}
		if (UET_mark("lis===686###sois===19893###eois===19899###lif===6###soif===240###eoif===246###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (UET_mark("lis===686###sois===19893###eois===19899###lif===6###soif===240###eoif===246###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i == k)) {
			UET_mark("lis===686###sois===19901###eois===19927###lif===6###soif===248###eoif===274###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = type_code + 2;
		}
		if (UET_mark("lis===687###sois===19967###eois===19973###lif===7###soif===314###eoif===320###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (UET_mark("lis===687###sois===19967###eois===19973###lif===7###soif===314###eoif===320###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&j == k)) {
			UET_mark("lis===687###sois===19975###eois===20001###lif===7###soif===322###eoif===348###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = type_code + 3;
		}
		if (UET_mark("lis===688###sois===20041###eois===20055###lif===8###soif===388###eoif===402###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (UET_mark("lis===688###sois===20041###eois===20055###lif===8###soif===388###eoif===402###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&type_code == 0)) {
			if (UET_mark("lis===689###sois===20117###eois===20155###lif===9###soif===464###eoif===502###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (((UET_mark("lis===689###sois===20118###eois===20126###lif===9###soif===465###eoif===473###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i+j <= k)	||(UET_mark("lis===689###sois===20132###eois===20140###lif===9###soif===479###eoif===487###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&j+k <= i))	||(UET_mark("lis===689###sois===20146###eois===20154###lif===9###soif===493###eoif===501###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i+k <= j))) {
				UET_mark("lis===690###sois===20182###eois===20196###lif===10###soif===529###eoif===543###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 4;
			}
			else {
				UET_mark("lis===692###sois===20211###eois===20225###lif===12###soif===558###eoif===572###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 1;
			}
		}
		else {
			if (UET_mark("lis===694###sois===20249###eois===20262###lif===14###soif===596###eoif===609###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && (UET_mark("lis===694###sois===20249###eois===20262###lif===14###soif===596###eoif===609###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&type_code > 3)) {
				UET_mark("lis===694###sois===20264###eois===20278###lif===14###soif===611###eoif===625###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 3;
			}
			else {
				if (UET_mark("lis===695###sois===20323###eois===20352###lif===15###soif===670###eoif===699###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && ((UET_mark("lis===695###sois===20324###eois===20338###lif===15###soif===671###eoif===685###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&type_code == 1)	&&(UET_mark("lis===695###sois===20344###eois===20351###lif===15###soif===691###eoif===698###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i+j > k))) {
					UET_mark("lis===695###sois===20354###eois===20368###lif===15###soif===701###eoif===715###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 2;
				}
				else {
					if (UET_mark("lis===696###sois===20397###eois===20426###lif===16###soif===744###eoif===773###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && ((UET_mark("lis===696###sois===20398###eois===20412###lif===16###soif===745###eoif===759###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&type_code == 2)	&&(UET_mark("lis===696###sois===20418###eois===20425###lif===16###soif===765###eoif===772###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&i+k > j))) {
						UET_mark("lis===696###sois===20428###eois===20442###lif===16###soif===775###eoif===789###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 2;
					}
					else {
						if (UET_mark("lis===697###sois===20471###eois===20500###lif===17###soif===818###eoif===847###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)") && ((UET_mark("lis===697###sois===20472###eois===20486###lif===17###soif===819###eoif===833###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&type_code == 3)	&&(UET_mark("lis===697###sois===20492###eois===20499###lif===17###soif===839###eoif===846###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)")&&j+k > i))) {
							UET_mark("lis===697###sois===20502###eois===20516###lif===17###soif===849###eoif===863###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 2;
						}
						else {
							UET_mark("lis===698###sois===20541###eois===20555###lif===18###soif===888###eoif===902###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");type_code = 4;
						}
					}
				}
			}
		}
	}
	UET_mark("lis===700###sois===20566###eois===20583###lif===20###soif===913###eoif===930###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\tritype0(int,int,int)");return type_code;
}

 /** Instrumented function leapYear1(int) */
int leapYear1(int year){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)");UET_fCall++;
	if (UET_mark("lis===704###sois===20624###eois===20637###lif===1###soif===33###eoif===46###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)") && (UET_mark("lis===704###sois===20624###eois===20637###lif===1###soif===33###eoif===46###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)")&&year % 4 == 0)) {
		if (UET_mark("lis===705###sois===20654###eois===20669###lif===2###soif===63###eoif===78###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)") && (UET_mark("lis===705###sois===20654###eois===20669###lif===2###soif===63###eoif===78###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)")&&year % 100 == 0)) {
			if (UET_mark("lis===706###sois===20690###eois===20705###lif===3###soif===99###eoif===114###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)") && (UET_mark("lis===706###sois===20690###eois===20705###lif===3###soif===99###eoif===114###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)")&&year % 400 == 0)) {
				UET_mark("lis===707###sois===20724###eois===20733###lif===4###soif===133###eoif===142###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)");return 1;
			}
			else {
				UET_mark("lis===709###sois===20781###eois===20790###lif===6###soif===190###eoif===199###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)");return 0;
			}
		}
		else {
			UET_mark("lis===712###sois===20845###eois===20854###lif===9###soif===254###eoif===263###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)");return 1;
		}
	}
	else {
		UET_mark("lis===715###sois===20881###eois===20890###lif===12###soif===290###eoif===299###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\leapYear1(int)");return 0;
	}
}


//http://pathcrawler-online.com:8080/#
//ExampleUnit
  /** Instrumented function uninit_var(int[3],int[3]) */
int uninit_var(int a[3], int b[3]){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");UET_fCall++;
	UET_mark("lis===722###sois===20996###eois===21005###lif===1###soif===40###eoif===49###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");int i, k;
	UET_mark("lis===723###sois===21013###eois===21017###lif===2###soif===57###eoif===61###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");for (i=0;UET_mark("lis===723###sois===21018###eois===21021###lif===2###soif===62###eoif===65###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && UET_mark("lis===723###sois===21018###eois===21021###lif===2###soif===62###eoif===65###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&i<2;({UET_mark("lis===723###sois===21023###eois===21026###lif===2###soif===67###eoif===70###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");i++;})) {
		if (UET_mark("lis===724###sois===21054###eois===21063###lif===3###soif===98###eoif===107###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && (UET_mark("lis===724###sois===21054###eois===21063###lif===3###soif===98###eoif===107###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&a[i] == 0)) {
			UET_mark("lis===725###sois===21084###eois===21093###lif===4###soif===128###eoif===137###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");return 0;
		}
		if (UET_mark("lis===726###sois===21104###eois===21118###lif===5###soif===148###eoif===162###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && (UET_mark("lis===726###sois===21104###eois===21118###lif===5###soif===148###eoif===162###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&a[i] != a[i+1])) {
			UET_mark("lis===727###sois===21141###eois===21147###lif===6###soif===185###eoif===191###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");k = 0;
		}
		else {
			if (UET_mark("lis===729###sois===21172###eois===21178###lif===8###soif===216###eoif===222###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && (UET_mark("lis===729###sois===21172###eois===21178###lif===8###soif===216###eoif===222###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&k == 2)) {
				UET_mark("lis===730###sois===21202###eois===21211###lif===9###soif===246###eoif===255###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");return 0;
			}
		}
		while (UET_mark("lis===731###sois===21225###eois===21237###lif===10###soif===269###eoif===281###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && (UET_mark("lis===731###sois===21225###eois===21237###lif===10###soif===269###eoif===281###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&b[k] != a[i])) {
			if (UET_mark("lis===732###sois===21265###eois===21271###lif===11###soif===309###eoif===315###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])") && (UET_mark("lis===732###sois===21265###eois===21271###lif===11###soif===309###eoif===315###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])")&&k == 2)) {
				UET_mark("lis===733###sois===21296###eois===21305###lif===12###soif===340###eoif===349###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");return 0;
			}
			else {
				UET_mark("lis===735###sois===21335###eois===21339###lif===14###soif===379###eoif===383###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");k++;
			}
		}
	}
	UET_mark("lis===737###sois===21352###eois===21361###lif===16###soif===396###eoif===405###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\uninit_var(int[3],int[3])");return 1;
}

//Sach thay Hung
/** Instrumented function average(double[],double,double,int&,int&) */
double average(double value[], double min, double max, int& tcnt, int& vcnt){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");UET_fCall++;
	UET_mark("lis===743###sois===21475###eois===21488###lif===2###soif===89###eoif===102###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");double sum=0;
	UET_mark("lis===744###sois===21491###eois===21499###lif===3###soif===105###eoif===113###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");int i=0;
	UET_mark("lis===745###sois===21502###eois===21514###lif===4###soif===116###eoif===128###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");tcnt=vcnt=0;
	while (UET_mark("lis===746###sois===21523###eois===21549###lif===5###soif===137###eoif===163###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)") && ((UET_mark("lis===746###sois===21523###eois===21537###lif===5###soif===137###eoif===151###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)")&&value[i]!=-999)	&&(UET_mark("lis===746###sois===21541###eois===21549###lif===5###soif===155###eoif===163###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)")&&tcnt<100))) {
		UET_mark("lis===748###sois===21558###eois===21565###lif===7###soif===172###eoif===179###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");tcnt++;
		if (UET_mark("lis===749###sois===21572###eois===21601###lif===8###soif===186###eoif===215###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)") && ((UET_mark("lis===749###sois===21572###eois===21585###lif===8###soif===186###eoif===199###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)")&&min<=value[i])	&&(UET_mark("lis===749###sois===21588###eois===21601###lif===8###soif===202###eoif===215###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)")&&value[i]<=max))) {
			UET_mark("lis===751###sois===21612###eois===21626###lif===10###soif===226###eoif===240###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");sum+=value[i];
			UET_mark("lis===752###sois===21631###eois===21638###lif===11###soif===245###eoif===252###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");vcnt++;
		}
		UET_mark("lis===754###sois===21647###eois===21651###lif===13###soif===261###eoif===265###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");i++;
	}
	if (UET_mark("lis===757###sois===21664###eois===21670###lif===16###soif===278###eoif===284###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)") && (UET_mark("lis===757###sois===21664###eois===21670###lif===16###soif===278###eoif===284###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)")&&vcnt>0)) {
		UET_mark("lis===758###sois===21675###eois===21691###lif===17###soif===289###eoif===305###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");return sum/vcnt;
	}
	UET_mark("lis===759###sois===21695###eois===21707###lif===18###soif===309###eoif===321###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\average(double[],double,double,int&,int&)");return -999;
}

/** Instrumented function multiConditionTest(int) */
int multiConditionTest(int x){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");UET_fCall++;
	if (UET_mark("lis===763###sois===21750###eois===21753###lif===1###soif===36###eoif===39###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (UET_mark("lis===763###sois===21750###eois===21753###lif===1###soif===36###eoif===39###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<0)) {
		if (UET_mark("lis===764###sois===21762###eois===21767###lif===2###soif===48###eoif===53###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (UET_mark("lis===764###sois===21762###eois===21767###lif===2###soif===48###eoif===53###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x>-10)) {
			if (UET_mark("lis===765###sois===21777###eois===21781###lif===3###soif===63###eoif===67###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (UET_mark("lis===765###sois===21777###eois===21781###lif===3###soif===63###eoif===67###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x>-5)) {
				UET_mark("lis===766###sois===21789###eois===21798###lif===4###soif===75###eoif===84###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 1;
			}
			else {
				if (UET_mark("lis===768###sois===21817###eois===21831###lif===6###soif===103###eoif===117###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && ((UET_mark("lis===768###sois===21817###eois===21822###lif===6###soif===103###eoif===108###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<=-5)	&&(UET_mark("lis===768###sois===21826###eois===21831###lif===6###soif===112###eoif===117###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x>=-8))) {
					UET_mark("lis===769###sois===21839###eois===21848###lif===7###soif===125###eoif===134###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 2;
				}
				else {
					UET_mark("lis===771###sois===21864###eois===21873###lif===9###soif===150###eoif===159###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 3;
				}
			}
		}
		else {
			UET_mark("lis===773###sois===21887###eois===21897###lif===11###soif===173###eoif===183###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return -1;
		}
	}
	else {
		if (UET_mark("lis===775###sois===21912###eois===21922###lif===13###soif===198###eoif===208###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && ((UET_mark("lis===775###sois===21912###eois===21915###lif===13###soif===198###eoif===201###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x>0)	&&(UET_mark("lis===775###sois===21917###eois===21922###lif===13###soif===203###eoif===208###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<100))) {
			if (UET_mark("lis===776###sois===21931###eois===21935###lif===14###soif===217###eoif===221###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (UET_mark("lis===776###sois===21931###eois===21935###lif===14###soif===217###eoif===221###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<50)) {
				if (UET_mark("lis===777###sois===21945###eois===21949###lif===15###soif===231###eoif===235###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (UET_mark("lis===777###sois===21945###eois===21949###lif===15###soif===231###eoif===235###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<20)) {
					UET_mark("lis===778###sois===21957###eois===21966###lif===16###soif===243###eoif===252###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 4;
				}
				else {
					UET_mark("lis===780###sois===21982###eois===21991###lif===18###soif===268###eoif===277###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 5;
				}
			}
			else {
				if (UET_mark("lis===782###sois===22008###eois===22019###lif===20###soif===294###eoif===305###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && ((UET_mark("lis===782###sois===22008###eois===22013###lif===20###soif===294###eoif===299###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x>=50)	&&(UET_mark("lis===782###sois===22015###eois===22019###lif===20###soif===301###eoif===305###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x<80))) {
					if (UET_mark("lis===783###sois===22029###eois===22034###lif===21###soif===315###eoif===320###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (UET_mark("lis===783###sois===22029###eois===22034###lif===21###soif===315###eoif===320###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x==60)) {
						UET_mark("lis===783###sois===22036###eois===22045###lif===21###soif===322###eoif===331###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 6;
					}
					else {
						UET_mark("lis===784###sois===22055###eois===22064###lif===22###soif===341###eoif===350###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 7;
					}
				}
				else {
					UET_mark("lis===786###sois===22078###eois===22087###lif===24###soif===364###eoif===373###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 8;
				}
			}
		}
		else {
			if (UET_mark("lis===788###sois===22102###eois===22108###lif===26###soif===388###eoif===394###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)") && (UET_mark("lis===788###sois===22102###eois===22108###lif===26###soif===388###eoif===394###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)")&&x==101)) {
				UET_mark("lis===789###sois===22114###eois===22123###lif===27###soif===400###eoif===409###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return 9;
			}
			else {
				UET_mark("lis===791###sois===22135###eois===22144###lif===29###soif===421###eoif===430###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\multiConditionTest(int)");return x;
			}
		}
	}
}

/** Instrumented function distanceTest(float) */
float distanceTest(float x){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");UET_fCall++;
	if (UET_mark("lis===795###sois===22185###eois===22188###lif===1###soif===34###eoif===37###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)") && (UET_mark("lis===795###sois===22185###eois===22188###lif===1###soif===34###eoif===37###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)")&&x>1)) {
		if (UET_mark("lis===796###sois===22197###eois===22204###lif===2###soif===46###eoif===53###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)") && (UET_mark("lis===796###sois===22197###eois===22204###lif===2###soif===46###eoif===53###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)")&&x<1.001)) {
			if (UET_mark("lis===797###sois===22214###eois===22223###lif===3###soif===63###eoif===72###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)") && (UET_mark("lis===797###sois===22214###eois===22223###lif===3###soif===63###eoif===72###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)")&&x<1.00001)) {
				UET_mark("lis===798###sois===22231###eois===22240###lif===4###soif===80###eoif===89###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");return 1;
			}
			else {
				UET_mark("lis===800###sois===22256###eois===22265###lif===6###soif===105###eoif===114###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");return 2;
			}
		}
		else {
			UET_mark("lis===802###sois===22279###eois===22288###lif===8###soif===128###eoif===137###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");return 3;
		}
	}
	else {
		if (UET_mark("lis===804###sois===22303###eois===22319###lif===10###soif===152###eoif===168###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)") && ((UET_mark("lis===804###sois===22303###eois===22307###lif===10###soif===152###eoif===156###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)")&&x<=1)	&&(UET_mark("lis===804###sois===22311###eois===22319###lif===10###soif===160###eoif===168###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)")&&x>=0.999))) {
			UET_mark("lis===805###sois===22325###eois===22334###lif===11###soif===174###eoif===183###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");return 4;
		}
	}
	UET_mark("lis===807###sois===22341###eois===22350###lif===13###soif===190###eoif===199###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\distanceTest(float)");return 5;
}

/** Instrumented function smallIntervalTest(double) */
double smallIntervalTest(double x){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)");UET_fCall++;
	if (UET_mark("lis===811###sois===22398###eois===22403###lif===1###soif===41###eoif===46###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)") && (UET_mark("lis===811###sois===22398###eois===22403###lif===1###soif===41###eoif===46###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)")&&x>1.0)) {
		if (UET_mark("lis===812###sois===22412###eois===22435###lif===2###soif===55###eoif===78###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)") && ((UET_mark("lis===812###sois===22412###eois===22421###lif===2###soif===55###eoif===64###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)")&&x>2.00001)	&&(UET_mark("lis===812###sois===22425###eois===22435###lif===2###soif===68###eoif===78###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)")&&x<2.000015))) {
			UET_mark("lis===813###sois===22442###eois===22451###lif===3###soif===85###eoif===94###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)");return 1;
		}
		else {
			if (UET_mark("lis===815###sois===22468###eois===22491###lif===5###soif===111###eoif===134###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)") && ((UET_mark("lis===815###sois===22468###eois===22478###lif===5###soif===111###eoif===121###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)")&&x<=2.00001)	&&(UET_mark("lis===815###sois===22482###eois===22491###lif===5###soif===125###eoif===134###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)")&&x>=1.9999))) {
				UET_mark("lis===816###sois===22498###eois===22507###lif===6###soif===141###eoif===150###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)");return 2;
			}
			else {
				UET_mark("lis===818###sois===22521###eois===22530###lif===8###soif===164###eoif===173###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)");return 3;
			}
		}
	}
	UET_mark("lis===820###sois===22537###eois===22546###lif===10###soif===180###eoif===189###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\smallIntervalTest(double)");return 4;
}
/** Instrumented function mmin(int,int) */
int mmin(int a, int b){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\mmin(int,int)");UET_fCall++;
	UET_mark("lis===823###sois===22577###eois===22586###lif===1###soif===26###eoif===35###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\mmin(int,int)");return 1;
}
/** Instrumented function gcd3(int,int) */
int gcd3(int a, int b){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");UET_fCall++;
	UET_mark("lis===827###sois===22619###eois===22628###lif===2###soif===28###eoif===37###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");int temp;
	while (UET_mark("lis===829###sois===22640###eois===22645###lif===4###soif===49###eoif===54###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)") && (UET_mark("lis===829###sois===22640###eois===22645###lif===4###soif===49###eoif===54###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)")&&b > 0)) {
		UET_mark("lis===830###sois===22652###eois===22665###lif===5###soif===61###eoif===74###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");temp = a % b;
		UET_mark("lis===831###sois===22669###eois===22675###lif===6###soif===78###eoif===84###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");a = b;
		UET_mark("lis===832###sois===22679###eois===22688###lif===7###soif===88###eoif===97###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");b = temp;
	}
	UET_mark("lis===835###sois===22697###eois===22706###lif===10###soif===106###eoif===115###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\gcd3(int,int)");return a;
}

//D:\OneDrive - Cao Dang Su Pham Trung Uong\NCS\ava\data-test\tsdv\Sample_for_R1_4

//Da them 4 loi
//Loi tai age=4,14,15, distance=10
/** Instrumented function getFare1(int,int) */
int getFare1(int age, int distance){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");UET_fCall++;
	UET_mark("lis===846###sois===22946###eois===22955###lif===4###soif===94###eoif===103###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");int fare;
	if (UET_mark("lis===847###sois===22961###eois===22980###lif===5###soif===109###eoif===128###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)") && ((UET_mark("lis===847###sois===22961###eois===22968###lif===5###soif===109###eoif===116###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&age > 4)	&&(UET_mark("lis===847###sois===22972###eois===22980###lif===5###soif===120###eoif===128###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&age < 14))) {
		if (UET_mark("lis===849###sois===23028###eois===23042###lif===7###soif===176###eoif===190###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)") && (UET_mark("lis===849###sois===23028###eois===23042###lif===7###soif===176###eoif===190###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&distance >= 10)) {
			UET_mark("lis===850###sois===23075###eois===23086###lif===8###soif===223###eoif===234###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");fare = 130;
		}
		else {
			UET_mark("lis===851###sois===23095###eois===23106###lif===9###soif===243###eoif===254###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");fare = 100;
		}
	}
	if (UET_mark("lis===853###sois===23116###eois===23125###lif===11###soif===264###eoif===273###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)") && (UET_mark("lis===853###sois===23116###eois===23125###lif===11###soif===264###eoif===273###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&age >  15)) {
		if (UET_mark("lis===855###sois===23159###eois===23184###lif===13###soif===307###eoif===332###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)") && ((UET_mark("lis===855###sois===23159###eois===23171###lif===13###soif===307###eoif===319###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&distance <10)	&&(UET_mark("lis===855###sois===23175###eois===23184###lif===13###soif===323###eoif===332###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&age >= 60))) {
			UET_mark("lis===856###sois===23190###eois===23201###lif===14###soif===338###eoif===349###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");fare = 160;
		}
		else {
			if (UET_mark("lis===857###sois===23213###eois===23238###lif===15###soif===361###eoif===386###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)") && ((UET_mark("lis===857###sois===23213###eois===23226###lif===15###soif===361###eoif===374###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&distance > 10)	&&(UET_mark("lis===857###sois===23230###eois===23238###lif===15###soif===378###eoif===386###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)")&&age < 60))) {
				UET_mark("lis===858###sois===23244###eois===23255###lif===16###soif===392###eoif===403###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");fare = 250;
			}
			else {
				UET_mark("lis===859###sois===23265###eois===23276###lif===17###soif===413###eoif===424###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");fare = 200;
			}
		}
	}
	UET_mark("lis===861###sois===23283###eois===23295###lif===19###soif===431###eoif===443###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\getFare1(int,int)");return fare;
}

/** Instrumented function SimpleCondThanComplexCond(short,short,short) */
short SimpleCondThanComplexCond (short a, short b, short c){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)");UET_fCall++;
	if (UET_mark("lis===866###sois===23374###eois===23395###lif===2###soif===72###eoif===93###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)") && (((UET_mark("lis===866###sois===23375###eois===23378###lif===2###soif===73###eoif===76###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&a>0)	&&(UET_mark("lis===866###sois===23382###eois===23385###lif===2###soif===80###eoif===83###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&c>3))	&&(UET_mark("lis===866###sois===23389###eois===23394###lif===2###soif===87###eoif===92###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&b>-10))) {
		if (UET_mark("lis===868###sois===23417###eois===23420###lif===4###soif===115###eoif===118###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)") && (UET_mark("lis===868###sois===23417###eois===23420###lif===4###soif===115###eoif===118###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&b>0)) {
			if (UET_mark("lis===869###sois===23439###eois===23451###lif===5###soif===137###eoif===149###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)") && ((UET_mark("lis===869###sois===23440###eois===23443###lif===5###soif===138###eoif===141###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&a>b)	&&(UET_mark("lis===869###sois===23447###eois===23450###lif===5###soif===145###eoif===148###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&c>5))) {
				if (UET_mark("lis===870###sois===23473###eois===23476###lif===6###soif===171###eoif===174###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)") && (UET_mark("lis===870###sois===23473###eois===23476###lif===6###soif===171###eoif===174###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&a>c)) {
					if (UET_mark("lis===871###sois===23502###eois===23524###lif===7###soif===200###eoif===222###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)") && (((UET_mark("lis===871###sois===23503###eois===23507###lif===7###soif===201###eoif===205###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&a>10)	&&(UET_mark("lis===871###sois===23511###eois===23515###lif===7###soif===209###eoif===213###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&b>10))	&&(UET_mark("lis===871###sois===23519###eois===23523###lif===7###soif===217###eoif===221###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&c>10))) {
						if (UET_mark("lis===872###sois===23551###eois===23575###lif===8###soif===249###eoif===273###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)") && (((UET_mark("lis===872###sois===23552###eois===23557###lif===8###soif===250###eoif===255###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&a<=17)	&&(UET_mark("lis===872###sois===23561###eois===23566###lif===8###soif===259###eoif===264###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&c<=15))	&&(UET_mark("lis===872###sois===23570###eois===23574###lif===8###soif===268###eoif===272###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)")&&b<20))) {
							UET_mark("lis===873###sois===23599###eois===23608###lif===9###soif===297###eoif===306###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)");return 0;
						}
					}
				}
			}
		}
	}
	UET_mark("lis===875###sois===23621###eois===23630###lif===11###soif===319###eoif===328###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\SimpleCondThanComplexCond(short,short,short)");return 1;
}

/** Instrumented function MoreComplexCond(long,long,long,long,long) */
long MoreComplexCond (long a, long b, long c, long d, long e){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)");UET_fCall++;
	if (UET_mark("lis===880###sois===23711###eois===23755###lif===2###soif===74###eoif===118###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)") && ((((UET_mark("lis===880###sois===23712###eois===23715###lif===2###soif===75###eoif===78###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&a>0)	&&(UET_mark("lis===880###sois===23719###eois===23722###lif===2###soif===82###eoif===85###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&c>3))	&&(UET_mark("lis===880###sois===23726###eois===23733###lif===2###soif===89###eoif===96###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&a+b>-10))	&&(UET_mark("lis===880###sois===23736###eois===23755###lif===2###soif===99###eoif===118###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&(a+b+c>0)&(a+b-e<0)))) {
		if (UET_mark("lis===881###sois===23772###eois===23784###lif===3###soif===135###eoif===147###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)") && ((UET_mark("lis===881###sois===23773###eois===23776###lif===3###soif===136###eoif===139###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&b>2)	&&(UET_mark("lis===881###sois===23780###eois===23783###lif===3###soif===143###eoif===146###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&b>c))) {
			if (UET_mark("lis===882###sois===23803###eois===23808###lif===4###soif===166###eoif===171###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)") && (UET_mark("lis===882###sois===23803###eois===23808###lif===4###soif===166###eoif===171###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&a+b>d)) {
				if (UET_mark("lis===883###sois===23831###eois===23838###lif===5###soif===194###eoif===201###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)") && (UET_mark("lis===883###sois===23831###eois===23838###lif===5###soif===194###eoif===201###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&c+d-e<0)) {
					if (UET_mark("lis===884###sois===23865###eois===23868###lif===6###soif===228###eoif===231###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)") && (UET_mark("lis===884###sois===23865###eois===23868###lif===6###soif===228###eoif===231###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&a>b)) {
						if (UET_mark("lis===885###sois===23898###eois===23901###lif===7###soif===261###eoif===264###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)") && (UET_mark("lis===885###sois===23898###eois===23901###lif===7###soif===261###eoif===264###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&a>c)) {
							if (UET_mark("lis===886###sois===23935###eois===23975###lif===8###soif===298###eoif===338###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)") && ((((UET_mark("lis===886###sois===23936###eois===23941###lif===8###soif===299###eoif===304###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&a-b>2)	&&(UET_mark("lis===886###sois===23945###eois===23955###lif===8###soif===308###eoif===318###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&4*b-5*c==0))	&&(UET_mark("lis===886###sois===23959###eois===23965###lif===8###soif===322###eoif===328###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&a-c==8))	&&(UET_mark("lis===886###sois===23969###eois===23974###lif===8###soif===332###eoif===337###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&2*c>b))) {
								if (UET_mark("lis===887###sois===24014###eois===24020###lif===9###soif===377###eoif===383###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)") && (UET_mark("lis===887###sois===24014###eois===24020###lif===9###soif===377###eoif===383###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&a+d==e)) {
									if (UET_mark("lis===888###sois===24063###eois===24081###lif===10###soif===426###eoif===444###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)") && ((UET_mark("lis===888###sois===24064###eois===24069###lif===10###soif===427###eoif===432###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&2*b>a)	&&(UET_mark("lis===888###sois===24075###eois===24080###lif===10###soif===438###eoif===443###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)")&&b+c>a))) {
										UET_mark("lis===888###sois===24086###eois===24095###lif===10###soif===449###eoif===458###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)");return 0;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	UET_mark("lis===889###sois===24099###eois===24108###lif===11###soif===462###eoif===471###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\MoreComplexCond(long,long,long,long,long)");return 1;
}


/** Instrumented function Average(double[],double,double,int&,int&) */
double Average(double value[], double min, double max, int& tcnt, int& vcnt){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");UET_fCall++;
	UET_mark("lis===895###sois===24206###eois===24219###lif===2###soif===89###eoif===102###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");double sum=0;
	UET_mark("lis===896###sois===24222###eois===24230###lif===3###soif===105###eoif===113###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");int i=0;
	UET_mark("lis===897###sois===24233###eois===24245###lif===4###soif===116###eoif===128###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");tcnt=vcnt=0;
	while (UET_mark("lis===898###sois===24254###eois===24280###lif===5###soif===137###eoif===163###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)") && ((UET_mark("lis===898###sois===24254###eois===24268###lif===5###soif===137###eoif===151###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)")&&value[i]!=-999)	&&(UET_mark("lis===898###sois===24272###eois===24280###lif===5###soif===155###eoif===163###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)")&&tcnt<100))) {
		UET_mark("lis===900###sois===24289###eois===24296###lif===7###soif===172###eoif===179###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");tcnt++;
		if (UET_mark("lis===901###sois===24303###eois===24332###lif===8###soif===186###eoif===215###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)") && ((UET_mark("lis===901###sois===24303###eois===24316###lif===8###soif===186###eoif===199###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)")&&min<=value[i])	&&(UET_mark("lis===901###sois===24319###eois===24332###lif===8###soif===202###eoif===215###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)")&&value[i]<=max))) {
			UET_mark("lis===903###sois===24343###eois===24357###lif===10###soif===226###eoif===240###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");sum+=value[i];
			UET_mark("lis===904###sois===24362###eois===24369###lif===11###soif===245###eoif===252###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");vcnt++;
		}
		UET_mark("lis===906###sois===24378###eois===24382###lif===13###soif===261###eoif===265###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");i++;
	}
	if (UET_mark("lis===909###sois===24394###eois===24400###lif===16###soif===277###eoif===283###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)") && (UET_mark("lis===909###sois===24394###eois===24400###lif===16###soif===277###eoif===283###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)")&&vcnt>0)) {
		UET_mark("lis===910###sois===24405###eois===24421###lif===17###soif===288###eoif===304###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");return sum/vcnt;
	}
	UET_mark("lis===911###sois===24425###eois===24437###lif===18###soif===308###eoif===320###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\Average(double[],double,double,int&,int&)");return -999;
}


/** Instrumented function twoWhileloop(int,int) */
int twoWhileloop(int m, int n){UET_mark("Calling: D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");UET_fCall++;
	UET_mark("lis===917###sois===24485###eois===24493###lif===2###soif===39###eoif===47###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");int s=0;
	UET_mark("lis===917###sois===24494###eois===24503###lif===2###soif===48###eoif===57###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");int i, j;
	if (UET_mark("lis===918###sois===24513###eois===24523###lif===3###soif===67###eoif===77###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)") && ((UET_mark("lis===918###sois===24513###eois===24516###lif===3###soif===67###eoif===70###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)")&&m>0)	&&(UET_mark("lis===918###sois===24520###eois===24523###lif===3###soif===74###eoif===77###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)")&&n>0))) {
		UET_mark("lis===920###sois===24545###eois===24549###lif===5###soif===99###eoif===103###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");i=1;
		UET_mark("lis===920###sois===24550###eois===24554###lif===5###soif===104###eoif===108###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");j=1;
		while (UET_mark("lis===921###sois===24571###eois===24575###lif===6###soif===125###eoif===129###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)") && (UET_mark("lis===921###sois===24571###eois===24575###lif===6###soif===125###eoif===129###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)")&&i<=m)) {
			while (UET_mark("lis===923###sois===24606###eois===24610###lif===8###soif===160###eoif===164###ifc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)") && (UET_mark("lis===923###sois===24606###eois===24610###lif===8###soif===160###eoif===164###isc===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)")&&j<=n)) {
				UET_mark("lis===925###sois===24655###eois===24663###lif===10###soif===209###eoif===217###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");s=s+i+j;
				UET_mark("lis===926###sois===24686###eois===24692###lif===11###soif===240###eoif===246###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");j=j+1;
			}
			UET_mark("lis===928###sois===24725###eois===24731###lif===13###soif===279###eoif===285###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");i=i+1;
		}
	}
	UET_mark("lis===931###sois===24755###eois===24764###lif===16###soif===309###eoif===318###ins===true###function===D:\\Tool_VNU\\data-test\\Sample_for_R1_2\\test17082021.cpp\\twoWhileloop(int,int)");return s;
}

//
int UET_MAIN()
{
//	cout<<getFare(2, 50);
////	cout<<MathAndEnglishGrade(90, 90);
	return 0;
}





#endif

