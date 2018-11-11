/*9) Write a program that finds the root of the function f, if it is known that f – monotone. Function f is considered unknown (i.e. it simply returns the value of the argument).  It is reasonable to use a cubic function for debugging.*/
#include <iostream>
using namespace std;
float f(float n){
    float m = 0;
    m = n * n * n - 4;
return m;
}
int main() {
int b, d, g;
cin>>b;
float e, a;
e = 0;
a = f(0);
if(a == 0){
cout<<"0";
return 0;
}
if((a < 0) && (b >= 0)){
while(f(e) <= 0){
e++;
}
e = e - 1;
if(f(e) == 0){
cout<<e<<" 0 ";
return 0;
}
if(b >= 1){
for(int i = 0; i < 11; i++){
if(f(e + ((float) i/10)) == 0){
e = e + ((float) i/10);
cout<<e<<" 1 ";
return 0;
}
if(f(e + ((float) i/10)) > 0){
e = e + ((float) (i - 1)/10);
cout<<e<<" 1 ";
break;
}
}
if(b >= 2){
for(int i = 0; i < 11; i++){
if(f(e + ((float) i/100)) == 0){
e = e + ((float) i/100);
cout<<e<<" 2 ";
return 0;
}
if(f(e + ((float) i/100)) > 0){
e = e + ((float) ( i - 1)/100);
cout<<e<<" 2 ";
break;
}
}
if(b >= 3){
for(int i = 0; i < 11; i++){
if(f(e + ((float) i/1000)) == 0){
e = e + ((float) i/1000);
cout<<e<<" 3 ";
return 0;
}
if(f(e + ((float) i/1000)) > 0){
e = e + ((float) (i - 1)/1000);
cout<<e<<" 3 ";
break;
}
}
if(b >= 4){
        for(int i = 0; i < 11; i++){
if(f(e + ((float) i/10000)) == 0){
e = e + ((float) i/10000);
cout<<e<<" 4 ";
return 0;
}
if(f(e + ((float) i/10000)) > 0){
e = e + ((float) (i - 1)/10000);
cout<<e<<" 4 ";
break;
}
}
if(b == 5){
    for(int i = 0; i < 11; i++){
if(f(e + ((float) i/100000)) == 0){
e = e + ((float) i/100000);
cout<<e<<" 5 ";
return 0;
}
if(f(e + ((float) i/100000)) > 0){
e = e + ((float) (i - 1)/100000);
cout<<e<<" 51 ";
return 0;
}
}
}
}
}
}
}
}
if((a > 0) && (b >= 0)){
while(f(e) >= 0){
e--;
}
e = e + 1;
if(f(e) == 0){
cout<<e<<" 0 ";
return 0;
}
if(b >= 1){
for(int i = 0; i < 11; i++){
if(f(e - ((float) i/10)) == 0){
e = e - ((float) i/10);
cout<<e<<" 1 ";
return 0;
}
if(f(e - ((float) i/10)) < 0){
e = e - ((float) (i - 1)/10);
cout<<e<<" 1 ";
break;
}
}
if(b >= 2){
for(int i = 0; i < 11; i++){
if(f(e - ((float) i/100)) == 0){
e = e - ((float) i/100);
cout<<e<<" 2 ";
return 0;
}
if(f(e - ((float) i/100)) < 0){
e = e - ((float) ( i - 1)/100);
cout<<e<<" 2 ";
break;
}
}
if(b >= 3){
for(int i = 0; i < 11; i++){
if(f(e - ((float) i/1000)) == 0){
e = e - ((float) i/1000);
cout<<e<<" 3 ";
return 0;
}
if(f(e - ((float) i/1000)) < 0){
e = e - ((float) (i - 1)/1000);
cout<<e<<" 3 ";
break;
}
}
if(b >= 4){
        for(int i = 0; i < 11; i++){
if(f(e - ((float) i/10000)) == 0){
e = e - ((float) i/10000);
cout<<e<<" 4 ";
return 0;
}
if(f(e - ((float) i/10000)) < 0){
e = e - ((float) (i - 1)/10000);
cout<<e<<" 4 ";
break;
}
}
if(b == 5){
    for(int i = 0; i < 11; i++){
if(f(e - ((float) i/100000)) == 0){
e = e - ((float) i/100000);
cout<<e<<" 5 ";
return 0;
}
if(f(e - ((float) i/100000)) < 0){
e = e - ((float) (i - 1)/100000);
cout<<e<<" 51 ";
return 0;
}
}
}
}
}
}
}
}
cout<<e<<" 6 ";
return 0;
}
