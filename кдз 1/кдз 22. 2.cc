/*21) for the date structure, write a method that writes the name of the day of the week by date.

22) for the Date structure, write a method that determines how many days are left until the New Year.

23) for the date structure, write the operator minus the returning, the number of days elapsed between the dates.

24) for the Date structure, write a plus operator that takes an integer number of days and returns a date that is the number of days.*/
#include <iostream>
using namespace std;
struct Date{
 int year;
  int month;
   int day;
Date() : year(1),
month(1),day(1)
	{}
Date(const Date& m)
: year(m.year),
month(m.month),
day(m.day)
{
year = m.year;
month = m.month;
day = m.day;
cout<<" Dcc is working ";
}
int partone(){
int m = 0;
int n = 0;
int d = 0;
if((year % 4 == 0) && (year % 100 != 0)){
    m = 1;
}
if(year % 400 == 0){
    m = 1;
}
if(month == 12){
d = (31 - day);
}
if(month == 11){
d = (61 - day);
}
if(month == 10){
d = (92 - day);
}
if(month == 9){
d = (122 - day);
}
if(month == 8){
d = (153 - day);
}
if(month == 7){
d = (184 - day);
}
if(month == 6){
d = (214 - day);
}
if(month == 5){
d = (245 - day);
}
if(month == 4){
d = (275 - day);
}
if(month == 3){
d = (306 - day);
}
if(month == 2){
d = (334 + m - day);
}
if(month == 1){
d = (365 + m - day);
}
return d;
}
Date& operator+ (int n){
int a = 0;
int b = 0;
int c = 0;
int year = 0;
int d = 0;
int e = 0;
int f = 0;
int g = 0;
int k = 0;
a = partone;
					if(((year + c + 1) % 4 == 0) && ((year + c + 1) % 100 != 0) || ((year + c + 1) % 400 == 0)){
						f = 1;
					}
if(n > 0){
if(n > a){
	b = n - a;
	if((b / 365) > 0){
		c = b / 365;
		for(int i = 0; i <= c; i++){
			k = year + i;
			if((k % 4 == 0) && (k % 100 != 0) || (k % 400 == 0)){
			d = d + 1;
			}
			if(b > ((365 * (c - d)) + (366 * (d - 1)))){
				e = b - ((365 * (c - d)) + (366 * (d - 1)));
			if( e <= 31){
month = 1;
day = e;
}
if((e > 31) && (e <= 59 + f)){
month = 2;
day = e - 31;
}
if((e > (59 + f)) && (e <= 90 + f)){
month = 3;
day = e - 59 - f;
}
if((e > 90 + f) && (e <= 120 + f)){
month = 4;
day = e - 90 - f;
}
if((e > 120 + f) && (e <= 151 + f)){
month = 5;
day = e - 120 - f;
}
if((e > 151 + f) && (e <= 181 + f)){
	month = 6;
	day = e - 151 - f;
}
if((e > 181 + f) && (e <= 212 + f)){
month = 7;
day = e - 181 - f;
}
if((e > 212 + f) && (e <= 243 + f)){
month = 8;
day = e - 212 - f;
}
if((e > 243 + f) && (e <= 273 + f)){
month = 9;
day = e - 243 - f;
}
if((e > 273 + f) && (e <= 304 + f)){
	month = 10;
	day = e - 273 - f;
}
}
if((e > 304 + f) && (e <= 334 + f)){
month = 11;
day = e - 304 - f;
}
if((e > 334 + f)){
month = 12;
day = e - 334 - f;
}
	year = year + 1 + c;
			}
		}
	}
}
}

Date& operator- (Date& m){
	int k = 0;
	int u = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	if(year - m.year != 0){
		if(((year - m.year) == 1) || ((year - m.year) == -1)){
			a = 0;
		}
		else{
		a = year - m.year;
		if(a < 0){
			a = -a;
			a = a - 1;
		}
		else{
			a = a - 1;
		}
		}
		for(int i = 0; i < a; i++){
			if((year % 4 == 0) && (year % 100 != 0)){
    c = 366;
}
if(year % 400 == 0){
    c = 366;
}
else{
	c = 365;
}
b = b + c;
c = 0;
		}
		if(year < m.year){
			if((((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) && (month == 1)) || (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) && (month == 2))){
			u = 1;
			}
				if(month == 12){
b = b + (31 - day);
}
if(month == 11){
b = b + (61 - day);
}
if(month == 10){
b = b + (92 - day);
}
if(month == 9){
b = b + (122 - day);
}
if(month == 8){
b = b + (153 - day);
}
if(month == 7){
b = b + (184 - day);
}
if(month == 6){
b = b + (214 - day);
}
if(month == 5){
b = b + (245 - day);
}
if(month == 4){
b = b + (275 - day);
}
if(month == 3){
b = b + (306 - day);
}
if(month == 2){
b = b + (334 + u - day);
}
if(month == 1){
b = b + (365 + u - day);
}
		if((((m.year % 4 == 0) && (m.year % 100 != 0) || (m.year % 400 == 0)) && (m.month == 1)) || (((m.year % 4 == 0) && (m.year % 100 != 0) || (m.year % 400 == 0)) && (m.month == 2))){
			u = 1;
			}
			else{
				u = 0;
			}
				if(m.month == 12){
b = b + (334 + u + m.day - 1);
}
if(m.month == 11){
b = b + (304 + u + m.day - 1);
}
if(m.month == 10){
b = b + (273 + u + m.day - 1);
}
if(m.month == 9){
b = b + (243 + u + m.day - 1);
}
if(m.month == 8){
b = b + (212 + u + m.day - 1);
}
if(m.month == 7){
b = b + (181 + u + m.day - 1);
}
if(m.month == 6){
b = b + (151 + u + m.day - 1);
}
if(m.month == 5){
b = b + (120 + u + m.day - 1);
}
if(m.month == 4){
b = b + (90 + u + m.day - 1);
}
if(m.month == 3){
b = b + (59 + u + m.day - 1);
}
if(m.month == 2){
b = b + (31 + m.day - 1);
}
if(m.month == 1){
b = b + (m.day - 1);
}
}
		if(year > m.year){
			if((((m.year % 4 == 0) && (m.year % 100 != 0) || (m.year % 400 == 0)) && (m.month == 1)) || (((m.year % 4 == 0) && (m.year % 100 != 0) || (m.year % 400 == 0)) && (m.month == 2))){
			u = 1;
			}
				if(m.month == 12){
b = b + (31 - m.day);
}
if(m.month == 11){
b = b + (61 - m.day);
}
if(m.month == 10){
b = b + (92 - m.day);
}
if(m.month == 9){
b = b + (122 - m.day);
}
if(m.month == 8){
b = b + (153 - m.day);
}
if(m.month == 7){
b = b + (184 - m.day);
}
if(m.month == 6){
b = b + (214 - m.day);
}
if(m.month == 5){
b = b + (245 - m.day);
}
if(m.month == 4){
b = b + (275 - m.day);
}
if(m.month == 3){
b = b + (306 - m.day);
}
if(m.month == 2){
b = b + (334 + u - m.day);
}
if(m.month == 1){
b = b + (365 + u - m.day);
}
if((((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) && (month == 1)) || (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) && (month == 2))){
			u = 1;
			}
			else{
				u = 0;
			}
				if(m.month == 12){
b = b + (334 + u + m.day - 1);
}
if(month == 11){
b = b + (304 + u + day - 1);
}
if(month == 10){
b = b + (273 + u + day - 1);
}
if(month == 9){
b = b + (243 + u + day - 1);
}
if(month == 8){
b = b + (212 + u + day - 1);
}
if(month == 7){
b = b + (181 + u + day - 1);
}
if(month == 6){
b = b + (151 + u + day - 1);
}
if(month == 5){
b = b + (120 + u + day - 1);
}
if(month == 4){
b = b + (90 + u + day - 1);
}
if(month == 3){
b = b + (59 + u + day - 1);
}
if(month == 2){
b = b + (31 + day - 1);
}
if(month == 1){
b = b + (day - 1);
}

		}
		day = b;
		month = 0;
		year = 0;
		return *this;
		}
	  else{
	  	if((month == m.month) && (day == m.day)){
	  	b = 0;
	  	}
	  	else{
	  		b = partone() - m.partone() - 1;
	  	}
	  	if(b < 0){
	  		b = -b;
	  	}
	  		day = b;
		month = 0;
		year = 0;
		return *this;
	  }
	}
int dow(){
	int k = month;
 int y = 0;
  int m = 0;
   int d = day;
   int w = 0;
   if(k == 1){
    m = 5;
   }
    if(k == 2){
    m = 1;
   }
    if(k == 3){
    m = 1;
   }
    if(k == 4){
    m = 4;
   }
    if(k == 5){
    m = 6;
   }
    if(k == 6){
    m = 2;
   }
    if(k == 7){
    m = 4;
   }
    if(k == 8){
    m = 0;
   }
    if(k == 9){
    m = 3;
   }
    if(k == 10){
    m = 5;
   }
    if(k == 11){
    m = 1;
   }
    if(k == 12){
    m = 3;
   }
if((year % 4 == 0) && (year % 100 != 0) && (k == 1)){
    m = 4;
}
if((year % 400 == 0) && (k == 1)){
    m = 4;
}
if((year % 4 == 0) && (year % 100 != 0) && (k == 2)){
    m = 0;
}
if((year % 400 == 0) && (k == 2)){
    m = 0;
}
y = (((year % 100) / 4) + 1 + (year % 100) ) % 7;
w = (y + m + d) % 7;
if(w == 1){
	cout<<" понедельник ";
}
if(w == 2){
	cout<<" вторник ";
}
if(w == 3){
	cout<<" среда ";
}
if(w == 4){
	cout<<" четверг ";
}
if(w == 5){
	cout<<" пятница ";
}
if(w == 6){
	cout<<" суббота ";
}
if(w == 0){
	cout<<" воскресенье ";
}
}
int newyear(){
int m = 0;
int n = 0;
int d = 0;
if((year % 4 == 0) && (year % 100 != 0)){
    m = 1;
}
if(year % 400 == 0){
    m = 1;
}
if(month == 12){
d = (31 - day);
cout<<" till the New Year left "<<d<<" days";
}
if(month == 11){
d = (61 - day);
cout<<" till the New Year left "<<d<<" days";
}
if(month == 10){
d = (92 - day);
cout<<" till the New Year left "<<d<<" days";
}
if(month == 9){
d = (122 - day);
cout<<" till the New Year left "<<d<<" days";
}
if(month == 8){
d = (153 - day);
cout<<" till the New Year left "<<d<<" days";
}
if(month == 7){
d = (184 - day);
cout<<" till the New Year left "<<d<<" days";
}
if(month == 6){
d = (214 - day);
cout<<" till the New Year left "<<d<<" days";
}
if(month == 5){
d = (245 - day);
cout<<" till the New Year left "<<d<<" days";
}
if(month == 4){
d = (275 - day);
cout<<" till the New Year left "<<d<<" days";
}
if(month == 3){
d = (306 - day);
cout<<" till the New Year left "<<d<<" days";
}
if(month == 2){
d = (334 + m - day);
cout<<" till the New Year left "<<d<<" days";
}
if(month == 1){
d = (365 + m - day);
cout<<" till the New Year left "<<d<<" days";
}
}
   };
int main() {
	Date o;
	Date d;
	Date a;
	cin>>o.year>>o.month>>o.day>>d.year>>d.month>>d.day;
	o.newyear();
	o.dow();
	a = 367 + o;
cout<<a.year<<a.month<<a.day;
	return 0;
	}
