/*6) Write a program that writes out all the elements of the sequence with at least five divisors */
#include <iostream>
using namespace std;
int main(){
int b, c, d, n, m, g, l, v;
b = 2;
c = 0;
d = 0;
m = 0;
g = 0;
l = 0;
v = 0;
cout<<"enter the number of elements";
cin>>n;
cout<<"enter the elements";
int A[n];
for(int i = 0; i < n; i++){
cin>>A[i];
}
int G[n];
for(int i = 0; i < n; i++){
        G[i] = A[i];
}
for(int i = 0; i < n; i++){
if(G[i] == 0){
cout<<"0";
}
if(G[i] < 0){
c = -G[i];
}
else{
c = G[i];
}
for(int j = 0; j < (c / 2); j++){
if(c % b == 0){
d++;
}
b++;
}
if(d < 3){
G[i] = 0;
}
b = 2;
d = 0;
}
for(int i = 0; i < n; i++){
        if(G[i] == 0){
        continue;
        }
        else{
        cout<<G[i];
        }
}
}
