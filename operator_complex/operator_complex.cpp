#include <iostream>
using namespace std;

class CPoint {
	friend CPoint operator-(CPoint);
private:
	int x, y;
public:
	CPoint(int a = 0, int b = 0) : x(a), y(b) {};
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
	/*
	CPoint operator-() {
		CPoint ret;
		ret.x = -this->x;
		ret.y = -this->y;
		return ret;
	}
	*/
};
CPoint operator-(CPoint op) {
	CPoint ret;
	ret.x = -op.x;
	ret.y = -op.y;
	return ret;
}
int main() {
	CPoint p1(2, 2);
	CPoint p2 = -p1;
	CPoint p3 = -(-p1);
	p1.Print();
	p2.Print();
	p3.Print();
}