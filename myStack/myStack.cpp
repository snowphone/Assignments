#include <iostream>
using namespace std;
class BaseArray {
	const int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 1000) : capacity(capacity) { mem = new int[capacity]; }
	~BaseArray() { if (mem) delete[] mem; }
	void put(int index, int value) { mem[index] = value; }
	const int& get(int index) const { return mem[index]; }
	const int& getCapacity() const { return capacity; }
};
class MyStack : public BaseArray {
	int tos;
public:
	MyStack(int capacity = 100): BaseArray(capacity), tos(0) {}
	void push(int n) {
		if (tos != getCapacity())
			put(tos++, n);
	}
	const int& pop() {
		if (tos != 0)
			return get(--tos);
	}
	const int& capacity() const { return getCapacity(); }
	const int& length() const { return tos; }
};
int main() {
	MyStack mStack(100);
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>>";
	for (int i = 0, n; i<5 && cin >> n; ++i)
		mStack.push(n);
	cout << "���� �뷮: " << mStack.capacity() << ", ���� ũ��: " << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ� >>";
	while (mStack.length())
		cout << mStack.pop() << ' ';
	cout << endl << "������ ���� ũ��: " << mStack.length() << endl;
}