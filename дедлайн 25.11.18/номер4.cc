/*Write a program that finds the first n composite numbers.
The program should work in no more than O(n*log log n) steps.*/
#include <iostream>
using namespace std;
int main()
{
    int x, y, n;
    cin>>n;
    x = 6 * n;
   int * a = new int[x];
   for(int i  = 0; i < x; i++){
    a[i] = 1;
   }
for(int i = 2; i < x; i++){
    if(a[i] == 1){
        for(int j = i * 2; j < x; j+=i){
            a[j] = 0;
                }
    }
    }
    int i = 0;
   while((i < x) && (n > 0)){
    i++;
    if(a[i] == 0){
        cout<<" "<<i<<" ";
        n = n - 1;
    }
   }
return 0;
}
