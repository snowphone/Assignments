#include "Gambling.h"
using namespace std;
int main() {
	Player p[2] = { Player("Kim"), Player("Park") };
	GamblingGame g;

	cout << "첫번째 선수 이름>>" << p[0].getName() << endl;
	cout << "두번째 선수 이름>>" << p[1].getName() << endl;

	int loop = 0;
	bool result = false;
	do {
		int n = loop++ % 2;
		cout << p[n].getName() << ':';
		p[n].getEnterKey();
		g.randomNumGen();
		g.display();
		if ((result = g.matchAll()) == true)
			cout << p[n].getName() << "님 승리!!" << endl;
		else
			cout << "아쉽군요!" << endl;
	} while (result == false);
}