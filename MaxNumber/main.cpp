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
	cout << "입력하려는 정수는? ";
	cin >> size;
	for (int i = 0, buf = 0; i != size; ++i) {
		cin >> buf;
		p[i] = buf;
	}
}

void Sample::write() {
	cout << "동적배열 정수 " << size << "개를 출력합니다.";
	for (int i = 0; i != size; ++i) {
		cout << p[i] << ' ';
	}
	cout << endl;
}
int main() {
	Sample s(10);
	s.read();
	cout << "동적배열 정수 " << s.getSize() << "개를 출력합니다. " << endl;
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}