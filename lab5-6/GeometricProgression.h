#pragma once
#include "Progression.h"
#include <math.h>

using namespace std;

class GeometricProgression : public Progression
{

	double firstElement = 0;

	double relation = 0;

public:

	GeometricProgression();

	GeometricProgression(double firstElement, double relation);

	virtual double calculatePeogressionSum(int n);

};
