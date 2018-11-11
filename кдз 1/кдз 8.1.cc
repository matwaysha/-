/*8) Write function that find the approximate value of the square root. The program should not use mathematical libraries.*/
#include <iostream>
using namespace std;
int main() {
int c, d, e, f;
c = 0;
d = 0;
e = 0;
float t, b;
float a;
t = 0;
b = 0;
cout<<"enter a number";
cin>>a;
cout<<"enter a quality";
cin>>f;
if(f >= 0){
for(int i = 0; i <= a; i++){
if(i * i == a){
b = i;
cout<<" "<<b<<" ";
e = 1;
break;
}
}
if(e == 0){
for(int i = 0; i <= (a + 1); i++){
if(i * i > a){
b = i - 1;
}
if(b != 0){
break;
}
}
if(f >= 1){
for(int i = 1; i < 11; i++){
t = i;
if((b + (t / 10)) * ((t / 10) + b) == a){
b = b + (t / 10);
d = 1;
e = 1;
}
}
if(e == 0){
for(int i = 1; i < 11; i++){
t = i;
if((b + (t / 10)) * ((t / 10) + b) > a){
b = b + ((t - 1) / 10);
d = 1;
}
if(d == 1){
break;
}
}
t = 0;
d = 0;
if(f >= 2){
for(int i = 1; i < 11; i++){
t = i;
if((b + (t / 100)) * ((t / 100) + b) == a){
b = b + (t / 100);
d = 1;
e = 1;
}
}
if(e == 0){
        t =0;
d = 0;
for(int i = 1; i < 11; i++){
t = i;
if((b + (t / 100)) * ((t / 100) + b) > a){
b = b + ((t - 1) / 100);
d = 1;
}
if(d == 1){
break;
}
}
t = 0;
d = 0;
if(f >= 3){
for(int i = 1; i < 11; i++){
t = i;
if((b + (t / 1000)) * ((t / 1000) + b)== a){
b = b + (t / 1000);
e = 1;
break;
}
}
if(e == 0){
        t = 0;
d = 0;
for(int i = 1; i < 11; i++){
t = i;
if((b + (t / 1000)) * ((t / 1000) + b) > a){
b = b + ((t - 1) / 1000);
d = 1;

if(d == 1){
break;
}
}
}
t = 0;
d = 0;
if(f >=4){
for(int i = 1; i < 11; i++){
t = i;
if((b + (t / 10000)) * ((t / 10000) + b) == a){
b = b + (t / 10000);
e = 1;
break;
}
}
if(e == 0){
    for(int i = 1; i < 11; i++){
t = i;
if((b + (t / 10000)) * ((t / 10000) + b) > a){
b = b + ((t - 1) / 10000);
d = 1;

if(d == 1){
break;
}
}
}
t = 0;
d = 0;
if(f == 5){
for(int i = 1; i < 11; i++){
t = i;
if((b + (t / 100000)) * ((t / 100000) + b) == a){
b = b + (t / 100000);
e = 1;
break;
}
}
if(e == 0){
    for(int i = 1; i < 11; i++){
t = i;
if((b + (t / 100000)) * ((t / 100000) + b) > a){
b = b + ((t - 1) / 100000);
d = 1;

if(d == 1){
break;
}
}
}
}
else{
    return 0;
}
}
}
else{
    return 0;
}
}
}
else{
    return 0;
}
}
}
else{
    return 0;
}
}
}
else{
    return 0;
}
}
}
else{
    return 0;
}
}
cout<<" "<<b<<" ";
return 0;
}

