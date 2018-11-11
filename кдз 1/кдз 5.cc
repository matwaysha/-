/*5) Write a program that replaces composite numbers with their largest Prime divisors. */
#include <iostream>
using namespace std;
int main(){
int b, c, d, n, m, g, l, v;
b = 2;
c = 0;
d = 2;
m = 0;
g = 0;
l = 1;
v = 0;
cout<<"enter the number of elements";
cin>>n;
cout<<"enter the elements";
int A[n];
for(int i = 0; i < n; i++){
cin>>A[i];
}
for(int i = 0; i < n; i++){
if(A[i] < 0){
c = -A[i];
}
else{
c = A[i];
}
for(int j = 0; j < (c / 2); j++){
if(c % b == 0){
            g = b;
            while (l<=g){

if(g != 1)
{
l++;
if (l==g)
{
continue;
}
else
{
if (g%l==0)
{
v = 1;
break;
}
else
{
continue;
}
}
}
            }
            if( v == 0){
                m = b;
            }
            b++;
            v = 0;
            l = 1;
        }
else{
b++;
}
}
if(A[i] < 0){
 m = -m;
}
if(m != 0){
A[i] = m;
}
b = 2;
m = 0;
}
for(int i = 0; i < n; i++){
cout<<A[i];
}
}
