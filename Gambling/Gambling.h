#pragma once
#ifndef _Gambling_h
#define _Gambling_h
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
class Player {
private:
	std::string name;
public:
	Player()  {}
	Player(std::string n) { name = n; }
	std::string getName() const { return name; }
	void getEnterKey() {
		std::string keyin;
		std::getline(std::cin, keyin);
	}
};

class GamblingGame {
private:
	int num[3];
public:
	void display() {
		std::cout << '\t' << num[0] << '\t' << num[1] << '\t' << num[2] << '\t';
	}
	bool matchAll() {
		for(int i=0; i<3-1; ++i)
			if (num[i] != num[i+1])
				return false;
		return true;
	}
	GamblingGame() { srand(unsigned(time(0))); };
	void randomNumGen() {
		for(int i=0; i<3; ++i)
			num[i] = rand() % 3;
	}
};

#endif // !_Gambling_h

