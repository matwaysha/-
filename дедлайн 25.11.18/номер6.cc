/*Write a program that finds all Chen Prime numbers not exceeding n. The program should work in no more than O(n*log log n) steps.*/
#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin>>n;
    x = 6 * n;
   int * a = new int[n];
   for(int i  = 0; i < x; i++){
    a[i] = 0;
   }
for(int i = 2; i < x; i++){
    if(a[i] == 0){
        for(int j = i * 2; j < x; j+=i){
            if(a[j] == 2){
                    a[j] = 3;
                }
                if((a[j] == 1) && (j % (i*i) == 0)){
                    a[j] = 3;
                }
                if(a[j] == 1){
                    a[j] = 2;
                }
                if((a[j] == 0) && (j % (i*i*i) == 0)){
                    a[j] = 3;
                }
                 if((a[j] == 0) && (j % (i*i) == 0)){
                    a[j] = 2;
                }
                if(a[j] == 0){
            a[j] = 1;
                }
                }
    }
    }
   for(int i = 0; i < n; i++){
       if(a[i] == 0){
        if((a[i + 2] == 0) || (a[i + 2] == 2)){
        cout<<" "<<i<<" ";
        }
       }
    }
return 0;
}
