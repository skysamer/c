#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, seed;
	srand((int)time(NULL));
	for (i = 1; i < 3; i++)
	{
		printf("�ֻ��� %d�� ��� %d \n", i, (rand() % 6)+1);
	}
		
	return 0;
}