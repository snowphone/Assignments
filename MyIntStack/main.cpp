#include <iostream>
using namespace std;
class MyIntStack {
private:
	int p[10];
	int tos;
public:
	MyIntStack() : tos(-1) {};
	bool push(int n);
	bool pop(int &a);
};

int main() {
	MyIntStack a;
	for (int i = 0; i < 11; ++i) {
		if (a.push(i))	cout << i << ' ';
		else {
			cout << endl << i + 1 << "번째 stack full" << endl;
		}
	}
	for (int i = 0, n; i < 11; ++i) {
		if (a.pop(n))	cout << n << ' ';
		else	cout << endl << i + 1 << "번째 stack empty";
	}
	cout << endl;
}

bool MyIntStack::push(int n) {
	if (tos < 9) {
		p[++tos] = n;
		return true;
	} else
		return false;
}

bool MyIntStack::pop(int & a) {
	if (tos < 0)
		return false;
	else {
		a = p[tos--];
		return true;
	}
}
