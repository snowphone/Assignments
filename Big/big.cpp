#include <iostream>
#include <algorithm>
using namespace std;
int big(int x, int y, int z = 100) {
	int tmpBig = max(x, y);
	return min(tmpBig, z);
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}