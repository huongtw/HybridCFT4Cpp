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
int factorial(int x)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.factorial.367.stub"

    if (x < 1) //x<=1, error
        return 1;
    int res = 2;
    for (int i = 3; i <= x; i++)
        res = res * i;
    return res;
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


char grade(int averageGrade){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.grade.981.stub"

	if(averageGrade>90 && averageGrade<100)
		return 'A';
	else if(averageGrade>80 && averageGrade<90)
		return 'B';
	else if(averageGrade>70 && averageGrade<80)
		return 'C';
	else if(averageGrade>60 && averageGrade<70)
		return 'D';
	else if(averageGrade>0 && averageGrade <60)
		return 'F';
	return 'I';
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

int getFare(int age, int distance)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.getFare.1801.stub"

	int fare;
	//if(age >= 4 && age <= 14)
	if(age > 4 && age < 14)
	{
	    //if(distance > 10)
		if(distance >= 10)
			fare = 130;
		else fare = 100;
	}
	//if(age >= 15)
	if(age > 15)
	{
		if(distance <10 && age >= 60)
			fare = 160;
		else if(distance > 10 && age < 60)
			fare = 250;
			else fare = 200;
	}
	return fare;
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
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.i4_power.2621.stub"

  int k;
  int value;

  if (j<0)
  {
    if (i==1)
    {
      value=1;
    }
    else if (i==0)
    {
//      cerr << "\n";
//      cerr << "I4_POWER - Fatal error!\n";
//      cerr << "  I^J requested, with I = 0 and J negative.\n";
      //exit ( 1 );
      return -1;
    }
    else
    {
      value=0;
    }
  }
  else if (j==0)  //j==0
  {
    if (i>=0) //i==0; add Error
    {
//      cerr << "\n";
//      cerr << "I4_POWER - Fatal error!\n";
//      cerr << "  I^J requested, with I = 0 and J = 0.\n";
      //exit ( 1 );
      return -1;
    }
    else
    {
      value=1;
    }
  }
  else if (j>=1) //j==1, add Error
  {
    value=i;
  }
  else
  {
    value=1;
    for (k=1; k<=j; k++)
    {
      value = value*i;
    }
  }
  return value;
}

//****************************************************************************

//Tinh toan cung hoang dao (Zodiac) va du bao
/*
	intput : date, month
 	output: this function return zodiac given date
*/
int calculateZodiac(int date, int month){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.calculateZodiac.4143.stub"

   int t;
   {

      if (((month==3)&&(date>=21)&&(date<=31))||((month==4)&&(date<=19)))

      {
         cout << "\n\n\t\t\tYour Zodiac sign is ARIES";
         cout << "\n\n 2012 would be a good year overall. You will experience a rise in financial luck and inflows";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 1;
      }

      else if (((month==4)&&(date>=20)&&(date<=30))||((month==5)&&(date<=20))) {
         cout << "\n\n\t\tYour Zodiac sign is TAURUS";
         cout << "\n\n A very eventful year. Career would be on a high growth trajectory and bring in major progress and achievements.";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 2;
      }

      else if (((month==5)&&(date>=21)&&(date<=31))||((month==6)&&(date<=20))) {
         cout << "\n\n\t\tYour Zodiac sign is GEMINI";
         cout << "\n\nA very positive year. Income & professional growth would be immense. You will find the ability to make some very profitable deals now.";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 3;
      }

      else if (((month==6)&&(date>=21)&&(date<=30))||((month==7)&&(date<=22))) {
         cout << "\n\n\t\tYour Zodiac sign is CANCER";
         cout << "\n\nA very eventful year, although negative thoughts and unnecessary pessimism could spoil your spirit and bring in unnecessary tension.";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 4;
      }

      else if (((month==7)&&(date>=23)&&(date<=31))||((month==8)&&(date<=22))) {
         cout << "\n\n\t\tYour Zodiac sign is LEO";
         cout << "\n\nAn exceptional year again. You will see a rise in status and expansion in career this year too. Luck will favor you throughout.";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 5;
      }

      else if (((month==8)&&(date>=23)&&(date<=31))||((month==9)&&(date<=22))) {
         cout << "\n\n\t\tYour Zodiac sign is VIRGO";
         cout << "\n\nA brilliant & positive year, where you will make things happen on your own strength, rather than seeking support of others.";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 6;
      }

      else if (((month==9)&&(date>=23)&&(date<=30))||((month==10)&&(date<=22))) {
         cout << "\n\n\t\tYour Zodiac sign is LIBRA";
         cout << "\n\nA powerful phase will be in operation this month. You will find your role as defined by nature will change and all efforts and activities carried out by you will assume higher importance and effectiveness.";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 7;
      }

      else if (((month==10)&&(date>=23)&&(date<=31))||((month==11)&&(date<=21))) {
         cout << "\n\n\t\tYour Zodiac sign is SCORPIO";
         cout << "\n\nPositive period would continue, although you need to be careful that throwing good money after bad money is not a great idea.";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 8;
      }

      else if (((month==11)&&(date>=22)&&(date<=31))||((month==12)&&(date<=21))) {
         cout << "\n\n\t\tYour Zodiac sign is SAGITTARIUS";
         cout << "\n\n2012 brings in promise and progress. New ideas and cerebral approach to matters will bring in much progress this year. You will be at your creative best till May 2012 and thereafter dynamic activity will take you along.";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 9;
      }

      else if (((month==12)&&(date>=22)&&(date<=30))||((month==1)&&(date<=19))) {
         cout << "\n\n\t\tYour Zodiac sign is CAPRICORN";
         cout << "\n\nA very positive year for you. You would be at your creative best and luck related peak in most of the works you get into.";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 10;
      }

      else if (((month==1)&&(date>=20)&&(date<=31))||((month==2)&&(date<=18))) {
         cout << "\n\n\t\tYour Zodiac sign is AQUARIUS";
         cout << "\n\nA much better year in comparison to 2010 & 2011. You will feel a surge in your luck, productivity and general sense of positive outlook.";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 11;
      }

      else if (((month==2)&&(date>=19)&&(date<=29))||((month==3)&&(date<=20))) {
         cout << "\n\n\t\tYour Zodiac sign is PISCES";
         cout << "\n\nSome amount of struggle and hurdles could come about in life this year. You will have a positive and gainful period till May 2012.";
         cout << "\n\n\t\t Best of luck for Your Future ";
         t = 12;
      }

      else {
         t = -1;
      }

   }

   return t;
}

//****************************************************************************
//GCD(int, int)
/*
	intput : integer number m, n
 	output: return integer number correspond to GCD(m,n)
*/
int GCD(int m, int n)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.GCD.9167.stub"

	if (m<0) m=-m;
	if (n<0) n=-n;
	if (m==0) return n;
	if (n==0) return m;
	while (m!=n)
		if (m>n) m=m-n;
		else n=n-m;
	return m;
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

int Tritype(double i, double j, double k){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.Tritype.10087.stub"
 		// line 1
 //Bi loi trong truong hop j + k = i || k + i = j, ket qua la tam giac Can
 int trityp = 0;								// line 2
 if (i < 0.0 || j < 0.0 || k < 0.0)   			// line 3
 	return 3;									// line 4
 if (i + j <= k || j + k < i || k + i < j) 		// line 5, if (i + j <=k || j + k <= i || k + i <=j)
 	return 3;									// line 6
 if (i > j) trityp = trityp + 1; 				// line 7  if (i == j) trityp = trityp + 1;
 if (i == k) trityp = trityp + 1; 				// line 8
 if (j == k) trityp = trityp + 1; 				// line 9
 if (trityp >=2) 								// line 10
 	trityp = 2;									// line 11
 return trityp;									// line 12
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
char  MathAndEnglishGrade (int Math, int English)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.MathAndEnglishGrade.11329.stub"

//Loi ta cac truong hop Math=50, math=80, English=60, English=90
	//if(Math>=50 && English>=60)
	if(Math>50 && English>60)
   	{
		//if(Math>=80 || English>=90)
		if(Math>80 || English>90)
		{
			return 'B';
		}
		else
		{
			if (Math + English>=180)
			{
				return 'A';
			}
			else
			{
		   		return 'C';
			}
		}
    }
    return 'D';
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

int isTriangle(int a, int b, int c){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.isTriangle.12131.stub"

	if((a<=b+c) && (b<=a+c) && (c < a+b)){
		return 1;
	}
	else return 0;
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

int leapYear(int year){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.leapYear.12785.stub"
 // line 1
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 != 0)){
		return 1; // line 3
	}             // line 4
	return 0;	  // line 5

}
//****************************************************************************

/*
	input: x,minn,maxx
	Should return  probability density function of the continuous uniform distribution
	if maxx<minn or maxx=minn or x = maxx or x = minn the function may will return unexpected result
*/

float PDF(int x, int minn, int maxx){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.PDF.13264.stub"

	if(x <= minn || x >= maxx){
		return 0;
	}
	return 1/(maxx-minn);
}

//****************************************************************************
/*
 	input: interger number a,b,c,d
 	output: float number
 Error:
 	Function may will return unexpected result if a>0
 */

float foo(int a, int b, int c, int d)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.foo.13590.stub"

	float e;
	if(a >= 0) return 0; //Cay loi a==0 thanh a>=0. If a>0 Then UnExpected output
	int x=0;
	if((a==b)||(c==d))
		x=1;
	e=1/x;
	return e;
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
long ConvertDateToNumber(int day, int month, int year)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.ConvertDateToNumber.14161.stub"

int ngay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
long s, i;
/*

*/
s=0;
if (year > 1900)
{
	s=s+day;
	for (i=0; i < month; i++) s=s+ngay[i];
}
else
	if (year>1900)
	{
		s=s+day;
		s= s+(year-1900)*365;
		for (i=1900; i <= year; i++)
			if (((i%4==0)&&(i%100!=0))||(i%400==0)) s=s+1;
		for (i=0; i < month; i++)
		{
			s= s+ngay[i];
			if (((i%4==0)&&(i%100!=0)||(i%400==0))&&(i==2)) s=s+1;
		}
	}
return s;
}

//****************************************************************************
/*
 	input: hour, minute, second
 	output: Total seconds from 0:0:0 to hour:minute:second
  Error:
 	Cay loi tai dieu kien if (year==1990) thanh if (year>1900)
    Khi Year>1900 thi cho ket qua khong mong muon, cau lenh if(year>1900 khong thuc hien
 */

long CountSecond(int hour, int minute, int second)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CountSecond.15006.stub"

long s;
//Tinh tong so giay tinh tu luc 0:0:0 den hour:minute:second
//if (hour>=0 && minute>=0&&second>=0&&hour<=24&&minute<=60&&second<=60) da bo het dau bang = trong cac dieu kien don
s=-1;
if (hour>0 && minute>0 && second>0 && hour<24 && minute<60 && second<60)
	s=hour*3600+minute*60+second;
return s;
}

//****************************************************************************

/*
Kiem tra 3 so nhap vao co tao thanh ngay thang hop le khong
 	input: day, month, year
 	output: return 1 if valid date; return 0 if invalid date
   Error:         replace if (day>=1 && month>=1 && year>=1 && day<=31 && month<=12 && year<=2020) --> 6 loi
   by if (day>1 && month>1 && year>1 && day<31 && month<12 && year<2020)
 */
 int CheckValidDate(int day, int month, int year){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CheckValidDate.15803.stub"
 //Tuong doi cham
 //if (day>=1 && month>=1 && year>=1 && day<=31 && month<=12 && year<=2020) --> 6 loi
if (day>1 && month>1 && year>1 && day<31 && month<12 && year<2020){
   if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) && (day<=31))  return 1;
   if((month==4 || month==6 || month==9 ||month==11) && (day<=30)) return 1;
   if((month==2) && (day<28))  return 1;   // day<=28
   if((month==2) && (day==29) && (year%4==0)&&(year%400 != 0)) return 1;
}
return 0;
}
//****************************************************************************
/*
Kiem tra 3 so nhap vao co tao thanh thoi gia hop le khong
 	input: hour, minute, second
 	output: return 1 if valid time; return 0 if invalid time
   Error: replace if ((hour>=0 && hour<=23) && (minute>=0 && minute<=59) && (second>=0 && second<=59))  bo tat ca dau bang "=" trong dieu kien don
   by if (hour>0 && hour<23 && minute>0 && minute<59 && second>0 && second<59)
 */

int CheckValidTime(int hour, int minute, int second)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CheckValidTime.16837.stub"

if (hour>0 && hour<23 && minute>0 && minute<59 && second>0 && second<59) return 1;
return 0;
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

int divisionTest(int a, int b){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.divisionTest.17384.stub"

	int x = a+b;
	int y = x +10;
	if(x<10){
		return 1/x;
	}
	else return 1/y;
}
//****************************************************************************

/*
	input: month, day, year
	output: the next date

*/

long NextDate(int year, int month, int day)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.NextDate.17647.stub"

int ngay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
day=day+1;
while (day>365)
{
	 year=year+1;
	if ((year%4==0 && year%100!=0) || (year %400==0))
		day=day-366;
	else
		 day=day-365;
 }

while (day>ngay[month])
 {
	 day=day-ngay[month];
	month=month+1;
 while (month>12)
 {
	year=year+1;
	month=month%12;
 }
}
 return 0;
}

//****************************************************************************

/*
	input: x, y
	This function is created for loop testing.
*/
int simpleWhileTest(int x, int y){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.simpleWhileTest.18196.stub"

	while(x < y){
		x+=1;
	}
	return 1;
}
//****************************************************************************

/*
	input: m, n
	This function is created for loop testing.
*/
int twoForloop(int m, int n)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.twoForloop.18425.stub"

    int s=0;
    if (m>0 && n>0)
        for (int i=1; i<=m; i++)
            for(int j=1; j<=n; j++)
             s=s+i+j;
    return s;
}

//****************************************************************************


int testBoundaryValue(int x, int y)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testBoundaryValue.18691.stub"

	if (x > 1 && (y > 3 || (y < 5)))
	{
		x = y + 2;
	}
	else if (x < 0 && y < 2)
	{
		x = y - 2;
	}
	else
	{
		x = y;
	}

	return x;
}

void swap(int *xp, int *yp)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.swap.18882.stub"

    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


    //Stein's Algorithm for finding GCD
    //https://www.geeksforgeeks.org/steins-algorithm-for-finding-gcd/
    int gcd0(int a, int b)
    {AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.gcd0.19090.stub"

        // GCD(0, b) == b; GCD(a, 0) == a,
           GCD(0, 0) == 0 ;
        if (a == 0)
            return b;
        if (b == 0)
            return a;

        /*Finding K, where K is the
          greatest power of 2
          that divides both a and b. */
        int k;
        for (k = 0; ((a | b) & 1) == 0; ++k)
        {
            a >>= 1;
            b >>= 1;
        }

        /* Dividing a by 2 until a becomes odd */
        while ((a & 1) == 0)
            a >>= 1;

        /* From here on, 'a' is always odd. */
        do
        {
            /* If b is even, remove all factor of 2 in b */
            while ((b & 1) == 0)
                b >>= 1;

            /* Now a and b are both odd.
               Swap if necessary so a <= b,
               then set b = b - a (which is even).*/
            if (a > b)
                //swap(a, b); // Swap u and v.
                {
                    int tg=a; a=b; b=tg; //Huong sua
                }

            b = (b - a);
        }while (b != 0);

        /* restore common factors of 2 */
        return a << k;
    }

// Driver code
//https://www.geeksforgeeks.org/selection-sort/

void selectionSort(int arr[], int n)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.selectionSort.20327.stub"

    int i, j, min_idx, temp;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
}
// A function to implement bubble sort
//https://www.geeksforgeeks.org/bubble-sort/

void bubbleSort(int arr[], int n)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.bubbleSort.20912.stub"

   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int arr[], int low, int high)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.partition.21384.stub"

    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* Function to sort an array using insertion sort*/
//https://www.geeksforgeeks.org/insertion-sort/

void insertionSort(int arr[], int n)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.insertionSort.21949.stub"

    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.merge.22478.stub"

    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.heapify.23632.stub"

    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.heapSort.24269.stub"

    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}


// The main function that sort
// the given string arr[] in
// alphabatical order
void countSort(char arr[])
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.countSort.24748.stub"

	int RANGE = 10;
    // The output character array
    // that will have sorted arr
    char output[strlen(arr)];

    // Create a count array to store count of inidividul
    // characters and initialize count array as 0
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));

    // Store count of each character
    for(i = 0; arr[i]; ++i)
        ++count[arr[i]];

    // Change count[i] so that count[i] now contains actual
    // position of this character in output array
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i-1];

    // Build the output character array
    for (i = 0; arr[i]; ++i)
    {
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }

    /*
    For Stable algorithm
    for (i = sizeof(arr)-1; i>=0; --i)
    {
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }

    For Logic : See implementation
    */

    // Copy the output array to arr, so that arr now
    // contains sorted characters
    for (i = 0; arr[i]; ++i)
        arr[i] = output[i];
}

//https://www.geeksforgeeks.org/linear-search/
int linearSearch(int arr[], int n, int x) 
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.linearSearch.25915.stub"

    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

/* Returns index of x if present,  else returns -1 */
int fibMonaccianSearch(int arr[], int x, int n)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.fibMonaccianSearch.26128.stub"

    /* Initialize fibonacci numbers */
    int fibMMm2 = 0;   // (m-2)'th Fibonacci No.
    int fibMMm1 = 1;   // (m-1)'th Fibonacci No.
    int fibM = fibMMm2 + fibMMm1;  // m'th Fibonacci

    /* fibM is going to store the smallest Fibonacci
       Number greater than or equal to n */
    while (fibM < n)
    {
        fibMMm2 = fibMMm1;
        fibMMm1 = fibM;
        fibM  = fibMMm2 + fibMMm1;
    }

    // Marks the eliminated range from front
    int offset = -1;

    /* while there are elements to be inspected. Note that
       we compare arr[fibMm2] with x. When fibM becomes 1,
       fibMm2 becomes 0 */
    while (fibM > 1)
    {
        // Check if fibMm2 is a valid location
        int i = min(offset+fibMMm2, n-1);

        /* If x is greater than the value at index fibMm2,
           cut the subarray array from offset to i */
        if (arr[i] < x)
        {
            fibM  = fibMMm1;
            fibMMm1 = fibMMm2;
            fibMMm2 = fibM - fibMMm1;
            offset = i;
        }

        /* If x is greater than the value at index fibMm2,
           cut the subarray after i+1  */
        else if (arr[i] > x)
        {
            fibM  = fibMMm2;
            fibMMm1 = fibMMm1 - fibMMm2;
            fibMMm2 = fibM - fibMMm1;
        }

        /* element found. return index */
        else return i;
    }

    /* comparing the last element with x */
    if(fibMMm1 && arr[offset+1]==x)return offset+1;

    /*element not found. return -1 */
    return -1;
}

//https://www.geeksforgeeks.org/interpolation-search/
// If x is present in arr[0..n-1], then returns
// index of it, else returns -1.
int interpolationSearch(int arr[], int n, int x)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.interpolationSearch.27874.stub"

    // Find indexes of two corners
    int lo = 0, hi = (n - 1);

    // Since array is sorted, an element present
    // in array must be in range defined by corner
    while (lo <= hi && x >= arr[lo] && x <= arr[hi])
    {
        if (lo == hi)
        {
            if (arr[lo] == x) return lo;
            return -1;
        }
        // Probing the position with keeping
        // uniform distribution in mind.
        int pos = lo + (((double)(hi - lo) /
            (arr[hi] - arr[lo])) * (x - arr[lo]));

        // Condition of target found
        if (arr[pos] == x)
            return pos;

        // If x is larger, x is in upper part
        if (arr[pos] < x)
            lo = pos + 1;

        // If x is smaller, x is in the lower part
        else
            hi = pos - 1;
    }
    return -1;
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

int Bsearch( int A[10], int elem)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.Bsearch.29270.stub"

  int low, high, mid, found ;

  low = 0 ;
  high = 9 ;
  found = 0 ;
  while( ( high > low ) )                     /* line 18 */
    { 
      mid = (low + high) / 2 ;
      if( elem == A[mid] )                    /* line 21 */
	found = 1;
      if( elem > A[mid] )                     /* line 23 */
        low = mid + 1 ;
      else
        high = mid - 1;
    }  
  mid = (low + high) / 2 ;

  if( ( found != 1)  && ( elem == A[mid]) )   /* line 30 */
    found = 1; 

  return found ;
}

//https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/
int fibonaci(int n)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.fibonaci.29890.stub"

  /* Declare an array to store Fibonacci numbers. */
  int f[n+2];   // 1 extra to handle case, n = 0
  int i;

  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
  }

  return f[n];
}


/* This function returns median of ar1[] and ar2[].
Assumption in this function:
Both ar1[] and ar2[] are sorted arrays */
int getMedian(int ar1[], int ar2[], int n, int m)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.getMedian.30408.stub"

    int i = 0; /* Current index of input array ar1[] */
    int j = 0; /* Current index of input array ar2[] */
    int count;
    int m1 = -1, m2 = -1;

    // Since there are (n+m) elements,
    // There are following two cases
    // if n+m is odd then the middle
    //index is median i.e. (m+n)/2
    if((m + n) % 2 == 1) {
        for (count = 0; count <= (n + m)/2; count++) {
            if(i != n && j != m){
            m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
            }
            else if(i < n){
            m1 = ar1[i++];
            }
            // for case when j \le m,
            else{
            m1 = ar2[j++];
            }
        }
        return m1;
    }

    // median will be average of elements
    // at index ((m+n)/2 - 1) and (m+n)/2
    // in the array obtained after merging ar1 and ar2
    else {
        for (count = 0; count <= (n + m)/2; count++) {
            m2 = m1;
            if(i != n && j != m){
            m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
            }
            else if(i < n){
            m1 = ar1[i++];
            }
            // for case when j \le m,
            else{
            m1 = ar1[j++];
            }
        }
        return (m1 + m2)/2;
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

int tritype0(int i, int j, int k){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.tritype0.32599.stub"

  int type_code;
  if ((i == 0) || (j == 0) || (k == 0)) type_code = 4;     /* line 14 */
  else {
    type_code = 0;
    if (i == j) type_code = type_code + 1;                 /* line 17 */
    if (i == k) type_code = type_code + 2;                 /* line 18 */
    if (j == k) type_code = type_code + 3;                 /* line 19 */
    if (type_code == 0){                                   /* line 20 */
      if ((i+j <= k) || (j+k <= i) || (i+k <= j))          /* line 21 */
	type_code = 4;
      else
	type_code = 1;
      }
    else if (type_code > 3) type_code = 3;                 /* line 26 */
    else if ((type_code == 1) && (i+j > k)) type_code = 2; /* line 27 */
    else if ((type_code == 2) && (i+k > j)) type_code = 2; /* line 28 */
    else if ((type_code == 3) && (j+k > i)) type_code = 2; /* line 29 */
    else type_code = 4;
    }
  return type_code;
}

//http://pathcrawler-online.com:8080/#
//Example 5
 /* Should copy all the elements
   of ordered arrays t1 and t2
   into the ordered array t3 */

void Merge(int t1[3], int t2[3], int t3[6]) {AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.Merge.33691.stub"


  int i = 0, j = 0, k = 0 ;

  while (i < 3 && j < 3) { // line 09
    if (t1[i] < t2[j]) {   // line 10
      t3[k] = t1[i];
      i++;
    }
    else {
      t3[k] = t2[j];
      j++;
    }
    k++ ;
  }
  while (i < 3) {          // line 20
    t3[k] = t1[i];
    i++;
    k++;
  }
  while (j < 3) {          // line 25
    t3[k] = t2[j];
    j++;
    k++;
  }
}

           
 int leapYear1(int year) {AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.leapYear1.34145.stub"

  if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1; //leap year
            else
                return 0; //not leap year
        }
        else
            return 1;
    }
    else
        return 0;
}


//http://pathcrawler-online.com:8080/#
//ExampleUnit
  int uninit_var(int a[3], int b[3]) {AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.uninit_var.34510.stub"

  int i, k;
  for(i=0; i<2; i++) {     // line 3
      if(a[i] == 0)        // line 4
	return 0;
      if(a[i] != a[i+1])   // line 6
        k = 0;
      else
        if(k == 2)         // line 9
	  return 0;
      while(b[k] != a[i])  // line 11
          if(k == 2)       // line 12
	    return 0;
          else
            k++;
      }
  return 1;
}

//http://pathcrawler-online.com:8080/#
//Example 15

  /* compares (with respect to the lexicographic order) the subarrays
with the first n elements of given arrays t1 and t2,
returns  0 if the subarrays are equal,
         1 if the subarray in t1 is greater than in t2,
        -1 if the subarray in t2 is greater than in t1
*/

int ArrayCmp(int n, int* t1, int* t2) {AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.ArrayCmp.35262.stub"

  int i;
  for (i = 0; i < n; i++) {   /* line 10 */
    if (t1[i] > t2[i])         /* line 11 */
      return -1;
    else if (t1[i] < t2[i])    /* line 13 */
      return 1;
  }
  return 0;
}

    
//http://pathcrawler-online.com:8080/#
//Example Cross
	//Cay loi: if(x < 1)  da them dau "="
int spec_f(int x){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.spec_f.35611.stub"
 
  if(x<=1)           // line 10
    x = 2*(x + 1); 
  else 
    x = 2*x; 
  return x; 
} 

int TriTangle2(int a, int b, int c)//sach, khong duoc
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.TriTangle2.35730.stub"

//Phan loai tam giac, khong co dieu kien don lien quan den tham so dau vao
int  match;
match = 0;
if(a == b) //{1}
	match = match + 1; //{2}
if(a == c) //{3}
	match = match + 2; //{4}
if(b == c) //{5}
	match = match + 3; //{6}
if(match == 0) //{7}
	if((a+b) <= c) //{8}
		return 0; //{12.1}
	else if((b+c) <= a) //{9}
				return 0; //{12.2}
			else if((a+c) <= b) //{10}
					return 0;// {12.3 Khong la TG
				else return 1;// {11} TG Thuong
else
	if(match == 1) //{13}
		if((a+c) <= b) //{14}
			return 0; //{12.4}
		else return 2; //{15.1}
	else
		if(match == 2) //{16}
			if((a+c) <= b) //{17}
				return 0; //{12.5}
			else return 2;// {15.2}
		else
			if(match == 3) //{18}
				if((b+c) <= a) //{19}
					return 0; //{12.6}
				else return 1; //{15.3}
			else return 3; //{20}
				return 0;
}//the end.

//Sach thay Hung
double average(double value[], double min, double max, int& tcnt, int& vcnt) //sach
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.average.36654.stub"

	double sum=0;
	int i=0;
	tcnt=vcnt=0;
	while(value[i]!=-999 && tcnt<100)
	{
		tcnt++;
		if(min<=value[i]&& value[i]<=max)
		{
			sum+=value[i];
			vcnt++;
		}
		i++;
	}
	
	if(vcnt>0)
		return sum/vcnt;
		return -999;
}

int multiConditionTest(int x){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.multiConditionTest.36979.stub"

	if(x<0){
		if(x>-10){
			if(x>-5){
				return 1;
			}
			else if(x<=-5 && x>=-8){
				return 2;
			}
			else return 3;
		}
		else return -1;
	}
	else if(x>0&&x<100){
		if(x<50){
			if(x<20){
				return 4;
			}
			else return 5;
		}
		else if(x>=50&&x<80){
			if(x==60) return 6;
			else return 7;
		}
		else return 8;
	}
	else if(x==101){
		return 9;
	}
	else return x;
}

float distanceTest(float x){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.distanceTest.37418.stub"

	if(x>1){
		if(x<1.001){
			if(x<1.00001){
				return 1;
			}
			else return 2;
		}
		else return 3;
	}
	else if(x<=1 && x>=0.999){
		return 4;
	}
	return 5;
}

double smallIntervalTest(double x){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.smallIntervalTest.37625.stub"

	if(x>1.0){
		if(x>2.00001 && x<2.000015){
			return 1;
		}
		else if(x<=2.00001 && x>=1.9999){
			return 2;
		}
		else return 3;
	}
	return 4;
}
int mmin(int a, int b){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.mmin.37816.stub"

	return 1;
}
int gcd3(int a, int b)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.gcd3.37856.stub"

	int temp;

	while (b > 0) {
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}


struct Date{
	int date;
	int month;
	int year;
};

int test2(Date Date){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.test2.38037.stub"

	if(Date.date<3){
		return 1;
	}
	else return 2;
}
//Tinh so ngay trong mot khoang thoi gian tu ngay born den ngay today
Date calculateAge0(Date born, Date today)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.calculateAge0.38188.stub"

	int x, y, z;
	Date result;

	int date = today.date;
	int month = today.month;
	int year = today.year;

	int date1 = born.date;
	int month1 = born.month;
	int year1 = born.year;

	x = ((year) - (year1 + 1));
	{
		if ((month>=month1) && (date>=date1)) {
			{
				y = (month - month1);
				x = x + 1;
				z = (date - date1);
			}
		} else if (((month>month1) && (date<date1)) && ((month==5)  || (month==7) || (month==10)  || (month==12))) {
			{
				y = ((month - month1) - 1);
				x = x + 1;
				z = ((30 - date1) + date);
			}
		} else if (((month>month1) && (date<date1)) && ((month==4) || (month==1) || (month==2) || (month==6) || (month==8) || (month==9) || (month==11))) {
			{
				y = ((month - month1) - 1);
				x = x + 1;
				z = ((31 - date1) + date);
			}
		}

		else if ((month>month1) && (date<date1) && (month==3)) {
			{
				y = ((month - month1) - 1);
				x = x + 1;
				z = ((28 - date1) + date);
			}
		}

		else if (((month==month1) && (date<date1)) && ((month==1) || (month==2) || (month==4)  || (month==6) || (month==8) || (month==9) || (month==11))) {
			{
				y = 11;
				z = ((31 - date1) + date);
			}
		}

		else if (((month==month1) && (date<date1)) && ((month==5) || (month==7) || (month==10)  || (month==12))) {
			{
				z = ((30 - date1) + date);
			}
		}

		else if (month==month1 && date<date1 && month==3) {
			{
				z = ((28 - date1) + date);
			}
		}

		else if (((month<month1) && (date>date1)) && ((month==1) || (month==3) || (month==5)  || (month==7) || (month==8) || (month==10) || (month==12))) {
			{
				y = ((12 - month1) + month);
				z = date - date1;
			}
		}

		else if (((month<month1) && (date>date1)) && ((month==4) || (month==6) || (month==9)  || (month==11))) {
			{
				y = ((12 - month1) + month);
				z = date - date1;
			}
		}

		else if ((month<month1) && (date>date1) && (month==2)) {
			{
				y = ((12 - month1) + month);
				z = date - date1;
			}
		}

		else if (((month<month1) && (date<date1)) && ((month==1) || (month==2) || (month==4)  || (month==6) || (month==8) || (month==9) || (month==11))) {
			{
				y = ((12 - month1) + month - 1);
				z = ((31 - date1) + date);
			}
		}

		else if (((month<month1) && (date<date1)) && ((month==5) || (month==7) || (month==10)  || (month==12))) {
			{
				y = ((12 - month1) + month - 1);
				z = ((30 - date1) + date);
			}
		} else if ((month<month1) && (date<date1) && (month==3)) {
			{
				y = ((12 - month1) + month - 1);
				z = ((28 - date1) + date);
			}
		}

		else {
			x = y = z = -1;
		}
	}

	result.date = z;
	result.month = y;
	result.year = x;

	return result;
}
//Tinh toan cung hoang dao (Zodiac) va du bao
int calculateZodiac2(Date born){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.calculateZodiac2.40974.stub"


	int date1 = born.date;
	int month1 = born.month;
	int year1 = born.year;

	int t;

	{

		if (((month1==3) && (date1>=21) && (date1<=31)) || ((month1==4) && (date1<=19)))

		{
			cout << "\n\n\t\t\tYour Zodiac sign is ARIES";
			cout << "\n\n 2012 would be a good year overall. You will experience a rise in financial luck and inflows";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 1;
		}

		else if (((month1==4) && (date1>=20) && (date1<=30)) || ((month1==5) && (date1<=20))) {
			cout << "\n\n\t\tYour Zodiac sign is TAURUS";
			cout << "\n\n A very eventful year. Career would be on a high growth trajectory and bring in major progress and achievements.";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 2;
		}

		else if (((month1==5) && (date1>=21) && (date1<=31)) || ((month1==6) && (date1<=20))) {
			cout << "\n\n\t\tYour Zodiac sign is GEMINI";
			cout << "\n\nA very positive year. Income & professional growth would be immense. You will find the ability to make some very profitable deals now.";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 3;
		}

		else if (((month1==6) && (date1>=21) && (date1<=30)) || ((month1==7) && (date1<=22))) {
			cout << "\n\n\t\tYour Zodiac sign is CANCER";
			cout << "\n\nA very eventful year, although negative thoughts and unnecessary pessimism could spoil your spirit and bring in unnecessary tension.";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 4;
		}

		else if (((month1==7) && (date1>=23) && (date1<=31)) || ((month1==8) && (date1<=22))) {
			cout << "\n\n\t\tYour Zodiac sign is LEO";
			cout << "\n\nAn exceptional year again. You will see a rise in status and expansion in career this year too. Luck will favor you throughout.";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 5;
		}

		else if (((month1==8) && (date1>=23) && (date1<=31)) || ((month1==9) && (date1<=22))) {
			cout << "\n\n\t\tYour Zodiac sign is VIRGO";
			cout << "\n\nA brilliant & positive year, where you will make things happen on your own strength, rather than seeking support of others.";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 6;
		}

		else if (((month1==9) && (date1>=23) && (date1<=30)) || ((month1==10) && (date1<=22))) {
			cout << "\n\n\t\tYour Zodiac sign is LIBRA";
			cout << "\n\nA powerful phase will be in operation this month. You will find your role as defined by nature will change and all efforts and activities carried out by you will assume higher importance and effectiveness.";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 7;
		}

		else if (((month1==10) && (date1>=23) && (date1<=31)) || ((month1==11) && (date1<=21))) {
			cout << "\n\n\t\tYour Zodiac sign is SCORPIO";
			cout << "\n\nPositive period would continue, although you need to be careful that throwing good money after bad money is not a great idea.";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 8;
		}

		else if (((month1==11) && (date1>=22) && (date1<=31)) || ((month1==12) && (date1<=21))) {
			cout << "\n\n\t\tYour Zodiac sign is SAGITTARIUS";
			cout << "\n\n2012 brings in promise and progress. New ideas and cerebral approach to matters will bring in much progress this year. You will be at your creative best till May 2012 and thereafter dynamic activity will take you along.";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 9;
		}

		else if (((month1==12) && (date1>=22) && (date1<=30)) || ((month1==1) && (date1<=19))) {
			cout << "\n\n\t\tYour Zodiac sign is CAPRICORN";
			cout << "\n\nA very positive year for you. You would be at your creative best and luck related peak in most of the works you get into.";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 10;
		}

		else if (((month1==1) && (date1>=20) && (date1<=31)) || ((month1==2) && (date1<=18))) {
			cout << "\n\n\t\tYour Zodiac sign is AQUARIUS";
			cout << "\n\nA much better year in comparison to 2010 & 2011. You will feel a surge in your luck, productivity and general sense of positive outlook.";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 11;
		}

		else if (((month1==2) && (date1>=19) && (date1<=29)) || ((month1==3) && (date1<=20))) {
			cout << "\n\n\t\tYour Zodiac sign is PISCES";
			cout << "\n\nSome amount of struggle and hurdles could come about in life this year. You will have a positive and gainful period till May 2012.";
			cout << "\n\n\t\t Best of luck for Your Future ";
			t = 12;
		}

		else {
			t = -1;
		}

	}

	return t;
}


/*
Tinh so ngay la khoang thoi gian tu ngay 01/01/1900 den ngay day/month/year
Cay loi tai dieu kien if (year==1990) thanh if (year>1900)

*/
long ConverDateToNumber0(int day, int month, int year)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.ConverDateToNumber0.45776.stub"

int ngay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
long s, i;
s=0;
if (year == 1900)
{
	s=s+day;
	for (i=0; i < month; i++) s=s+ngay[i];
}
else
	if (year>1900)
	{
		s=s+day;
		s= s+(year-1900)*365;
		for (i=1900; i <= year; i++)
			if (((i%4==0)&&(i%100!=0))||(i%400==0)) s=s+1;
		for (i=0; i < month; i++)
		{
			s= s+ngay[i];
			if (((i%4==0)&&(i%100!=0)||(i%400==0))&&(i==2)) s=s+1;
		}
	}
return s;
}

long CountSecond1(int hour, int minute, int second)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CountSecond1.46270.stub"

//Tinh tong so giay tinh tu luc 0:0:0 den hour:minute:second
//if (hour>=0 && minute>=0&&second>=0&&hour<=24&&minute<=60&&second<=60) da bo het dau bang = trong cac dieu kien don
long s;
s=-1;
if (hour > 0 && minute > 0 && second > 0 && hour < 24 && minute < 60 && second < 60)
	s=hour*3600+minute*60+second;
return s;
}


//Tang them 1 giay
//Ket qua tra ve la tong so giay tinh tu luc 0h
long PlusOneSecond0(int hour, int minute, int second)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.PlusOneSecond0.46728.stub"

second=second+1;
if (second>=60) {
	second=second-60;
	minute=minute+1;
	if (minute>=60) {
		minute=minute-60;
		hour=hour+1;
		if (hour>=24)
			hour=hour-24;
	}
}
return 0;
}


//Tang them 1 giay
//Ket qua tra ve la tong so giay tinh tu luc 0h
long PlusOneSecond(int hour, int minute, int second)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.PlusOneSecond.47048.stub"

int s=second;
s=s+1;
if (s > 60) {     //s>=60
	second=s-60;
	minute=minute+1;
	if (minute > 60) { //minute>=60
		minute=minute-60;
		hour=hour+1;
		if (hour > 24) //minute>=24
			hour=hour-24;
	}
}
return hour*3600+minute*60+second;
}


//Kiem tra 3 so nhap vao co tao thanh thoi gian hop le khong
int CheckValidTime0(int hour, int minute, int second)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CheckValidTime0.47420.stub"
 //Tuong doi cham
if (hour>=0 && hour<=23 && minute>=0 && minute<=59 && second>=0 && second<=59) return 1;
return 0;
}


int CFGIfElse(int x){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.CFGIfElse.47603.stub"


	// Simple if
	if (x < 0)
		x = -x;

	// If..else
	if (x < 10)
		x++;
	else
		x--;

	// Nested if else
	if (x == 11)
		x = 1;
	else if (x == 12)
		x = 2;
	else
		x--;

	// Nested if else
	if (x > 20){
		if (x > 30)
			x = x + 2;
		else
			x = x - 2;
	}

	return x;
}


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
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.ch_eqi.47928.stub"

  bool value;

  if ( 97 <= ch1 && ch1 <= 122 )
  {
    ch1 = ch1 - 32;
  }
  if ( 97 <= ch2 && ch2 <= 122 )
  {
    ch2 = ch2 - 32;
  }

  value = ( ch1 == ch2 );

  return value;
}

//D:\OneDrive - Cao Dang Su Pham Trung Uong\NCS\ava\data-test\tsdv\Sample_for_R1_4

//Da them 4 loi
//Loi tai age=4,14,15, distance=10
int getFare1(int age, int distance)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.getFare1.48839.stub"

//Da them 4 loi
//Loi tai age=4,14,15, distance=10
	int fare;
	if(age > 4 && age < 14)  //if(age >= 4 && age <= 14), 2 loi
	{
		if(distance >= 10)	//if(distance > 10), 1 loi
			fare = 130;
		else fare = 100;
	}
	if(age >  15) //(age >= 15) , 1 loi
	{
		if(distance <10 && age >= 60)
			fare = 160;
		else if(distance > 10 && age < 60)
			fare = 250;
			else fare = 200;
	}
	return fare;
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
int bmi(float b_w, float he)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.bmi.49472.stub"

	double c;
	c = (b_w / (he * he / 10000));

	{
		if (c < 19) {
			return 0;
		}

		else if (c >= 19 && c < 25) {
			return 1;

		}

		else if (c >= 25 && c < 30) {
			return 2;
		}

		else if (c >= 30) {
			return 3;

		} else {
			// (infeasible)
			return -1;
		}
	}
}


int testme(int a, int b)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme.49806.stub"

//ca BVTG va new BUTG deu tim 4 test bien
int s=0;
if(a>0)
    if (b>0)
    s=a+b;
    else
     if (b<-10)
        s=a-b;
       else s=a*b;
else
    if (a<-50)
        s=a+b;
 return s;
}

int testme1(int a, int b)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme1.50041.stub"

//ca BVTG va new BVTG deu tim 4 test bien
int s=0;
if(a>10)
    if (b>0)
    s=a+b;
    else
        s=a*b;
else
      s=a-b;
 return s;
}
int testme2(int a, int b)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme2.50221.stub"

//ca BVTG va new BUTG deu tim 4 test bien
int s=0;
if(a>10 && b>0) s=a+b;
   s=a-b;
 return s;
}

int testme3(int a)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme3.50356.stub"

//BVTG-KSE cho 3 test 9, 10, 11
//new BVTG cho 2 test min, max  ==> ???
int s=0;
if(a==10) s=a;
  return s;
}
int testme4(int a)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme4.50495.stub"

//BVTG-KSE cho 3 test 9, 10, 11
//new BVTG cho 5 test min, 9, 10, 11, max  ==> OK
int s=0;
if(a>10) s=a;
  return s;
}
int testme5(int a)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme5.50643.stub"

//BVTG-KSE cho 3 test 9, 10, 11
//new BVTG cho 5 test min, 9, 10, 11, max  ==> OK
int s=0;
if(a>=10) s=a;
  return s;
}
int testme6(int a)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme6.50792.stub"

//BVTG-KSE cho 3 test 9, 10, 11
//new BVTG cho 5 test min, 9, 10, 11, max  ==> OK
int s=0;
if(a<10) s=a;
  return s;
}
int testme7(int a)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme7.50940.stub"

//BVTG-KSE cho 3 test 9, 10, 11
//new BVTG cho 5 test min, 9, 10, 11, max  ==> OK
int s=0;
if(a!=10) s=a;
  return s;
}
int testme8(int a)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.testme8.51089.stub"

//BVTG-KSE cho 3 test 9, 10, 11
//new BVTG cho 5 test min, 9, 10, 11, max  ==> OK
int s=0;
if(a<=10) s=a;
  return s;
}
float ForTest(int x)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.ForTest.51240.stub"

    int t,s=0;
    if (x>1){
    for (int i=1; i<=x; i++)
        {
        s=s+i;
        if (x>5)
            s=0;
        }
     t=1/s;
    }
    else
    t=0;
return t;
}


/*
	input: a, b
	output: This function return Greatest common divisor of 2 numbers.
*/
int gcd2(int a, int b)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.gcd2.51547.stub"

	int temp;

	while (b > 0) {
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}
/*
	input: a array, min , maxx, tcnt, vcnt
	output: caculate averge value of the first 100 elements in given array, which is in [min, max].

*/

double Average(double value[], double min, double max, int& tcnt, int& vcnt) //sach
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.Average.51821.stub"

	double sum=0;
	int i=0;
	tcnt=vcnt=0;
	while(value[i]!=-999 && tcnt<100)
	{
		tcnt++;
		if(min<=value[i]&& value[i]<=max)
		{
			sum+=value[i];
			vcnt++;
		}
		i++;
	}

	if(vcnt>0)
		return sum/vcnt;
		return -999;
}


int twoWhileloop(int m, int n)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.twoWhileloop.52147.stub"

    int s=0; int i, j;
    if (m>0 && n>0)
        {
        i=1; j=1;
        while (i<=m)
        {
          while (j<=n)
                  {
                     s=s+i+j;
                     j=j+1;
                  }
          i=i+1;
        }
        }
return s;
}
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
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.i4_log_10.52470.stub"

  int i_abs;
  int ten_pow;
  int value;

  if ( i == 0 )
  {
    value = 0;
  }
  else
  {
    value = 0;
    ten_pow = 10;

    //i_abs = abs ( i );
    if (i < 0)
    	i_abs = -i;
    else
    	i_abs = i;

    while ( ten_pow <= i_abs )
    {
      value = value + 1;
      ten_pow = ten_pow * 10;
    }

  }

  return value;
}
char  MathAndEnglishGrade0 (int Math, int English)
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.MathAndEnglishGrade0.53835.stub"

//Loi ta cac truong hop Math=50, math=80, English=60, English=90
	//if(Math>=50 && English>=60)
	if(Math>=50 && English>=60)
   	{
		//if(Math>=80 || English>=90)
		if(Math>=80 || English>=90)
		{
			return 'B';
		}
		else
		{
			if (Math + English>=180)
			{
				return 'A';
			}
			else
			{
		   		return 'C';
			}
		}
    }
    return 'D';
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
int calculateZodiac00(Date born){AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.calculateZodiac00.54397.stub"

	int date1 = born.date;
	int month1 = born.month;
	int year1 = born.year;
	int t;
	{

		if (((month1 == 3) && (date1 >= 21) && (date1 <= 31)) || ((month1 == 4) && (date1 <= 19))){

			t = 1;
		}

		else if (((month1 == 4) && (date1 >= 20) && (date1 <= 30)) || ((month1 == 5) && (date1 <= 20))) {

			t = 2;
		}

		else if (((month1 == 5) && (date1 >= 21) && (date1 <= 31)) || ((month1 == 6) && (date1 <= 20))) {

			t = 3;
		}

		else if (((month1 == 6) && (date1 >= 21) && (date1 <= 30)) || ((month1 == 7) && (date1 <= 22))) {
			t = 4;
		}

		else if (((month1 == 7) && (date1 >= 23) && (date1 <= 31)) || ((month1 == 8) && (date1 <= 22))) {

			t = 5;
		}

		else if (((month1 == 8) && (date1 >= 23) && (date1 <= 31)) || ((month1 == 9) && (date1 <= 22))) {

			t = 6;
		}

		else if (((month1 == 9) && (date1 >= 23) && (date1 <= 30)) || ((month1 == 10) && (date1 <= 22))) {

			t = 7;
		}

		else if (((month1 == 10) && (date1 >= 23) && (date1 <= 31)) || ((month1 == 11) && (date1 <= 21))) {

			t = 8;
		}

		else if (((month1 == 11) && (date1 >= 22) && (date1 <= 31)) || ((month1 == 12) && (date1 <= 21))) {

			t = 9;
		}

		else if (((month1 == 12) && (date1 >= 22) && (date1 <= 30)) || ((month1 == 1) && (date1 <= 19))) {

			t = 10;
		}

		else if (((month1 == 1) && (date1 >= 20) && (date1 <= 31)) || ((month1 == 2) && (date1 <= 18))) {

			t = 11;
		}

		else if (((month1 == 2) && (date1 >= 19) && (date1 <= 29)) || ((month1 == 3) && (date1 <= 20))) {

			t = 12;
		}
		else {
			t = -1;
		}

	}

	return t;
}


int AKA_MAIN()
{AKA_fCall++;
	/** Include stub source code */
	#include "..\stubs\test17082021.cpp.main.56029.stub"

	cout<<getFare(2, 50);
//	cout<<MathAndEnglishGrade(90, 90);
	return 0;
}





#endif

