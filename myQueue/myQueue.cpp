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
//원형 큐
class MyQueue : public BaseArray {
	int head, tail, size;
public:
	MyQueue(int capacity) : BaseArray(capacity), head(0), tail(0), size(0) { }
	void enqueue(int n) { 
		if (length() != getCapacity()) {
			put(tail, n);
			tail = (tail + 1) % getCapacity();
			++size;
		}
	}
	int dequeue() {
		if (length()) {
			int idx = head;
			head = (head + 1) % getCapacity();
			--size;
			return get(idx);
		}
	}
	const int& capacity() const { return getCapacity(); }
	const int& length() { return tail - head < 0 ? tail - head + getCapacity() : tail - head; }
};

int main() {
	MyQueue mQ(100);
	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0, n; i<5 && cin >> n; ++i)
		mQ.enqueue(n);
	cout << "큐 용량: " << mQ.capacity() << ", 큐의 크기: " << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while (mQ.length() != 0)
		cout << mQ.dequeue() << ' ';
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}

