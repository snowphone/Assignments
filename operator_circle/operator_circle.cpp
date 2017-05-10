#include <iostream>
using namespace std;
class circle {
	friend circle operator+(const circle& a, const circle& b);
private:
	double radius;
public:
	circle(double r = 0) : radius(r) {};
	void show() { cout << "radius = " << radius << "인 원" << endl; }
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
//circle(1) 은 circle = 1 과 같다는 점을 이용. 
circle operator+ (const circle& a, const circle& b) {
	return circle(a.radius + b.radius);
}
int main() {
	circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}