#include <iostream>
#include <string>

using namespace std;

int a = 0;
int b = 0;
int c = 0;

void check(char ar)
{
	if (ar == '(') a++;
	if (ar == ')') a--;
	if(ar == '{') b++;
	if(ar == '}') b--;
	if(ar == '[') c++;
	if(ar == ']') c--;
}
int main()
{
string str;
getline(cin, str);
int N = str.size();
for (int i = 0; i < N; i++)
	{
		check (str[i]);
		if (a < 0 || b < 0 || c < 0)
		{
			a = 1;
			break;
		}
	}

	if (a == 0 && b == 0 && c == 0) cout << "ok";
	else cout << "**********";
	return 0;
}
