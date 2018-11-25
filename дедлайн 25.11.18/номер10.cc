/*Write a function that calculates the primorial number. The program should work in no more than O(n*log log n) steps. */
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n;
    m = 1;
   int * a = new int[n + 1];
   for(int i  = 0; i <= n; i++){
    a[i] = 0;
   }
for(int i = 2; i <= n; i++){
    if(a[i] == 0){
        for(int j = i * 2; j <= n; j+=i){
            a[j] = 1;
                }
                }
    }
   for(int i = 2; i <= n; i++){
       if(a[i] == 0){
            m = m * i;
        }
       }
       cout<<" "<<m<<" ";
return 0;
}
