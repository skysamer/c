#include <stdio.h>
#define MAX(x, y) ((x)>(y) ? (x) : (y))

int main(void)
{
	int i, s;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &i, &s);

	printf("�� ū ����: %d \n", MAX(i, s));
	return 0;
}