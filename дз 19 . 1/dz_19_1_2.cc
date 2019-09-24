/* */
/* */
#include <iostream>
#include <vector>
using namespace std;
void twoone (vector<vector<int> > &vec, int n, int **d)
 { for(int i = 0; i < n; i++){
    for(int j = 0; j < vec[i].size(); j++){
           int f = vec[i][j];
           d[i][f] = 1;
    }
}
}
void onetwo (vector<vector<int> >&vec, int **a, int n){
     vec.resize(n);
for( int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(a[i][j] == 1){
            vec[i].push_back(j);
        }
    }
}
                      //4 from 3 to 4 First - changing table of nextones to the list of nextones
  }
  int& onethree(int** a, int n){
    int nn;
    for(int i = 0; i < n; i++){   //7
    for(int j = 0; j < n; j++){
    if(a[i][j]){
        nn++;
    }
    }
}
nn = nn/2;
int **b = new int*[n];
for(int i = 0; i < n; i++){
    b[i] = new int[nn];
    for(int j = 0; j < n; j++){
        b[i][j] = 0;
    }
}
int k;
for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        if(a[i][j]){
            b[i][k] = 1;
            b[j][k] = 1;
            k++;
        }
    }
}
return **b;
}
void threeone(int n, int**b, int**l){
    int k, s, u;
    for(int i = 0; i < k; i++){
  for(int j = 0; j < n; j++){
    if(b[j][i] == 1){
        if(s == 0){
         s = i;
    }
    else{
        u = i;
    }
  }
}
l[s][u] = 1;
l[u][s] = 1;
}
}
int main()
{
    int n, nn, i, j, k, f, s, u = 0; //1
    cin>>n;
int **a = new int*[n];
for(i = 0; i < n; i++){
    a[i] = new int[n];
    for(j = 0; j < n; j++){
            cout<<" i "<<i<<" j "<<j;
    cin>>a[i][j];
    }
}                                  //2 from 1 to 2 making the table of nextones
vector< vector<int> > vec;  //3
                    // Second - making the list of nextones as the first stage of transformation
int **d = new int*[n];       //5
for(i = 0; i < n; i++){
    d[i] = new int[n];
    for(j = 0; j < n; j++){
           d[i][j] = 0;
    }
}
                  //6 from 5 to 6 making out of the list of nextones the table of nextones
  for(int i = 0; i < n; i++){   //7
    for(int j = 0; j < n; j++){
    if(a[i][j]){
        nn++;
    }
    }
}
nn = nn/2;
int **b = new int*[n];
for(int i = 0; i < n; i++){
    b[i] = new int[nn];
    for(int j = 0; j < n; j++){
        b[i][j] = 0;
    }
} k;
for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        if(a[i][j]){
            b[i][k] = 1;
            b[j][k] = 1;
            k++;
        }
    }
}                 //8 from 7 to 8 making out of table of nextones the table of inc
int **l = new int*[n]; //9
for(i = 0; i < n; i++){
    l[i] = new int[n];
    for(j = 0; j < n; j++){
           l[i][j] = 0;
    }
}
                //10 from 9 to 10 - making out of table of inc the table of nexones
return 0;
}
