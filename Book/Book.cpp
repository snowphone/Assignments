#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
	char * title;
	int price;
public:
	Book(char* title, int price);
	Book(Book& b);
	void set(char* title, int price);
	~Book();
	void show() { cout << title << ' ' << price << "��" << endl; }
};

Book::Book(char * title, int price) {
	this->title = new char[101];
	strcpy(this->title, title);
	this->price = price;
}

Book::Book(Book & b) {
	this->title = new char[101];
	this->price = b.price;
	strcpy(this->title, b.title);
}

void Book::set(char * title, int price) {
	strcpy(this->title, title);
	this->price = price;
}

Book::~Book() {
	if (title)	delete[] title;
}
int main() {
	Book cpp("��ǰc++", 10000);
	Book java(cpp);
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}