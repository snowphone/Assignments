#pragma once
#ifndef _EvenRandom_H
#define _EvenRandom_H
#include <iostream>
#include <cstdlib>
#include <ctime>

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int low, int high);
};
#endif // !_EvenRandom_H