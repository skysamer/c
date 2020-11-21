#include <stdio.h>
#define ADD(x, y, z) ((x)+(y)+(z))
#define GOP(x, y, z) ((x)*(y)*(z))

int main(void)
{
	int num1, num2, num3;
	printf("3개의 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("세 정수의 합: %d \n", ADD(num1, num2, num3));
	printf("세 정수의 곱: %d \n", GOP(num1, num2, num3));
	return 0;
}