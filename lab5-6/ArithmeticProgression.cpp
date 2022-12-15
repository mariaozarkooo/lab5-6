#include "ArithmeticProgression.h"

ArithmeticProgression::ArithmeticProgression()
{
}

ArithmeticProgression::ArithmeticProgression(double firstElement, double relation)
{
	this->firstElement = firstElement;
	this->relation = relation;
}

double ArithmeticProgression::calculatePeogressionSum(int n)
{
	return n * ((firstElement + (firstElement + relation * (n - 1))) / (2));
}
