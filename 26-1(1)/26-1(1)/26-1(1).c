#include <stdio.h>
#define ADD(x, y, z) ((x)+(y)+(z))
#define GOP(x, y, z) ((x)*(y)*(z))

int main(void)
{
	int num1, num2, num3;
	printf("3���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("�� ������ ��: %d \n", ADD(num1, num2, num3));
	printf("�� ������ ��: %d \n", GOP(num1, num2, num3));
	return 0;
}