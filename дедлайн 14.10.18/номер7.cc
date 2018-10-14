/*Write a program that finds the minimum sum of a pair of array elements
at least 4 elements separated from each other(the first and the fifth elements
can approach, and the first and third - no). The effectiveness of this program
not a priority.*/
#include <iostream>
using namespace std;
int main()
{
int n, mins;
cin>>n;
int a[n];
for (int i=0;i<n;i++)
{
cin>>a[i];
}
mins=a[0]+a[4];
for (int i=0;i<n-4;i++)
{
for (int j=i+4;j<n;j++)
{
if (a[i]+a[j]<mins)
{
mins=a[i]+a[j];
}
}
}
cout<<mins;
return 0;
}
