#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int max = -1;
	for (int i = 1; i <= k; ++i) {
		string str = to_string(i*n);
		reverse(str.begin(), str.end());
		int rev = stoi(str);
		max = rev > max ? rev : max;
	}
	cout << max << endl;

}