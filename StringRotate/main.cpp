#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "영어로 문자열을 입력하세요" << endl;
	getline(cin, s);

	for (int i = 0; i != s.size(); ++i) {
		string first = s.substr(0, 1);
		string sub = s.substr(1, s.size());
		s = sub + first;
		cout << s << endl;
	}
}