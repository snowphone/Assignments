#include <iostream>
using namespace std;
class circle {
	friend circle operator+(const circle& a, const circle& b);
private:
	double radius;
public:
	circle(double r = 0) : radius(r) {};
	void show() { cout << "radius = " << radius << "�� ��" << endl; }
	circle operator++() {
		++radius;
		return *this;
	}
	const circle operator++(int) {
		circle old = *this;
		++(*this);
		return old;
	}
};
//circle(1) �� circle = 1 �� ���ٴ� ���� �̿�. 
circle operator+ (const circle& a, const circle& b) {
	return circle(a.radius + b.radius);
}
int main() {
	circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}