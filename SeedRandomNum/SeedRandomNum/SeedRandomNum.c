#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int seed, i;
	printf("���� �� �Է�: ");
	scanf_s("%d", &seed);
	srand(seed);    // ������ �ɴ´�.

	for (i = 0; i < 5; i++)
		printf("���� ���: %d \n", rand());      // ���Ÿ� ��Ȯ�Ѵ�.
	return 0;
}