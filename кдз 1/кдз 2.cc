/*2) Write a program that calculates the product of the digits of an integer whose parity coincides with the parity of the last digit. */
#include <iostream>
using namespace std;
int main()
{
int a, c, b, d, m, v;
cin>>a;
c = a;
b = 0;
d = 0;
m = 0;
v = c % 10;
while (c != 0) {
b = c % 10;
c = (c - b) / 10;
d = d + 1;
}
c = a;
if(c != 0){
if( v % 2 == 0){
m = 1;
for(int i = 0; i < d; i++){
b = c % 10;
if(b % 2 == 0){
m = m * b;
}
c = (c - b) / 10;
}
}
else{
m = 1;
for(int i = 0; i < d; i++){
b = c % 10;
if(b % 2 != 0){
m = m * b;
}
c = (c - b) / 10;
}
}
if( m < 0){
    m = - m;
}
cout<<m;
}
else{
    cout<<0;
}
}
