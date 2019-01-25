/* The contractor Doubler-Tripler three teams assigned rooms:
1. add 1
2. multiply by 2
3. multiply by 3.
The first of them increases by 1 number on the screen, the second increases this number in
2 times, the third-3 times. The program for Doubler-Triplet-is
command sequence. Write a program that calculates how much
there are programs that convert the number X to the number y.*/
#include <iostream>
using namespace std;
int main()
{
int n;
int m;
cin >> n;
cin >> m;
int* D=new int[n - m + 1];
for(int i = 0; i < n - m + 1; i++){
D[i] = 0;
}
D[0] = 1;
for(int i = 1 ; i < n - m + 1 ; i++){
       if(i + m - 1 >= m){
            if(D[i] > 0){
                D[i] = D[i] + D[i - 1];                              //this takes O(n - m + 1) because this time is needed to create an array and to complete n - m steps of a cycle, when each step takes the same static time.
            }
            else{
        D[i] = D[i - 1];
            }
       }
       if(((i + m)% 2 == 0) && ((i + m)/ 2 >= m)){
             if(D[i] > 0){
                D[i] = D[i] + D[(i + m)/ 2 - m];
            }
            else{
        D[i] = D[(i + m)/ 2 - m];
            }
       }
        if(((i + m) % 3 == 0) && ((i + m) / 3 >= m)){
             if(D[i] > 0){
                D[i] = D[i] + D[(i + m) / 3 - m];
            }
            else{
        D[i] = D[(i + m) / 3 - m];
            }
       }
}
cout<<D[n - m];
return 0;
}
