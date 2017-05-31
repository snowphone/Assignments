#include <iostream>
#include <numeric>
using namespace std;
template <class T>
T add(T data[], int n) {
	T sum = 0;
	for (T* end = data + n; data != end; ++data)
		sum += *data;
	return sum;
	//return accumulate(data, data + n, (T)0);
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };
	cout << add(x, sizeof(x)/sizeof(int)) << endl;
	cout << add(d, sizeof(d)/sizeof(double)) << endl;
}