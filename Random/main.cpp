#include "Random.h"
using namespace std;

int main() {
	EvenRandom r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10개--" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.next();
		cout << n << ' ';
	}
	int low = 2, high = 10;
	cout << endl << endl
		<< "--"<<low<<"에서 "<<high<<"까지의 랜덤 짝수 정수 10개 --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.nextInRange(low, high);
		cout << n << ' ';
	}
	cout << endl;
}