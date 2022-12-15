#include "GeometricProgression.h"

GeometricProgression::GeometricProgression()
{
}

GeometricProgression::GeometricProgression(double firstElement, double relation)
{
	this->firstElement = firstElement;
	this->relation = relation;
}

double GeometricProgression::calculatePeogressionSum(int n)
{
	return (firstElement * (pow(relation, n) - 1)) / (relation - 1);
}
