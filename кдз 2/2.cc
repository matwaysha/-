/* The performer has four commands, which are assigned numbers:
1. add 1
2. make it even
3. make it odd
4. multiply by 10
The first of them increases by 1 the initial number x, the second multiplies this number by
2, the third translates the number x to 2x + 1, the fourth multiplies it by 10.
A program for an executor is a sequence of commands. Write
a program that calculates how many programs exist that number X
convert to the number Y, such that no intermediate actions occur
the number Z.*/
#include <iostream>
using namespace std;
int main()
{
int n;
int m;
int c;
cin >> n;
cin >> m;
cin >> c;
int* D=new int[n - m + 1];
for(int i = 0; i < n - m + 1; i++){
D[i] = 0;
}
D[0] = 1;
for(int i= 1 ; i < n - m + 1 ; i++){
       if((i + m  - 1 >= m) && (i + m != c)){                                //this takes O(n - m + 1) because this time is needed to create an array and to complete n - m steps of a cycle, when each step takes the same static time.
            if(D[i] > 0){
                D[i] = D[i] + D[i - 1];
            }
            else{
        D[i] = D[i - 1];
            }
       }
       if(((i + m) % 2 == 0) && ((i + m) / 2 >= m) && ((i + m) / 2 != c)){
             if(D[i] > 0){
                D[i] = D[i] + D[(i + m) / 2 - m];
            }
            else{
        D[i] = D[(i + m) / 2 - m];
            }
       }
       if(((i + m - 1) % 2 == 0) && ((i + m - 1) / 2 >= m) && ((i + m - 1) / 2 != c)){
             if(D[i] > 0){
                D[i] = D[i] + D[(i + m - 1) / 2 - m];
            }
            else{
        D[i] = D[(i + m - 1) / 2];
            }
       }
        if(((i + m) % 10 == 0) && ((i + m) / 10 >= m) && ((i + m) / 10 != c)){
             if(D[i] > 0){
                D[i] = D[i] + D[(i + m) / 10 - m];
            }
            else{
        D[i] = D[(i + m) / 10 - m];
            }
       }
}
cout<<D[n - m];
return 0;
}
