/*Write a program that finds all primes of Sophie Germain not exceeding n. The program should work in no more than O(n*log log n) steps.
*/
#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin>>n;
    x = n * n;
   int * a = new int[x];
   for(int i  = 0; i < x; i++){
    a[i] = 0;
   }
for(int i = 2; i < x; i++){
    if(a[i] == 0){
        for(int j = i * 2; j < x; j+=i){
            a[j] = 1;
                }
                }
    }
   for(int i = 0; i < n; i++){
       if(a[i] == 0){
        if(a[2*i + 1] == 0){
        cout<<" "<<i<<" ";
        }
       }
    }
return 0;
}
