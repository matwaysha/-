/*12) Write a procedure that describes each element of the dynamically selected array on the right of its square.({1,2,3,4}->{1,1,2,4,3,9,4,16}). At the end of the procedure, the amount of memory allocated should increase. */
#include <iostream>
using namespace std;

struct intarray
{
	int n;
	int * A;
	intarray(int a) : n(a), A(new int[a])
	{}

	intarray(const intarray & c)
	{
		n = c.n;
		A = new int[n];
		for (int i = 0; i < n; i++)
		{
			A[i] = c.A[i];
		}
	}

	intarray& operator= (intarray c)
	{
		A = new int[n];
		for (int i = 0; i < n; i++)
		{
			A[i] = c.A[i];
		}
	}

	void sqr()
	{
		int j = 0;
		int m = 2 * n;
		int* temp = new int[m];

		for (int i = 0; i < n + n; i++){
				temp[i] = A[j++];
				i++;

		}
		j = 0;
		for (int i = 1; i < n + n; i++){
                int r;
                r = A[j++];
				temp[i] = r * r;
				i++;

		}
		delete[] A;
		A = temp;
		n = m;
	}
};

int main()
{
	int a;
	cin >> a;
	intarray b(a);
	for (int i = 0; i < b.n; i++)
	{
		cin >> b.A[i];
	}
	b.sqr();
	for (int i = 0; i < b.n; i++)
	{
		cout << b.A[i] << " ";
	}
	return 0;
}
