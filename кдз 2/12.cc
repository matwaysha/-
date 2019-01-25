/* Write a parsing program that finds for a given sequence
the length of N non-negative integers is necessary: the minimum sum of its two
items whose numbers differ by at least 5. The program can
be ineffective.*/
#include <iostream>
using namespace std;
int main(){
int sum;
int y;
int mnm;
int* x = new int[5];
int n;
cin>>n;
for(int i = 0; i < 5; i++){
    cin>>x[i];
}
mnm = x[0];
cin>>y;
sum = mnm + y;
x[0] = y;
for(int i = 6; i < n; i++){                  //this takes O(n) because this time is needed to create an array of five elements and to fill it and to complete n - 5 steps of a cycle, when each step takes the same static time.
    cin>>y;
    if(x[i % 5] < mnm){
        mnm = x[i % 5];
    }
    if(sum > mnm + y){
        sum = mnm + y;
    }
    x[i % 5] = y;
}
cout<<sum;
return 0;
}
