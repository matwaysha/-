/* Write a program that finds the decomposition of an integer into the sum of exact squares, so that the number of summands is minimal.*/
#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int* D=new int[n + 1];
D[0] = 0;
int* B=new int[n + 1];
B[0] = 0;
int mnm;
for(int i=1; i<n+1; i++){
        mnm = D[i - 1] + 1;
        for(int j = 2; j*j < i + 1; j++){
            if( mnm > D[i - j*j] + 1){
                mnm = D[i - j*j] + 1;
            }
        }
        D[i] = mnm;
}
cout<<D[n];
return 0;
}
