#include <iostream>
using namespace std;
void diag(size_t a, size_t b, int ** m[a][b]){
for(int i = 0; i < a; i++){
for(int j = a - 1 - i; j > -1; j++){
m[i][j] = b;
break;
}
}
for(int i = 0; i < a; i++){
for(int j = 0; j < a - 1 - i; j++){
m[i][j] = j + i + 1;
}
}
for(int i = 1; i < a; i++){
int v = 0;
for(int j = a - i; j < a; j++){
m[i][j] = j - v;
v++;
}
}
}
int ** createarray2d(size_t a, size_t b){
int ** m = new int *[a];
for(size_t i = 0; i != a; i++)
    m[i] = new int [b];
return m;
}
int main(){
int ** m2d = createarray2d(5,5);
diag(5, 5, m2d);
return 0;
}
