#include <iostream>
using namespace std;

class Power {
	//전역 함수에서 private 변수에 접근하기 위해서 friend 사용.
	friend Power operator+(const Power& op1, const Power& op2);
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0):kick(kick), punch(punch){}
	void show();
	Power& operator +=(const Power& op2);
};

void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}
Power operator+(const Power& op1, const Power& op2) {
	Power ret;
	ret.kick = op1.kick + op2.kick;
	ret.punch = op1.punch + op2.punch;
	return ret;
 }

Power& Power::operator+=(const Power & op2) {
	this->kick += op2.kick;
	this->punch += op2.punch;
	return *this;
}

int main() {
	Power a(3, 5), b(4, 6), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
}