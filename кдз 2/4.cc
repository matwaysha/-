/* The performer has four commands, which are assigned numbers:
1. add 5
2. square it.
3. multiply by 3
4. write 2 at the end
The first of them increases by 5 the initial number x, the third multiplies this number by 3,
the second translates the number x to the number x*x, the fourth adds one to the number
end (for example, 30 becomes the number 302). Executive program
- it's a sequence of commands. Write a program that checks whether it is possible
by sequence of commands to get from the number x the number Y so that
the intermediate actions do not contain the number Z. if possible, the program
must write YES, otherwise NO.*/
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
}                                                                   //this takes O(n - m + 1) because this time is needed to create an array and to complete n - m steps of a cycle, when each step takes the same static time.
D[0] = 1;
for(int i= 0 ; i < n - m + 1 ; i++){
       if((i + m - 5 >= m) && (i + m != c)){
            if(D[i] > 0){
                D[i] = D[i] + D[i - 5];
            }
            else{
        D[i] = D[i - 5];
            }
       }
       if(((i + m) * (i + m) <= n) && (i + m != c)){
             if(D[(i + m) * (i + m) - m] > 0){
                D[(i + m) * (i + m) - m] = D[(i + m) * (i + m) - m] + D[i];
            }
            else{
        D[(i + m) * (i + m) - m] = D[i];
            }
       }
       if(((i + m - 2) / 10 <= n) && (((i + m - 2) % 10) == 0) && (i + m != c)){
             if(D[(i + m - 2) / 10 - m] > 0){
                D[i] = D[(i + m - 2) / 10 - m] + D[i];
            }
            else{
        D[i] = D[(i + m - 2) / 10 - m];
            }
       }
        if(((i + m) % 3 == 0) && ((i + m) / 3 >= m) && (i + m != c)){
             if(D[i] > 0){
                D[i] = D[i] + D[(i + m) / 3 - m];
            }
            else{
        D[i] = D[(i + m) / 3 - m];
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
