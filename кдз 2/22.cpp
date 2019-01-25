/* You are given a set of N positive integers. You must select from a set
an arbitrary number of numbers so that their sum is as large as possible and at
this was not divided by 6. In the answer you need to specify the number of selected numbers and their
the amount, the numbers themselves should not be displayed. If it is impossible to get the required amount,
it is believed that the selected numbers are 0 and their sum is equal to 0. Write effective software
time and memory program to solve this problem. */
#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, sum = 0, n, mnm = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{                                        //this takes O(n) because this time is needed to complete n steps of a cycle, when each step takes the same static time.
		cin >> a;
		if((a % 6 != 0) && (b == 0)){
            mnm = a;
            b = 1;
		}
		sum = sum + a;
	}
	if((sum % 6 == 0) && (mnm == 0))
	{
		cout<<"n = 0, sum = 0";
		return 0;
	}
	if((sum % 6 == 0) && (mnm != 0))
	{
	    sum = sum - mnm;
		cout<<"n = "<<n - 1<<", sum = "<<sum;
		return 0;
	}
	if(a % 6 != 0)
	{
	cout<<"n = "<<n<<", sum = "<<sum;
	}
	return 0;
}
