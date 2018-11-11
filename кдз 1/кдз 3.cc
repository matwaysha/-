/*3) Write a program that calculates the binomial coefficient of n by K. the program can not use numbers that exceed the total value.*/
#include <iostream>
using namespace std;
int main() {
int a, b, d;
float c;
c = 1;
cin>>a>>b;
if((b == 0) || (a == 0)){
cout<<"0";
return 0;
}
if(a == b){
cout<<"1";
return 0;
}
for(int i = 1; i <= b; i++){
c = c * 1/(i) ;
}
for(int i = (a - b + 1); i <= a ; i++){
c = c * i;
}
cout<<c;
return 0;
}
