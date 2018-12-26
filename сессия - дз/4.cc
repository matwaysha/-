/* Implement the calculation of the polynomial value at a point through the Horner scheme*/
#include <iostream>
using namespace std;
int main()
{
    int x, p;
    cin >> x;
int n;
cin >> n;
int* D=new int[n + 1];
for(int i=0; i<=n; i++){
cin >> D[i];
}
p = D[0];
for(int i = 1; i<=n; i++){
    p = p*x + D[i];
}
cout << p;
return 0;
}
