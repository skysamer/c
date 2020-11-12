#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

int SwapPoint(Point * ptr1, Point * ptr2)
{
	int temp1, temp2;

	temp1 = ptr1->xpos;
	temp2 = ptr1->ypos;

	ptr1->xpos = ptr2->xpos;
	ptr1->ypos = ptr2->ypos;

	ptr2->xpos = temp1;
	ptr2->ypos = temp2;


}

int main(void)
{
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };
	
	Point* ptr1 = &pos1;
	Point* ptr2 = &pos2;
	SwapPoint(&pos1, &pos2);
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
	return 0;
}