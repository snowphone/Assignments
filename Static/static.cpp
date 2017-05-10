#include <iostream>
using namespace std;

class Person {
public:
	typedef unsigned long long T;
	T money;
	void addMoney(T money) {
		this->money += money;
	}
	static T sharedMoney;
	static void addShared(T n) {
		sharedMoney += n;
	}
};

unsigned long long Person::sharedMoney = 10;
int main() {
	Person::addShared(50);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;

	Person lee;
	lee.money = 150;
	lee.addMoney(200);
	lee.addShared(200);

	cout << han.money << ' '
		<< lee.money << endl;
	cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;
}