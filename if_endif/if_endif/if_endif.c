#include <stdio.h>
#define ADD 1
#define MIN 0

int main(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

#if ADD     // ADD�� ���̶��
	printf("%d+%d =%d \n", num1, num2, num1 + num2);
#endif

#if MIN // MIN�� ���̶��
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
#endif

	return 0;
}