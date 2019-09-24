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
int& twoothree(int n, int**a,vector<vector<int> >&vec){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < vec[i].size(); j++){
           int f = vec[i][j];
           a[i][f] = 1;
    }

}
int nn;
    for(int i = 0; i < n; i++){
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
void threetwo(int n, int** a, int** b, vector<vector<int> > &vec){
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
a[s][u] = 1;
a[u][s] = 1;
}
 vec.resize(n);
for( int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(a[i][j] == 1){
            vec[i].push_back(j);
        }
    }
}
}
