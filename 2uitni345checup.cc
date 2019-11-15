/* */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void threeone(int n, int k, int**b, int**l){
    int s, u;
    for(int i = 0; i < k; i++){
  for(int j = 0; j < n; j++){
    if((b[j][i] == 1) || (b[j][i] == 2)){
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

void onethree(int** a, int** b, int n, int nn){
int k = 0;
for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        if(a[i][j] == 1){
            b[i][k] = 1;
            b[j][k] = 1;
            k++;
        }
        if(a[i][j] == 2){
        b[i][k] = 2;
            b[j][k] = 2;
            k++;
        }
    }
}

}
void dfs(int e, int n, int **a, vector <int> &b, bool *used){
used[e] = true;
b.push_back(e);                              //could be useful later
for(int i = 0; i < n; i++){
    if((a[e][i] == 1) || (a[e][i] == 2)){
        if(! used[i]){
            dfs(i, n, a, b, used);
        }
    }
}
}
int main()
{
    int n, nn, i, j, k, hh, l, m, s, t, u, minn, xx, yy;
    bool tet, tat, tit, tut;
    vector<int> b;
    vector<int> c;
    vector<int> d;
    vector<int> p;
    n = 12;
    minn = n*(n-1);

 vector<int> veca;
 vector<int> vecb;
 vector<int> vecc;
 vector<int> vecd;

bool *used = new bool[n];
int **a = new int*[n];
for(i = 0; i < n; i++){                                    //making the main matrix of neighborhood
    a[i] = new int[n];
    for(j = 0; j < n; j++){
        if(! i == j){
    a[i][j] = 1;
        }
        else{
            a[i][j] = 0;
        }
    }
}
a[0][3] = 2;
a[3][0] = 2;
a[1][4] = 2;                                               //completing requirements for minimal separating amount of summits (= 3)
a[4][1] = 2;
a[5][2] = 2;
a[2][5] = 2;                                               //and minimal separating amount of joiners (= 4) later called untouchable joiners
a[6][2] = 2;                                               //we can choose any summits on this occasion because for now the graph is full - it does not matters
a[2][6] = 2;


int **aa = new int*[n];
for(i = 0; i < n; i++){
    aa[i] = new int[n];
    for(j = 0; j < n; j++){
    aa[i][j] = 0;
    }
}

 for(int y  = 0; y < n*(n-1); y++){
        nn = 0;
     for(i = 0; i < n; i++){                               //setting of a checkup for every single joiner if we can delete it without any consequences
    for(int j = 0; j < n; j++){
    if((a[i][j] == 1) || (a[i][j] == 2)){
        nn++;
    }
    }
}
nn = nn / 2;
int **aaa = new int*[n];                                //making new matrix of incidence
for(i = 0; i < n; i++){
    aaa[i] = new int[nn];
    for(int j = 0; j < n; j++){
        aaa[i][j] = 0;
    }
}
onethree(a, aaa, n, nn);
tat = true;                                              //tells if this is untouchable joiner
tit = true;                                              //tells if by destroying this joiner we getting min separating amount of joiners < 4
tet = true;                                              //tells if by destroying this joiner we getting min degree < 5
tut = true;                                              //tells if by destroying this joiner we getting min separating amount of summits < 3
xx = -1;
yy = -1;
for(i = 0; i < n; i++){                                  //tat checkup
 if((aaa[i][y] == 1) && (xx == -1)){
    xx = i;
    aaa[i][y] = 0;
 }
 if((aaa[i][y] == 1) && (! xx == -1)){
    yy = i;
    aaa[i][y] = 0;
 }
 if(aaa[i][y] == 2){
    tat = false;
 }
}

if(tat){
a[xx][yy] = 0;
a[yy][xx] = 0;




for(i = 0; i < n; i++){                             //tet checkup
    m = 0;
    for(j = 0; j < n; j++){                         //checking if we have a summit with degree < 5;
       if(a[i][j] == 1){
        m++;
       }
    }
    if(m < 5){
       tet = false;
    }
}
if(tet){

for(i = 0; i < n; i++){                                         //tut checkup
        for(int q = 0; q < n; q++){
            if(a[i][q] == 1){
                a[i][q] = 0;
                a[q][i] = 0;
                c.push_back(q);                                 //deleting all possible pairs of summits to
            }                                                   //check if by destroying one or all of them we making new components
                                                                //if this occurs - we cant delete this joiner from the graph because it
        for(int g = i + 1; g < n; g++){                         //lowers min separating amount of summits
                 for(int q = 0; q < n; q++){
            if(a[g][q] == 1){
                a[g][q] = 0;
                a[q][g] = 0;
                d.push_back(q);
            }

               /* for(int o = g + 1; o < n; o++){
                     for(int q = 0; q < n; q++){
            if(a[o][q] == 1){
                a[o][q] = 0;
                a[q][o] = 0;
                p.push_back(q);
            }
        }*/
        k = 0;
for(j = 0; j < n; j++){
    used[j] = false;
}
for(j = 0; j < n; j++){
    if(! used[j]){
        b.clear();
        dfs(j, n, a, b, used);
        k++;
    }
}
if(k == 1){
        //nice

for(int ii = 0; ii < nn; ii++){                                   //tit checkup
    for(u = 0; u < n; u++){                                       //using matrix of incidents
        if(aaa[u][ii] == 1){
            veca.push_back(u);
            aaa[u][ii] = 0;
        }
    }
    for(int jj = ii + 1; jj < nn; jj++){
    for(int uu = 0; uu < n; uu++){
        if(aaa[uu][jj] == 1){                                      //deleting all possible triples of joiners except untouchable to
            vecb.push_back(uu);                                    //check if by destroying one or all of them we making new components
            aaa[uu][jj] = 0;                                       //if this occurs - we cant delete this (number y) joiner from the graph because it
        }                                                          //lowers min separating amount of joiners
    }
    for(int kk = jj + 1; kk < nn; kk++){
    for(int uuu = 0; uuu < n; uuu++){
        if(aaa[uuu][kk] == 1){
            vecc.push_back(uuu);
            aaa[uuu][kk] = 0;
        }
    }
    /*for(int ll = kk + 1; ll < nn; ll++){
    for(int uuuu = 0; uuuu < n; uuuu++){
        if(aaa[uuuu][ll] == 1){
            vecd.push_back(uuuu);
            aaa[uuuu][ll] = 0;
        }
    }*/
    threeone(n, nn, aaa, aa);
hh = 0;
for(j = 0; j < n; j++){
    used[j] = false;
}
for(j = 0; j < n; j++){
    if(! used[j]){
        b.clear();
        dfs(j, n, aa, b, used);
        hh++;
    }
}
if(hh == 1){
    // nice
}
else{
    tit = false;
}
/*hh = vecd[0];
aaa[hh][ll] = 1;                                                //restoring everything...
hh = vecd[1];
aaa[hh][ll] = 1;
vecd.clear();*/
for(int ss = 0; ss < n; ss++){
        for(int uu = 0; uu < n; uu++){
            aa[ss][uu] = 0;
        }
    }
//}
hh = vecc[0];
aaa[hh][kk] = 1;                                        // again restoring everything...
hh = vecc[1];
aaa[hh][kk] = 1;
vecc.clear();
}
hh = vecb[0];
aaa[hh][jj] = 1;
hh = vecb[1];
aaa[hh][jj] = 1;
vecb.clear();
}
hh = veca[0];
aaa[hh][ii] = 1;
hh = veca[1];
aaa[hh][ii] = 1;
veca.clear();
}


}
else{
    tut = false;
}
/*s = p.size();
for(int u = 0; u < s; u++){
    t = c[u];
    a[o][t] = 1;                                          //and again restoring everything...
    a[t][o] = 1;
}
p.clear();
}*/
s = d.size();
for(int u = 0; u < s; u++){
    t = c[u];
    a[g][t] = 1;
    a[t][g] = 1;
}
d.clear();
        }
}
s = c.size();
for(int u = 0; u < s; u++){
    t = c[u];
    a[i][t] = 1;
    a[t][i] = 1;
}
c.clear();
        }
}

 }
}
if((tet) && (tat) && (tit) && (tut)){
    minn--;                                              //if everything is correct just lowering minimal amount
}                                                        //of joiners, from the main matrix (a) tested joiner is already deleted
 else{
    a[xx][yy] = 1;                                       //else just restoring everything
    a[yy][xx] = 1;
 }
for(int bb = n - 1; bb >= 0; bb--){                      //deleting matrix of incidence
    delete[] aaa[bb];
 }
    delete[] aaa;
 }
    cout<<minn;
return 0;
}
