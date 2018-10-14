/* Write a sort function that orders an array of integers and a program with
an example of its use. It is forbidden to use references to
array by index (Arr[i] ),this means that you need to use index arithmetic.
Effectiveness is not a priority in this programme. Number of arguments
functions must not exceed 2.*/
#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
void sort(int *a,int n)
{
for (int i=0;i<n;i++)
{
for (int j=0;j<n-i-1;j++)
{
if (*(a+j)>*(a+j+1))
{
swap(a+j,a+j+1);
}
}
}
}
int main()
{
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++)
{
cin>> *(a+i);
}
sort (a,n);
for (int i=0;i<n;i++)
{
cout<<*(a+i)<<' ';
}
return 0;
}
