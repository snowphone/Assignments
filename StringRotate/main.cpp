#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "����� ���ڿ��� �Է��ϼ���" << endl;
	getline(cin, s);

	for (int i = 0; i != s.size(); ++i) {
		string first = s.substr(0, 1);
		string sub = s.substr(1, s.size());
		s = sub + first;
		cout << s << endl;
	}
}