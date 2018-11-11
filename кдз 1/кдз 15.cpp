/*Write a procedure that fills a square two-dimensional array diagonally. On the secondary diagonal must stand the greatest values on the neighbouring is one unit smaller, and so on - to the corner in which to stand the unit*/
#include <iostream>
using namespace std;

void diag(int** m, int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = a - 1 - i; j > -1; j++)
		{
			m[i][j] = b;
			break;
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a - 1 - i; j++)
		{
			m[i][j] = j + i + 1;
		}
	}

	for (int i = 1; i < a; i++)
	{
		int v = a - 1;
		for (int j = a - i; j <= a; j++)
		{
			m[i][j] = v;
			v--;
		}
	}
}

int** createarray2d(int a, int b)
{
	int** m = new int*[a];
	for (int i = 0; i != a; i++)
		m[i] = new int[b];
	return m;
}

void printarray(int** m, int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int** m2d = createarray2d(5, 5);
	diag(m2d, 5, 5);
	printarray(m2d, 5, 5);
	return 0;
}
