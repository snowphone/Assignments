#include <iostream>
#include <algorithm>
using namespace std;
class Sample {
	int *p; int capacity; int size;
public:
	Sample(int n) : capacity(n), size(0) { p = new int[n]; }
	~Sample() { delete[] p; }

	void read();
	void write();
	const int& getSize() const  { return size; }
	int big();
};
int Sample::big() {
	int ret = -1;
	for (int i = 0; i != size; ++i) {
		ret = max(ret, p[i]);
	}
	return ret;
}

void Sample::read() {
	cout << "�Է��Ϸ��� ������? ";
	cin >> size;
	for (int i = 0, buf = 0; i != size; ++i) {
		cin >> buf;
		p[i] = buf;
	}
}

void Sample::write() {
	cout << "�����迭 ���� " << size << "���� ����մϴ�.";
	for (int i = 0; i != size; ++i) {
		cout << p[i] << ' ';
	}
	cout << endl;
}
int main() {
	Sample s(10);
	s.read();
	cout << "�����迭 ���� " << s.getSize() << "���� ����մϴ�. " << endl;
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
}