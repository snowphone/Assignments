#include <iostream>
using namespace std;
class statistics {
private:
	int *p;
	int idx;
public:
	statistics(): idx(0), p(NULL) { p = new int[100]; }
	~statistics() { if (p) delete[] p; }
	bool operator!(){
		if (idx) return false;
		else return true;
	}
	statistics& operator<<(int x) {
		p[idx++] = x;
		return *this;
	}
	void operator~() {
		for (int i = 0; i < idx; ++i) 
			cout << p[i] << ' ';
		cout << endl;
	}
	statistics& operator>>(int& ret) {
		ret = 0;
		for (int i = 0; i < idx; ++i)
			ret += p[i];
		ret /= idx;
		return *this;
	}
};
int main() {
	statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;
	int x[5];
	cout << "5개의 정수를 입력하라>>";
	for (int i = 0; i < 5; ++i)	cin >> x[i];

	for (int i = 0; i< 5; ++i)	stat << x[i];
	stat << 100 << 200;
	~stat;
	int avg;
	stat >> avg;
	cout << "avg= " << avg << endl;
}