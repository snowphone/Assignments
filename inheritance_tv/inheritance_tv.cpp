#include <iostream>
#include <string>
using namespace std;
class TV {
	int size;
public:
	TV(int size = 20): size(size){}
	const int& getSize() const { return size; }
};
class WideTV : public TV {
	bool videoIn;
public:
	WideTV(int size, bool videoIn): TV(size), videoIn(videoIn){}
	const bool& getVideoIn() const { return videoIn; }
};
class SmartTV : public WideTV {
	string ipAddr;
public:
	SmartTV(const string& ipAddr, int size) : WideTV(size, true), ipAddr(ipAddr){}
	const string& getAddr() const { return ipAddr; }
};
int main() {
	SmartTV tv("192.168.1.1", 32);
	cout << tv.getAddr() << endl
		<< tv.getSize() << endl
		<< tv.getVideoIn() << endl;
}