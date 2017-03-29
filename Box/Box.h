#pragma once
#ifndef Box_h
#define Box_h
#include <iostream>
class Box {
private:
	int width, height;
	char fill;
public:
	Box(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw();
};
#endif // !Box_h
