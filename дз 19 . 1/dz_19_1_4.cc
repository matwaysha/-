/* zero is a list of sides, one is table of nextones, two is a list of nextones, three is a table of inc;
for onezero and twozero required two arrays whose size equals number of sides in graph. If necessary arrays could be
    changed to vectors. Some of them require empty 2d array.
*/
#include <iostream>
#include <vector>
using namespace std;
void zeroone (int n, int **a, int *b, int *c){
int nn, i, j, m, v;
while(b[nn]){
    nn++;
}
for(i = 0; i < nn; i++){
    m = b[i];
    v = c[i];
    a[m][v] = 1;
    a[v][m] = 1;
}
}
void onezero (int n, int **a, int *b, int *c){
    int h;
for(int i = 0; i <= n; i++){
    for(int j = 0; j <= n; j++){
        if(a[i][j] == 1){
            b[h] = i;
            c[h] = j;
            h++;
            a[j][i] = 0;
        }
    }
}

}
void zerotwo (int n, int nn, vector<vector<int> > &vec, int *b, int *c){
vec.resize(n + 1);
int m, h;
for(int i = 0; i < nn; i++){
        m = b[i];
        h = c[i];
    vec[m].push_back(h);
}
}
void twozero (int n, int nn, vector<vector<int> > &vec, int *b, int *c){
    int **d = new int*[n + 1];
for(int i = 0; i <= n; i++){
    d[i] = new int[nn];
    for(int j = 0; j <= n; j++){
        d[i][j] = 0;
    }
}
    for(int i = 0; i <= n; i++){
    for(int j = 0; j < vec[i].size(); j++){
           int f = vec[i][j];
           d[i][f] = 1;
    }
}
int h;
for(int i = 0; i <= n; i++){
    for(int j = 0; j <= n; j++){
        if(d[i][j] == 1){
            b[h] = i;
            c[h] = j;
            h++;
            d[j][i] = 0;
        }
    }
}
}
void twoone (vector<vector<int> > &vec, int n, int **d)
 { for(int i = 0; i <= n; i++){
    for(int j = 0; j < vec[i].size(); j++){
           int f = vec[i][j];
           d[i][f] = 1;
    }
}
}
void onetwo (vector<vector<int> >&vec, int **a, int n){
     vec.resize(n + 1);
for( int i = 0; i <= n; i++){
    for(int j = 0; j <= n; j++){
        if(a[i][j] == 1){
            vec[i].push_back(j);
        }
    }
}

  }
  int& onethree(int** a, int n){
    int nn;
    for(int i = 0; i <= n; i++){   //7
    for(int j = 0; j <= n; j++){
    if(a[i][j] == 1){
        nn++;
    }
    }
}
nn = nn/2 + 1;
int **b = new int*[n + 1];
for(int i = 0; i <= n; i++){
    b[i] = new int[nn + 1];
    for(int j = 0; j <= n; j++){
        b[i][j] = 0;
    }
}
int k = 1;
for(int i = 0; i <= n; i++){
    for(int j = i + 1; j <= n; j++){
        if(a[i][j] == 1){
            b[i][k] = 1;
            b[j][k] = 1;
            k++;
        }
    }
}
return **b;
}
void threeone(int n, int k, int**b, int**l){
    int s, u;
    for(int i = 0; i <= k; i++){
  for(int j = 0; j <= n; j++){
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
s = 0;
u = 0;
}
}
int& twoothree(int n, int**a,vector<vector<int> >&vec){
  for(int i = 0; i <= n; i++){
    for(int j = 0; j < vec[i].size(); j++){
           int f = vec[i][j];
           a[i][f] = 1;
    }

}
int nn;
    for(int i = 0; i <= n; i++){
    for(int j = 0; j <= n; j++){
    if(a[i][j] == 1){
        nn++;
    }
    }
}
nn = nn/2 + 1;
int **b = new int*[n + 1];
for(int i = 0; i <= n; i++){
    b[i] = new int[nn];
    for(int j = 0; j <= n; j++){
        b[i][j] = 0;
    }
}
int k;
for(int i = 0; i <= n; i++){
    for(int j = i + 1; j <= n; j++){
        if(a[i][j] == 1){
            b[i][k] = 1;
            b[j][k] = 1;
            k++;
        }
    }
}
return **b;
}
void threetwo(int n, int k, int** a, int** b, vector<vector<int> > &vec){
int s, u;
    for(int i = 0; i <= k; i++){
  for(int j = 0; j <= n; j++){
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
s = 0;
u = 0;
}
 vec.resize(n + 1);
for( int i = 0; i <= n; i++){
    for(int j = 0; j <= n; j++){
        if(a[i][j] == 1){
            vec[i].push_back(j);
        }
    }
}
}
int main(){
return 0;
}
