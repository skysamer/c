#include "basicArith.h"

double TriangleArea(double base, double height)
{
	return DIV(MUI(base, height), 2);
}

double CircleArea(double rad)
{
	return MUI(MUI(rad, rad), PI);
}