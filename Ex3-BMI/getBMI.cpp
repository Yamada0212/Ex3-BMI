#include"getBMI.h"

double getBMI(double height, double weight)
{
	double bmi;
	height /= 100;
	bmi = weight / (height * height);
	return bmi;
}