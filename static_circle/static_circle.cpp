#include <iostream>
using namespace std;
class Circle {
private:
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1) : radius(r) { ++numOfCircles; }
	~Circle() { numOfCircles--; }	
	double getArea() { return 3.141592 * radius * radius; }
	static int getNumOfCircles() { return numOfCircles; }
};

int Circle::numOfCircles = 0;
int main() {
	Circle *p = new Circle[10];
	cout << Circle::getNumOfCircles() << endl;
	delete[] p;
	cout << Circle::getNumOfCircles() << endl;
	Circle a;
	cout << Circle::getNumOfCircles() << endl;
	Circle b;
	cout << Circle::getNumOfCircles() << endl;
}