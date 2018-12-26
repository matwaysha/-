/*Write a program that finds the k-th ordinal statistics. The program should work in O (n) time on average */
#include <iostream>
using namespace std;
void qsortex(int l,int r,int k,int * A){
int i;
int j;
int mid;
i = l;
j = r;
mid = (r + l) / 2;
int w;
    while(i <= j){
while(A[i] < A[mid])
i++;
while(A[j] > A[mid])
j--;
if(i <= j){
     w = A[i];
      A[i] = A[j];
      A[j] = w;
      i++;
      j--;
}
}
if((l < j) && (k <= mid)){
    qsortex(l,j,k,A);
}
if((r > i) && (mid <= k)){
    qsortex(i,r,k,A);
}
};
int main()
{
int n, k;
cin >> k;
cin >> n;
k = k - 1;
int* D=new int[n];
for(int i=0;i<n;i++)
cin >> D[i];
qsortex(0,n - 1,k,D);
cout<< D[k];
return 0;
}
