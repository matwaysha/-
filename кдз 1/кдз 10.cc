/*10) Write a procedure that removes all even values from the dynamically allocated array (the function takes a pointer to the array and its size as arguments). At the end of the procedure, the amount of memory allocated should decrease.*/
#include <iostream>
using namespace std;
struct intarray {
	int n;
	int m = 0;
	int v = 0;
	int * A = new int[n];
		intarray(int a) : n(a), A(new int [a])
	{}
	intarray(const intarray & c)
	{
		n = c.n;
		A = new int[n];
		for (int i = 0; i < n; i++) {
			A[i] = c.A[i];

		}
	}
	intarray& operator= (intarray c) {
		A = new int[n];
		for (int i = 0; i < n; i++) {
			A[i] = c.A[i];

		}
	}
	void nechet(){
	    m = n;
		for(int i = 0; i < n; i++){
			if(A[i] % 2 == 0){
                    m = n - 1;
			}
		}
		for(int i = 0; i < n; i++){
			if(A[i] % 2 == 0){
                    A[i] = 0;
			}
		}
		int * temp = new int[m];
for(int i = 0; i < n; i++){
    if(A[i] == 0){
        v = v + 1;
    }
    else{
        temp[i - v] = A[i];
    }
}
         delete[]A;
         cout<<n<<" ";
         A = temp;
         n = m;
          cout<<n<<" ";
		}
};
int main() {
    int a;
    cin >> a;
	intarray b (a);
	for (int i = 0; i < b.n; i++)
	{
		cin >> b.A[i];
	}
	b.nechet();
	for (int i = 0; i < b.n; i++)
	{
		cout << b.A[i];
	}
	return 0;
}
