/* The task was to make a double vector class. Here i tried to do this. Size here -
 is amount of all elements (filled elements) not the last index and capacity is amount of
  all elements filled and unfilled */
#include <iostream>
using namespace std;
class double_vector{
    private:
double* data;
unsigned int size;
unsigned int capacity;
    public:
    double_vector(){
    data = new double[1];
    size = 0;
    capacity = 1;
    data[0] = 0;
    }
    double_vector(unsigned int n){
    data = new double[n];
    size = 0;
    capacity = n;
    for(int i = 0; i < n; i++){
        data[i] = 0;
    }
    }
    double_vector(double* a, unsigned int m){
    delete[]data;
    data = a;
    size = m;
    capacity = m;
    }
    double_vector(const double_vector& a){
    double* T = new double[a.capacity];
    for(int i = 0; i < a.capacity; i++){
        T[i] = 0;
    }
     for(int i = 0; i < a.size; i++){
        T[i] = a.data[i];
    }
    size = a.size;
    capacity = a.capacity;
    data = T;
    cout << " Copying Constructor is working ;";
    }
    const double_vector& operator= (const double_vector& a){
         double* T = new double[a.capacity];
        for(int i = 0; i < a.capacity; i++){
        T[i] = 0;
    }
     for(int i = 0; i < a.size; i++){
        T[i] = a.data[i];
    }
    size = a.size;
    capacity = a.capacity;
    delete[]data;
    data = T;
      cout << " operator = is working ;";
    return *this;
    }
    double_vector operator+ (double_vector a){
         double* T = new double[a.capacity + capacity];
        for(int i = 0; i < a.capacity + capacity; i++){
        T[i] = 0;
    }
     for(int i = 0; i < size; i++){
        T[i] = a.data[i];
    }
    for(int i = size; i < a.size + size; i++){
        T[i] = a.data[i - size];
    }
    size = a.size + size;
    capacity = a.capacity + capacity;
    delete[]data;
    data = T;
      cout << " operator + is working ;";
    return *this;
    }
    double operator[] (unsigned int n){
        cout << " operator [] is working ;";
 return data[n -1];
 }

    void push_bak(int x){
        if(size >= capacity){
            capacity*=2;
            double* temp = new double[capacity];
            for(int i = 0; i < capacity; i++){
                temp[i] = 0;
            }
            for(int i = 0; i < size; i++){
                temp[i] = data[i];
            }
            delete[]data;
            data = temp;
        }
        data[size] = x;
        size++;
    cout << " push_bak is working ;";
    }
    double pop_bak(){
    double a;
    a = data[size];
    data[size] = 0;
    size--;
    cout << " pop_bak is working ;";
    return a;
    }
    void in_sert(double x, unsigned int n){
        int f = 0;
    if((n <= size) && (f != 1)){
            if(size >= capacity){
         capacity*=2;
            double* temp = new double[capacity];
            for(int i = 0; i < capacity; i++){
                temp[i] = 0;
            }
            temp[n - 1] = x;
            for(int i = 0; i < n - 1; i++){
                temp[i] = data[i];
            }
            for(int i = n; i <= size; i++){
                temp[i] = data[i - 1];
            }
            delete[]data;
            data = temp;
        }
         for(int i = n; i <= size; i++){
            data[i] = data[i - 1];
         }
         data[n - 1] = x;
        size++;
    cout << " in_sert is working ;";
    f = 1;
    }
    if((n > capacity) &&(f != 1)){
         capacity = n * 2;
            double* temp = new double[capacity];
            for(int i = 0; i < capacity; i++){
                temp[i] = 0;
            }
            temp[n - 1] = x;
            for(int i = 0; i < size; i++){
                temp[i] = data[i];
            }
            delete[]data;
            data = temp;
        size = n;
    cout << " in_sert is working ;";
    f = 1;
    }
    if((n <= capacity) && (n > size) && (f != 1)){
         data[n - 1] = x;
        size = n;
    cout << " in_sert is working ;";
    f = 1;
    }
    }
    double eraser(unsigned int n){
        double a = 0;
    if(n <= size){
        a = data[n - 1];
        for(int i = n - 1; i < size - 1; i++){
            data[i] = data[i + 1];
        }
        size--;
    }
    cout << " eraser is working ;";
    return a;
    }
    void erase_ab (unsigned int a, unsigned int b){
        int f = 0;
        if(a == b){
                cout << " eraser failure ;";
            f = 1;
        }
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if((b <= size) && (f != 1)){
            int c = 0;
            cout << " eraser is working ;";
        for(int i = 0; i < size - b + 1; i++){
            cout<<" "<<data[a - 1 + i];
           data[a - 1 + i] = data[b - 1 + i];
    c++;
        }
        for(int i = size - 1 - c; i < size; i++){
            data[i] = 0;
        }
        size = size - c - 1;
        f = 1;
    }
    if(a > size){
        cout << " eraser is working ;";
        f = 1;
    }
    if((a <= size) && (b > size) && (f != 1)){
        cout << " eraser is working ;";
            int c = 0;
        for(int i = a - 1; i < size; i++){
                cout<<" "<<data[i];
            data[i] = 0;
            c++;
        }
        size = size - c;
        f = 1;
    }
    }
 void push_frnt(double x){
 if(size >= capacity){
            capacity*=2;
            double* temp = new double[capacity];
            for(int i = 0; i < capacity; i++){
                temp[i] = 0;
            }
            temp[0] = x;
            for(int i = 1; i <= size; i++){
                temp[i] = data[i - 1];
            }
            delete[]data;
            data = temp;
        }
        for(int i = size; i > 0; i--){
            data[i] = data[i - 1];
        }
        data[0] = x;
        size++;
    cout << " push_frnt is working ;";
 }
  double pop_frnt(){
    double a;
    a = data[0];
    for(int i = 0; i < size - 1; i++){
        data[i] = data[i + 1];
    }
    size--;
    cout << " pop_frnt is working ;";
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
void resizer(unsigned int n){
 if(n > 0){
        capacity = capacity + n;
     double* temp = new double[capacity];
            for(int i = 0; i < capacity; i++){
                temp[i] = 0;
            }
            for(int i = 0; i < size; i++){
                temp[i] = data[i];
            }
            delete[]data;
            data = temp;
        }
 if(n < 0){
    if(capacity - size >= n){
        capacity = capacity + n;
    }
    else{
            int a = n -capacity + size;
        capacity = size;
        cout<<" no more empty positions."<<a<<"positions left hot deleted";
    }
    double* temp = new double[capacity];
            for(int i = 0; i < size; i++){
                temp[i] = data[i];
            }
            delete[]data;
            data = temp;
 }
 }
         unsigned int get_size(){
unsigned int a = size;
cout << " size is working ;";
return a;
}
unsigned int get_capacity(){
unsigned int a = capacity;
cout << " capacity is working ;";
return a;
}
 void print (unsigned int n){
 cout<<data[n - 1];
 cout << " print is working ;";
 }
 ~double_vector(){
 delete[]data;
 cout << " destructor is working ;";
 }
};
int main()
{
    double a = 10, b;
    unsigned int n = 10;
    double* j = new double[6];
    for(int i = 0; i < 6; i++){
        j[i] = i;
    }
double_vector p(n);
double_vector g(j,6);
double_vector k(g);
k = p + g;
a = p.pop_bak();
g.print(1);
for(int i = 0; i < 4; i++){
g.push_frnt(3);
}
g.print(n - 6);
g = p
;
p.print(2);
cout<<" "<<a;
b = g.pop_frnt();
cout<<" "<<b;
return 0;
}
