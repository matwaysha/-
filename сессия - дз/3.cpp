/* Write a program that allows you to effectively check the ownership of a pair of values to the array*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int * D = new int[n];
    for(int i = 0; i < n; i++){
    cin >> D[i];
    }
    int v,k;
    cin >> k;
    cin >> v;
    int K = 0;
    int V = 0;
    for(int i = 0; i < n; i++)
    {
        if(D[i] == k)
        K++;
        if(D[i] == v)
        V++;
    }
    if((K > 0) && (V > 0)){
    cout << "they are";
    }
    else{
    cout << "they are not";
    }
return 0;
}
