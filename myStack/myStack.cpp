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
	cout << "스택에 삽입할 5개의 정수를 입력하라>>";
	for (int i = 0, n; i<5 && cin >> n; ++i)
		mStack.push(n);
	cout << "스택 용량: " << mStack.capacity() << ", 스택 크기: " << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다 >>";
	while (mStack.length())
		cout << mStack.pop() << ' ';
	cout << endl << "스택의 현재 크기: " << mStack.length() << endl;
}