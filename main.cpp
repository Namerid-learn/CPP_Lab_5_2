#include "lab.h"

#include <math.h>
#include <iostream>
#include <cmath>


using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int const n = 5;

    int Numbers[n];
	int number;

	for (int i = 0; i < n; i++) {
		cout << "������� " << i + 1 << "-� �����: ";
		cin >> number;
		Numbers[i] = number;
		cin.ignore(32767, '\n');
		if (cin.fail() || number <=0) {
			cout << "������ �����" << endl;
			return 1;
		}
	}
    
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". " << Numbers[i] << " - " << DigitCount(Numbers[i]) << endl;
	}

	return 0;
}