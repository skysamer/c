#include "basicArith.h"


double RectangleRound(double base, double height)
{
	return MUI(ADD(base, height), 2);
}

double SquareRound(double side)
{
	return MUI(side, 4);
}