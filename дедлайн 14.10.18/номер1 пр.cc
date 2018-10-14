/*write a program, that checks if a number is prime, composit or unit*/

#include <iostream>
using namespace std;
int main()
{
int a,b;
b=1;
cin>>a;
while (b<=a)
if (a==1)
{
cout <<"Unit"<<" 1";
break;
}
else
{
b++;
if (a==b)
{
cout <<"Prime"<<" "<<a;
}
else
{
if (a%b==0)
{
cout <<"Composit"<<" "<<a;
break;
}
else
{
continue;
}
}
}
return 0;
}
