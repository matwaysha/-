/* There is a data set consisting of pairs of positive integers.
You must select from each pair exactly one number so that the sum of all
the selected numbers were not divisible by 3 and were as large as possible.
If it is impossible to get the required amount, the answer should be 0.
Write a program to solve this problem. */
#include <iostream>
using namespace std;
int main()
{
	int a = 0, c = 0, sum = 0, n, mnm = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{                                        //this takes O(n) because this time is needed to complete n steps of a cycle, when each step takes the same static time.
		cin >> a;
		cin >> c;
		if(a > c){
            sum = sum + a;
            if((c % 3 != 0) && (mnm == 0)){
                mnm = c;
                continue;
            }
            if((c % 3 != 0) && (mnm > c)){
                mnm = c;
                continue;
            }
            if((a % 3 != 0) && (mnm == 0)){
                mnm = a;
                continue;
            }
            if((a % 3 != 0) && (mnm > a)){
                mnm = a;
                continue;
            }
		}
		else{
            sum = sum + c;
             if((a % 3 != 0) && (mnm == 0)){
                mnm = a;
                continue;
            }
            if((a % 3 != 0) && (mnm > a)){
                mnm = a;
                continue;
            }
            if((c % 3 != 0) && (mnm == 0)){
                mnm = c;
                continue;
            }
            if((c % 3 != 0) && (mnm > c)){
                mnm = c;
                continue;
            }
		}
	}
	if((sum % 3 == 0) && (mnm == 0))
	{
		cout<<"sum = 0";
		return 0;
	}
	if((sum % 3 == 0) && (mnm != 0))
	{
	    sum = sum - mnm;
		cout<<"sum = "<<sum;
		return 0;
	}
	if(a % 3 != 0)
	{
	cout<<"sum = "<<sum;
	}
	return 0;
}
