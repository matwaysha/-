/*Write a procedure that fills a square two-dimensional array with a pyramid.*/
#include <iostream>
using namespace std;

void fill(int** m, int a, int b)
{
	int x = 1;
	for (int i = 0; i <= a / 2; i++)
	{
		for (int j = i; j < a - i; j++)
		{
			m[i][j] = x;
			m[a - i - 1][j] = x;
			m[j][a - i - 1] = x;
			m[j][i] = x;
		}

		x++;
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
	int** m2d = createarray2d(8, 8);
	fill(m2d, 8, 8);
	printarray(m2d, 8, 8);
	return 0;
}
