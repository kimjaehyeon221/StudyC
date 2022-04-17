//#include <cstdlib>
//#include <ctime>
//#include "EvenRandom.h"
//
//EvenRandom::EvenRandom() {
//	srand((unsigned)time(0));
//}
//
//int EvenRandom::next() {
//	do {
//		int x = rand();
//	} while (x % 2 == 1);
//	return x;
//}
//
//int EvenRandom::nextInRange(int a, int b) {
//	do {
//		int x = rand() % (b - a + 1) + a;
//	} while (x % 2 == 1);
//	return x;
//}
