/*Write an effective program that finds all numbers of length n that are palindromes. In the comments, write why brute force is effective*/
#include <iostream>
using namespace std;
void nado(int a, int b){
   int v = b;
   int d;
   for(int i = 0; i < a; i++){
        d = v % 10;
        cout<<d;
    v = (v - d) / 10;
   }                                               //The number of answers is n; n = 9^2*10^(a - 2); a is number of numbers in answer, speed of the program - a/2 * n * 10 or a/2 * n; a is constant -> it works like O(n) -> it is effective
};
int main()
{
   int m, n, b, d, a;
    b = 0;
    d = 0;
    cin>>a;
    if( a % 2 == 0){
         for(int i = 0; i < a / 2; i++){
     b = b * 10 + 1;
    }
      for(int i = 0; i < a / 2; i++){
     d = (d * 10) + 9;
    }
    for(int i = b; i <= d; i++){
       cout<<i;
       nado(a / 2, i);
       cout<<endl;
    }
    }
    if( a % 2 != 0){

         for(int i = 0; i < a / 2; i++){
     b = b * 10 + 1;
    }
      for(int i = 0; i < a / 2; i++){
     d = (d * 10) + 9;
    }
    for(int i = b; i <= d; i++){
            for(int j = 0; j < 10; j++){
       cout<<i<<j;
       nado(a / 2, i);
       cout<<endl;
            }
    }
    }
return 0;
}
