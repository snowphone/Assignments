#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s;
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그리며, 텍스트의 끝은 ; 입니다." << endl;
	//below code is for debug.
	ifstream cin("testdata.txt");

	getline(cin, s, ';');
	map<char, int> m;
	
	//count number of each alphabets.
	for (auto it = s.begin(); it != s.end(); ++it) {
		if (isalpha(*it)) {
			m[tolower(*it)]++;
		}
	}

	//count total characters
	//make index if the character doesn't appeared.
	int sum = 0;
	for (char c = 'a'; c <= 'z'; ++c)
		sum += m[c];
	cout << "총 알파벳 수: " << sum << endl;

	//display
	for (auto it = m.begin(); it != m.end(); ++it) {
		cout << it->first << " (" << it->second << ")	: " << string(it->second, '*') << endl;
	}
}