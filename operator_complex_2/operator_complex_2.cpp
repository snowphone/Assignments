#include <iostream>
using namespace std;
class Complex {
	double re, im;
public:
	Complex(double r = 0, double i = 0) : re(r), im(i) {}
	void Output() { cout << re << " + " << im << "i" << endl; }
	Complex& operator+=(const Complex& rhs) { this->re += rhs.re; this->im += rhs.im; return *this; }
	Complex& operator-() { this->re *= -1; this->im *= -1; return *this; }
	friend Complex operator+(const Complex&, const Complex&);
	friend Complex& operator++(Complex&);
	friend const Complex operator++(Complex&, int) ;
	friend ostream& operator<<(ostream& os, Complex&);
};



Complex operator+(const Complex & lhs, const Complex & rhs) {
	Complex ret = lhs;
	ret += rhs;
	return ret;
}

Complex& operator++(Complex& val) {
	val += Complex(1, 1);
	return val;
}

Complex const operator++(Complex & val, int) {
	Complex prev = val;
	++val;
	return prev;
}

ostream & operator<<(ostream & os, Complex & val) {
	os << "(" << val.re << " + " << val.im << "i)" << endl;
	return os;
}

int main() {
	Complex c1(1, 2), c2(3, 4);
	c1.Output(); c2.Output();
	Complex c3 = c1 + c2; c3.Output();
	Complex c4 = c1 += c2; c1.Output(); c4.Output();
	Complex c5 = ++c4; c4.Output(); c5.Output();
	Complex c6 = c4++; c4.Output(); c6.Output();
	cout << -c5; cout << c6;
}
