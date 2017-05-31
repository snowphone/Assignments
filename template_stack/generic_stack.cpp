#include <iostream>
using namespace std;

template <class T>
class Stack {
	int tos;
	T data[100];
public:
	Stack() : tos(0) {}
	void push(const T& element);
	T pop();
};
template<class T>
void Stack<T>::push(const T& element) {
	if (tos == 99) {
		std::cout << "stack full";
		return;
	}
	data[tos++] = element;
}
template<class T>
T Stack<T>::pop() {
	if (tos == 0) {
		std::cout << "stack empty";
		return 0;
	}
	return data[--tos];
}
int main() {
	Stack<int> istack;
	istack.push(3);
	istack.push(4);
	istack.push(5);
	cout << istack.pop() << endl;
	cout << istack.pop() << endl
		<< istack.pop() << endl;

	Stack<double> dstack;
	dstack.push(3.5);
	cout << dstack.pop() << endl;

	Stack<char>* p = new Stack<char>();
	p->push('a');
	cout << p->pop() << endl;
	delete	p;
}