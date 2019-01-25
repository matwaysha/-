/* The performer has four commands, which are assigned numbers:
1. add 9
2. square it.
3. multiply by 7
4. add 1 to the end
The first of them increases by 9 the initial number x, the third multiplies this number by 7,
the second translates the number x to the number x*x, the fourth adds one to the number
the end (for example, the number 30, the number of turns 301). Executive program
- it's a sequence of commands. Write a program that checks whether it is possible
the sequence of commands to get the executor of the number x number y. If
you can, the program should write YES, otherwise-NO.*/
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
for(int i= 0 ; i < n - m + 1 ; i++){
       if(i + m - 9 >= m){                                                //this takes O(n - m + 1) because this time is needed to create an array and to complete n - m steps of a cycle, when each step takes the same static time.
            if(D[i] > 0){
                D[i] = D[i] + D[i - 9];
            }
            else{
        D[i] = D[i - 9];
            }
       }
       if((i + m) * (i + m) <= n){
             if(D[(i + m) * (i + m) - m] > 0){
                D[(i + m) * (i + m) - m] = D[(i + m) * (i + m) - m] + D[i];
            }
            else{
        D[(i + m) * (i + m) - m] = D[i];
            }
       }
       if(((i + m - 1) / 10 >= m) && (((i + m - 1) % 10) == 0)){
             if(D[(i + m - 1) / 10 - m] > 0){
                D[i] = D[(i + m - 1) / 10 - m] + D[i];
            }
            else{
        D[i] = D[(i + m - 1) / 10 - m];
            }
       }
        if(((i + m) % 7 == 0) && ((i + m) / 7 >= m)){
             if(D[i] > 0){
                D[i] = D[i] + D[(i + m) / 7 - m];
            }
            else{
        D[i] = D[(i + m) / 7 - m];
            }
       }
}
if(D[n - m] == 0){
cout<<"NO";
}
else{
    cout<<"YES";
}
return 0;
}
