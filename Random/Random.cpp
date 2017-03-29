#include "Random.h"

	EvenRandom::EvenRandom() {
		srand(unsigned(time(0)));
	}
int EvenRandom::next() {
	int ret = 0;
	do ret = rand();
	while (ret % 2 == 1);
	return ret;
}
int EvenRandom::nextInRange(int low, int high) {
	int ret = 0;
	do ret = rand() % (high - low + 1) + low;
	while (ret % 2 == 1);
	return ret;
}