#include "Random.h"
using namespace std;

int main() {
	EvenRandom r;
	cout << "--0���� " << RAND_MAX << "������ ���� ¦�� ���� 10��--" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.next();
		cout << n << ' ';
	}
	int low = 2, high = 10;
	cout << endl << endl
		<< "--"<<low<<"���� "<<high<<"������ ���� ¦�� ���� 10�� --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.nextInRange(low, high);
		cout << n << ' ';
	}
	cout << endl;
}