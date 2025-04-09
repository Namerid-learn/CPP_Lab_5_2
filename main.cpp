#include "lab.h"

#include <math.h>
#include <iostream>
#include <cmath>


using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int const n = 5;

    int Numbers[n];

	for (int i = 0; i < n; i++) {
		cout << "¬ведите " << i + 1 << "-е число: ";
		cin >> Numbers[i];
		cin.ignore(32767, '\n');
		if (cin.fail()) {
			cout << "ќшибка ввода" << endl;
			return 1;
		}
	}
    
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". " << Numbers[i] << " - " << DigitCount(Numbers[i]) << endl;
	}

	return 0;
}