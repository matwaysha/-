/* the task was to make a cycle array. I made an attempt to make it...*/
#include <iostream>
using namespace std;
class cyclarr{
    private:
double* data;
unsigned int size;
    public:
    cyclarr(){
    data = new double[1];
    size = 1;
    data[0] = 0;
    }
    cyclarr(unsigned int n){
    data = new double[n];
    size = n;
    for(int i = 0; i < n; i++){
        data[i] = 0;
    }
    }
    cyclarr(double* a, unsigned int m){
    delete[]data;
    data = a;
    size = m;
    }
    cyclarr(const cyclarr& a){
    double* T = new double[a.size];
    for(int i = 0; i < a.size; i++){
        T[i] = 0;
    }
     for(int i = 0; i < a.size; i++){
        T[i] = a.data[i];
    }
    size = a.size;
    data = T;
    cout << " Copying Constructor is working ;";
    }
    const cyclarr& operator= (const cyclarr& a){
         double* T = new double[a.size];
        for(int i = 0; i < a.size; i++){
        T[i] = 0;
    }
     for(int i = 0; i < a.size; i++){
        T[i] = a.data[i];
    }
    size = a.size;
    delete[]data;
    data = T;
      cout << " operator = is working ;";
    return *this;
    }
    cyclarr operator+ (cyclarr a){
         double* T = new double[a.size + size];
        for(int i = 0; i < a.size + size; i++){
        T[i] = 0;
    }
     for(int i = 0; i < size; i++){
        T[i] = a.data[i];
    }
    for(int i = size; i < a.size + size; i++){
        T[i] = a.data[i - size];
    }
    size = a.size + size;
    delete[]data;
    data = T;
      cout << " operator + is working ;";
    return *this;
    }
    double operator[] (unsigned int n){
        if(size < n){
            n = n - size;
        }
        cout << " operator [] is working ;";
 return data[n -1];
 }
    void in_sert(double x, unsigned int n){
        if(n > size){
            n = n - size;
        }
        data[n - 1] = x;
    cout << " in_sert is working ;";
    }
    double eraser(unsigned int n){
        double a = 0;
    if(n > size){
            n = n - size;
    }
        a = data[n - 1];
        data[n - 1] = 0;
    cout << " eraser is working ;";
    return a;
    }
    void finder(double x){
        int f = 0;
    for(int i = 0; i < size; i++){
        if(data[i] == x){
                cout<<" finder is working ;";
            cout<<" "<<x<<" is in the vector ";
            f = 1;
        }
    }
    if(f == 0){
            cout<<" finder is working ;";
        cout<<" "<<x<<" is not in the vector ";
    }
    }
         unsigned int get_size(){
unsigned int a = size;
cout << " size is working ;";
return a;
}
 void print (unsigned int n){
     if(n > size){
        n = n - size;
     }
 cout<<data[n - 1];
 cout << " print is working ;";
 }
 ~cyclarr(){
 delete[]data;
 cout << " destructor is working ;";
 }
};
int main(){
return 0;
}
