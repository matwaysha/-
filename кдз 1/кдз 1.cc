/*1)Write a program that calculates the sum of odd digits of an integer.*/
#include <iostream>
using namespace std;
int main()
{
int a, b, c, d, s, m, v;
cin>>a;
b = 0;
c = a;
d = 0;
s = 0;
m = 0;
v = (c - (c % 10)) / 10;
while (c != 0) {
b = c % 10;
c = (c - b) / 10;
d = d + 1;
}
if(d % 2 == 0){
        c = v;
for(int i = 0; i < (d / 2); i++){
b = c % 10;
s = s + b;
m = (c - b) / 10;
c = (m - (m % 10)) / 10;
}
}
else {
    c = a;
for(int i = 0; i < ((d + 1) / 2); i++){
b = c % 10;
s = s + b;
m = (c - b) / 10;
c = (m - (m % 10)) / 10;
}
}
if(s < 0){
    s = -s;
}
else{
    s = s;
}
cout<<s;
}
