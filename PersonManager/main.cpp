#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {};
	const string& getName() const { return name; }
	const string& getTel() const { return tel; }	
	void set(string name, string tel);
};
void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

class PersonManager {
	Person *p;
	size_t size;
public:
	PersonManager(int n);
	~PersonManager() { delete[] p; };
	void show();
	void search();

};

PersonManager::PersonManager(int n): size(n) {
	p = new Person[n];
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	string s, t;

	for (size_t i = 0; i < size; ++i) {
		cout << "사람 " << i + 1 << ">>";
		cin >> s >> t;
		p[i].set(s, t);
	}
}

void PersonManager::show() {
	cout << "모든 사람의 이름은 ";
	for (size_t i = 0; i < size; ++i) {
		cout << p[i].getName() << ' ';
	}
	cout << endl;
}

void PersonManager::search() {
	string s;
	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> s;
	for (size_t i = 0; i < size; ++i) {
		if (p[i].getName() == s) {
			cout << "전화번호는 " << p[i].getTel() << endl;
			return;
		}
	}
}

int main() {
	PersonManager manager(3);
	manager.show();
	manager.search();
}