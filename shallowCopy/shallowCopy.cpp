#include <iostream>
#include <cstring>
using namespace std;
//����: shallow copy������ ������ ������ copy.
class Person {
	char * name;
	int id;
public: 
	Person(int id, char* name);
	~Person();
	void changeName(char *name);
	void show() { cout << id << ',' << name << endl; }
};
Person::Person(int id, char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}
Person::~Person() {
	if(name)
		delete[] name;
}

void Person::changeName(char * name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);

}

int main() {
	Person father(1, "kitae");
	Person daughter(father);
	cout << "daughter ��ü ���� ����____" << endl;
	father.show();
	daughter.show();

	daughter.changeName("grace");
	cout << "daughter �̸��� grace�� ���� ��____" << endl;
	father.show();
	daughter.show();

	return 0;
}