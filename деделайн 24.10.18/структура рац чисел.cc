/*Implement a Rational structure to work with rational numbers as with
irrevocable fractions. The program must contain a description
structures and program showing the performance of the structure.*/
#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}
struct rational {
	int m;
	int n;
	int k = 0;
	rational() : m(0), n(1)
	{}
	rational(int a, int b) {
		m = a / gcd(a, b);
		n = b / gcd(a, b);
	}
	rational(const rational & a) {
		m = a.m;
		n = a.n;
		cout << " Copying Constructor is working ;";
	}
	rational& operator= (rational x) {
		m = x.m;
		n = x.n;
		cout << " operator = is working ;";
		return *this;
	}
	rational& operator+ (rational& Y) {
		m = m * Y.n + n * Y.m;
		n = n * Y.n;
		k = gcd(m, n);
		m = m / k;
		n = n / k;
		k = 0;
		cout << " operator + is working ;";
		return *this;
	}
	rational& operator- (rational& Y) {
		m = m * Y.n - n * Y.m;
		n = n * Y.n;
		k = gcd(m, n);
		m = m / k;
		n = n / k;
		k = 0;
		cout << " operator - is working ;";
		return *this;
	}
	rational& operator-= (rational& X) {
		cout << " operator -= is working ;";
		return *this - X;
	}
	rational& operator+= (rational& X) {
		cout << " operator += is working ;";
		return *this + X;
	}
	rational& operator*= (rational& X) {
		m *= X.m;
		n *= X.n;
		k = gcd(m, n);
		m = m / k;
		n = n / k;
		k = 0;
		cout << " operator *= is working ;";
		return *this;
	}
	rational& operator* (rational& Y) {
		cout << " operator * is working ;";
		return *this *= Y;
	}
	rational& operator/= (rational& Y) {
		m *= Y.n;
		n *= Y.m;
		k = gcd(m, n);
		m = m / k;
		n = n / k;
		k = 0;
		cout << " operator /= is working ;";
		return *this;
	}
	rational& operator/ (rational& Y) {
		cout << " operator / is working ;";
		return *this /= Y;
	}
	bool operator== (rational& B) {
		cout << " operator == is working ;";
		return ((m == B.m) && (n == B.n));
	}
	bool operator!= (rational& B) {
		cout << " operator != is working ;";
		return ((m != B.m) || (n != B.n));
	}
	bool operator< (rational& B) {
		cout << " operator < is working ;";
		return ((((m * B.n) - (B.m * n)) < 0) && (((B.m * n) - (m * B.n)) > 0));
	}
	bool operator> (rational& B) {
		cout << " operator > is working ;";
		return ((((m * B.n) - (B.m * n)) > 0) && (((B.m * n) - (m * B.n)) < 0));
	}
	bool operator<= (rational& B) {
		cout << " operator <= is working ;";
		return ((((m * B.n) - (B.m * n)) <= 0) && (((B.m * n) - (m * B.n)) >= 0));
	}
	bool operator>= (rational& B) {
		cout << " operator >= is working ;";
		return ((((m * B.n) - (B.m * n)) >= 0) && (((B.m * n) - (m * B.n)) <= 0));
	}
	void print() {
		cout << " printing is working ;";
		cout << m << " chislitel " << n << " znamenatel";

	}
	void read() {
		cout << " reading is working ;";
		cin >> m >> n;
	}
};

int main() {          //Program will print c after every single line complited.
	rational a;          //This can show, how it changes.
	rational b;
	rational c;
	rational d;
	rational e;
	rational f;
	rational g;
	rational k;
	b.read();
	a.read();
	c.read();
	d.read();
	e.read();
	f.read();
	g.read();
	k.print();
	c.print();
	c = b + a;
	c.print();
	c = d;
	c.print();
	c = f - g;
	c.print();
	c += g;
	c.print();
	c -= b;
	c.print();
	c *= g;
	c.print();
	c = a * g;
	c.print();
	c /= f / .;
	c.print();
	c = d / e;
	c.print();
	if (c == e) {     // From here program will check comparings.
		c.print();    // It will print c or e depending on the result of every check.
	}
	else {
		e.print();
	}
	if (c = !e) {
		c.print();
	}
	else {
		e.print();
	}
	if (c <= e) {
		c.print();
	}
	else {
		e.print();
	}
	if (c >= e) {
		c.print();
	}
	else {
		e.print();
	}
	if (c < e) {
		c.print();
	}
	else {
		e.print();
	}
	if (c > e) {
		c.print();
	}
	else {
		e.print();
	}


	return 0;
}