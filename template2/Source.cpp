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
		cout << num << "�� �迭 x�� ���ԵǾ� �ִ�." << endl;
	else
		cout << num << "�� �迭 x�� ���ԵǾ� ���� �ʴ�." << endl;

	char c[] = { 'h', 'e', 'l', 'l', 'o' };
	char word = 'e';
	if (search(word, c, sizeof(c)))
		cout << word << "�� �迭 c�� ���ԵǾ� �ִ�." << endl;
	else
		cout << word<<"�� �迭 c�� ���ԵǾ� ���� �ʴ�." << endl;
}