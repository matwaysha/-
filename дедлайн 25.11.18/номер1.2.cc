/*Write a program that finds the roots of the equation
2018X +2019Y=78487894
effective search. In the comments, write why brute force is effective*/
#include <iostream>
using namespace std;
int main()
{
    int x, y, n;
    x = 37073;
    y = 1820;
    n = 1;
   while(x > 0){
    cout<<" x = "<<x<<" y = "<<y<<";";                       //It is effective because it takes O(n) actions where n is amount of all answers
    x = 37073 - n * 2019;
    y = 1820 + n * 2018;
    n++;
   }

return 0;
}
