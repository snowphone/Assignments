#include <iostream>
#include <string>
using namespace std;
class Point {
	int x, y;
protected:
	Point(int x=0, int y=0): x(x), y(y){}
	const int& getX() const { return x; }
	const int& getY() const { return y; }
	void move(int x, int y) { this->x = x, this->y = y; }
};
class Colorpoint : public Point {
	string color;
public:
	Colorpoint(int x = 0, int y = 0, string color = "BLACK") : color(color), Point(x, y) {}
	void setPoint(int x, int y) { move(x, y); }
	void setColor(const string& color) { this->color = color; }
	friend void show(Colorpoint&);
};
void show(Colorpoint& cp) { cout << cp.color << "색으로 (" << cp.getX() << ", " << cp.getY() << ") 에 위치한 점 입니다." << endl; }
int main() {
	Colorpoint zeroPoint;
	show(zeroPoint);
	Colorpoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	show(cp);
	Colorpoint cpRed(23, 33, "RED");
	show(cpRed);
}