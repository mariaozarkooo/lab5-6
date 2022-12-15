#pragma once

#include "Progression.h"

class ArithmeticProgression : public Progression
{

	double firstElement = 0;

	double relation = 0;

public:

	ArithmeticProgression();

	ArithmeticProgression(double firstElement, double relation);

	virtual double calculatePeogressionSum(int n);

};
