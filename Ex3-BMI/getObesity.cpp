#include<iostream>
#include"getObsity.h"

float getObsity(double bmi)
{
	float tempObsity;

	if(bmi>=40)
	{
		tempObsity = 4;
	}
	else if(bmi>=35)
	{
		tempObsity = 3;
	}
	else if(bmi>=30)
	{
		tempObsity = 2;
	}
	else if(bmi>=25)
	{
		tempObsity = 1;
	}
	else if(bmi>=18.5)
	{
		tempObsity = 0;
	}
	else
	{
		tempObsity = -1;
	}

	return tempObsity;
}