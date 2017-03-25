#include <iostream>
#include <string>
using namespace std;
class Date {
private:
	int day;
	int month;
	int year;
public:
	Date(int y, int m, int d);
	Date(string s);
	void show();
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}
Date::Date(string s) {
	const char separator = '/';
	const int sentinel = -1;
	year = sentinel, month = sentinel, day = sentinel;

	string::iterator it = s.begin();
	for (it; it != s.end(); ++it) {
		if (*it == separator || it == --s.end()) {
			if (year == sentinel)
				year = stoi(string(s.begin(), it));
			else if (month == sentinel)
				month = stoi(string(s.begin(), it));
			else if (day == sentinel) {
				day = stoi(s);
				return;
			}
			s.erase(s.begin(), it+1);
			it = s.begin();
		}
	}
}

void Date::show() {
	cout << getYear() << "³â" << getMonth() << "¿ù" << getDay() << "ÀÏ" << endl;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	birth.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
	return 0;
}