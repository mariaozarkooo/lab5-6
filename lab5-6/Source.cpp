#include <iostream>
#include "ArithmeticProgression.h"
#include "GeometricProgression.h"

int main() {
	Progression& arithmetic = *(new ArithmeticProgression(1, 2));
	Progression& geometric = *(new GeometricProgression(1, 2));

	cout << arithmetic.calculatePeogressionSum(2) << endl;
	cout << geometric.calculatePeogressionSum(2) << endl;

	delete &arithmetic;
	delete &geometric;
}
