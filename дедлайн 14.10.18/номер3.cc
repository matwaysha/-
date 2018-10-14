/*write a program which counts the arithmetic mean*/
#include <iostream>
using namespace std;
int main()
{
int a, b, n;
b=0;
n=0;
cin>>a;
while (a!=0)
{
n++;
b=b+a;
a=0;
cin>>a;
}
b=b/(n+1);
cout <<"среднее арифметическое "<<b;
return 0;
}
