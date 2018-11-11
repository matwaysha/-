/*14)Write a procedure that performs a "decompression" of a character dynamically allocated array. For example, the string " 3a1b5c2d “
13) Write a procedure that compresses a character dynamically allocated array. Several consecutive identical letters should be replaced by their number and the letter itself. For example, the string “aaabcccccdd” should go to “3a1b5c2d”. We can assume that there are no more than nine identical letters going in a row.*/
#include <iostream>
using namespace std;

struct chararray
{
	int n;
    char * A;
	chararray(int a) : n(a), A(new char[a])
	{}

	chararray(const chararray & c)
	{
		n = c.n;
		A = new char[n];
		for (int i = 0; i < n; i++)
		{
			A[i] = c.A[i];
		}
	}
	void szatie()
	{
	     char v = A[0];
	    int c, d, e;
	    c = 0;
	    for(int i = 1; i < n - 1; i++){
                if((A[i] == v) && (A[i] != A[i +1])){
                v = A[i];
              continue;
            }
            if(A[i] == v){
                v = A[i];
                n = n - 1;
            }
            if((A[i] != A[i - 1]) && (A[i] != A[i + 1])){
                    v = A[i];
                n = n + 1;
            }
	    }
        if(A[n] == A[n - 1]){
            n = n - 1;
        }
    v = A[0];
     for(int i = 1; i < n - 1; i++){
                if((A[i] == v) && (A[i] != A[i +1])){
                v = A[i];
                int a = c + 1;
                A[i - 1] = a + "0";
                c = 0;
              continue;
            }
            if(A[i] == v){
    c = c + 1;
    v = A[i];
    delete A;
            }
            if((A[i] != A[i - 1]) && (A[i] != A[i + 1])){
                    v = A[i];
            }
	    }
        if(A[n] == v){
                int a = c + 1;
            A[i - 1] = c + "0";
        }
	}
	void razzatie(){
	int a, b, c;
	a = 0;
	for(int i = 0; i < n; i++){
        if(A[i] == 1){
            a = a + 1;
        }
         if(A[i] == 2){
            a = a + 2;
        }
         if(A[i] == 3){
            a = a + 3;
        }
         if(A[i] == 4){
            a = a + 4;
        }
         if(A[i] == 5){
            a = a + 5;
        }
         if(A[i] == 9){
            a = a + 9;
        }
         if(A[i] == 6){
            a = a + 6;
        }
         if(A[i] == 7){
            a = a + 7;
        }
         if(A[i] == 8){
            a = a + 8;
        }
        else{
            a = a + 1;
        }
	}
	char * temp = new char[a];
	for(int i = 0; i < n; i++){
         if(A[i] == 1){
            temp[j] = A[i + 1];
            j = j + 1;
        }
         if(A[i] == 2){
            temp[j] = A[i + 1];
            temp[j + 1] = A[i + 1];
            j = j + 2;
        }
         if(A[i] == 3){
            temp[j] = A[i + 1] ;
            temp[j + 1] = A[i + 1] ;
            temp[j + 2] = A[i + 1] ;
            j = j + 3;
        }
         if(A[i] == 4){
            temp[j] = A[i + 1] ;
            temp[j + 1] = A[i + 1] ;
            temp[j + 2] = A[i + 1] ;
            temp[j + 3] = A[i + 1] ;
            j = j + 4;
        }
         if(A[i] == 5){
            temp[j] = A[i + 1] ;
            temp[j + 1] = A[i + 1] ;
            temp[j + 2] = A[i + 1] ;
            temp[j + 3] = A[i + 1] ;
            temp[j + 4] = A[i + 1] ;
            j = j + 5;
        }
         if(A[i] == 9){
            temp[j] = A[i + 1] ;
            temp[j + 1] = A[i + 1] ;
            temp[j + 2] = A[i + 1] ;
            temp[j + 3] = A[i + 1] ;
            temp[j + 4] = A[i + 1] ;
            temp[j + 5] = A[i + 1] ;
            temp[j + 6] = A[i + 1] ;
            temp[j + 7] = A[i + 1] ;
            temp[j + 8] = A[i + 1] ;
            j = j + 9;
        }
         if(A[i] == 6){
        temp[j] = A[i + 1] ;
        temp[j + 1] = A[i + 1] ;
        temp[j + 2] = A[i + 1] ;
        temp[j + 3] = A[i + 1] ;
        temp[j + 4] = A[i + 1] ;
        temp[j + 5] = A[i + 1] ;
        j = j + 6;
        }
         if(A[i] == 7){
            temp[j] = A[i + 1] ;
            temp[j + 1] = A[i + 1] ;
            temp[j + 2] = A[i + 1] ;
            temp[j + 3] = A[i + 1] ;
            temp[j + 4] = A[i + 1] ;
            temp[j + 5] = A[i + 1] ;
            temp[j + 6] = A[i + 1] ;
            j = j + 7;
        }
         if(A[i] == 8){
        temp[j] = A[i + 1] ;
        temp[j + 1] = A[i + 1] ;
        temp[j + 2] = A[i + 1] ;
        temp[j + 3] = A[i + 1] ;
        temp[j = 4] = A[i + 1] ;
        temp[j + 5] = A[i + 1] ;
        temp[j + 6] = A[i + 1] ;
        temp[j + 7] = A[i + 1] ;
        j = j + 8;
         }
	}
	delete[] A;
	A = temp;
	n = a;
 	}
};

int main()
{
	cin >> a;
	 chararray b(a);
	for (int i = 0; i < b.n; i++)
	{
		cin >> b.A[i];
	}
	b.szatie();
	for (int i = 0; i < b.n; i++)
	{
		cout << b.A[i] << " ";
	}
	b.razzatie();
	for (int i = 0; i < b.n; i++)
	{
		cout << b.A[i] << " ";
	}
	return 0;
}
