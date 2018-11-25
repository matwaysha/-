/*Write a program that calculates the value of the Euler function for the number n. The program should work in no more than O(n* log n) steps.*/
#include <iostream>
using namespace std;
int GCD(int a, int b){
if(b == 0) return a;
return GCD(b, a % b);
}
int main()
{
    int x, y, n;
    cin>>n;
    y = 0;
    int k, m;
   int * a = new int[n + 1];
     for(int i = 0; i <= n; i++){
 a[i] = 0;
   }
   for(int i  = 2; i <= n; i++){
   k = i;
   m = n;
 if(GCD(k, m) == 1){
    y++;
 }
   }
 cout<<y + 1;
return 0;
}
