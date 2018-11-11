/*4) Write a program that finds the sum of the simple elements of the array. */
#include <iostream>
using namespace std;
int main(){
int b, c, d, n;
b = 2;
c = 0;
cout<<"enter the number of elements";
cin>>n;
cout<<"enter the elements";
int A[n];
for(int i = 0; i < n; i++){
cin>>A[i];
}
int G[n];
for(int i = 0; i < n; i++){
        G[i] = A[i];
}
for(int i = 0; i < n; i++){
	if(G[i] == 2){
		c = c + G[i];
		b = 2;
	}
	else{
    while (b <= ((G[i] / 2) + 1)){

        if((G[i] % b) == 0){
            G[i] = 0;
        }
        else{
            b++;
        }
    }
    b = 2;
    c = c + G[i];
	}
}
cout<<c;
return 0;
}
