/*Implement an Array structure to work with arrays selected in
dynamic memory. The program must contain a description of the structure
and the program shows the performance of the structure.*/
#include <iostream>
using namespace std;
struct intarray {
	int n;
	int * A = new int[n - 1];
	intarray() : n(1)
	{}
	intarray(const intarray & m)
		: n(m.n),
		A(new int[n - 1])
	{
		n = m.n;
		A = new int[n - 1];
		for (int i = 0; i < n; i++) {
			A[i] = m.A[i];

		}
	}
	intarray& operator= (intarray m) {
		A = new int[n - 1];
		for (int i = 0; i < n; i++) {
			A[i] = m.A[i];

		}
	}
};
int main() {
	intarray b;
	intarray g;
	cin >> b.n >> g.n;
	for (int i = 0; i < b.n; i++)
	{
		cin >> b.A[i];
	}
	for (int i = 0; i < b.n; i++)
	{
		cout << b.A[i];
	}
	for (int i = 0; i < g.n; i++)
	{
		cin >> g.A[i];
	}
	b = g;
	for (int i = 0; i < b.n; i++)
	{
		cout << b.A[i];
	}
	return 0;
}