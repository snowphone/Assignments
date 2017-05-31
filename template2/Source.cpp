#include <iostream>
using namespace std;
template<class T>
bool search(T find, T* array, size_t size) {
	for (T* end = array + size; array != end; ++array)
		if (*array == find)
			return true;
	return false;
}

int main() {
	int x[] = { 1,10, 100, 5, 4 };
	int num = 100;
	if (search(num, x, sizeof(x)))
		cout << num << "이 배열 x에 포함되어 있다." << endl;
	else
		cout << num << "이 배열 x에 포함되어 있지 않다." << endl;

	char c[] = { 'h', 'e', 'l', 'l', 'o' };
	char word = 'e';
	if (search(word, c, sizeof(c)))
		cout << word << "이 배열 c에 포함되어 있다." << endl;
	else
		cout << word<<"이 배열 c에 포함되어 있지 않다." << endl;
}