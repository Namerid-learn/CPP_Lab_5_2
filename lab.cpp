#include "lab.h"

#include <math.h>
#include <iostream>

using namespace std;

int DigitCount(int n) {
	int count = 0;

	while (n != 0) {
		n /= 10;
		count++;
	}

	return count;
}