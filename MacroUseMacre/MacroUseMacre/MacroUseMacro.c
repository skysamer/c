#include <stdio.h>
#define PI 3.14
#define PRODUCT(x, y) ((x)*(y))
#define CIRCLE_AREA(r) (PRODUCT((r), (r))*PI)

int main(void)
{
	double rad = 2.1;
	printf("������ %g�� ���� ����: %g \n", rad, CIRCLE_AREA(rad));
	return 0;
}