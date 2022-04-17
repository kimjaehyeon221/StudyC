//#include <cstdlib>
//#include <ctime>
//#include "OldRandom.h"
//
//OldRandom::OldRandom() {
//	srand((unsigned)time(0));
//}
//
//int OldRandom::next() {
//	do {
//		int x = rand();
//	} while (x % 2 == 0);
//	return x;
//}
//
//int OldRandom::nextInRange(int a, int b) {
//	do {
//		int x = rand() % (b - a + 1) + a;
//	} while (x % 2 == 0);
//	return x;
//
//}