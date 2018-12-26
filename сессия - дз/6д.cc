/* Implement the secant method roots of equations*/
#include <iostream>
using namespace std;
float f(float x){
    return (x + 2)*(x + 2)*(x + 2) - 5;
}
int main()
{
float a,b,c,e;
cin>>e;
if(f(0) < 0){
        int i = 20;
    while(f(i) < 0){
        i+=20;
    }
   a = i;
}
if(f(0) > 0){
        int i = -20;
    while(f(i) > 0){
        i-=20;
    }
   a = i;
}
if(f(0) < 0){
    b = 0;
}
if(f(0) > 0){
    b = a;
    a = 0;
}
c = (a - ((b - a)*f(a)/(f(b) - f(a))));
while( (b - a)*(b - a) > e*e){
        a = b;
b = c;
    c = a - ((b - a)*f(a)/(f(b) - f(a)));
}
cout<<b<<" "<<a;
return 0;
}
