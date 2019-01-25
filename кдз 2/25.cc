/*The input of the program receives a sequence of N positive integers
numbers, all numbers in the sequence are different. All pairs are considered
the various elements of the sequence that are at a distance of not
less than 4 (the difference in the indices of the elements of the pair must be 4 or more,
the order of the elements in the pair is not important). It is necessary to determine the number of such
pairs for which the product of the elements is divisible by 38. */
#include <iostream>
using namespace std;
int main(){
int dv = 0;
int y;
int tr = 0;
int d = 0;
int sum = 0;
int* x = new int[4];
int n;
cin>>n;
for(int i = 0; i < 4; i++){            //this takes O(n) because this time is needed to create an array of four elements and to fill it and to complete n - 4 steps of a cycle, when each step takes the same static time.
    cin>>x[i];
}
for(int i = 4; i < n; i++){
    cin>>y;
    if(x[i % 4] % 38 == 0){
        tr++;
    }
    if((x[i % 4] % 19 == 0) && (x[i % 4] % 2 != 0)){
        dv++;
    }
    if((x[i % 4] % 2 == 0) && (x[i % 4] % 19 != 0)){
        d++;
    }
    if((y % 19 == 0) && (y % 2 != 0)){
        sum = sum + d;
    }
    if((y % 2 == 0) && (y % 19 != 0)){
        sum = sum + dv;
    }
    sum = sum + tr;
    x[i % 4] = y;
}
cout<<sum;
return 0;
}
