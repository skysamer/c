#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	int you1, you2, you3;
	int com1, com2, com3;
	int s, b;
	srand((int)time(NULL));

	com1 = rand() % 10;
	com2 = rand() % 10;
	com3 = rand() % 10;

	printf("Start Game!\n");
	for (i = 1; i < 100; i++)
	{
		s = 0, b = 0;
		printf("3개의 숫자 선택: ");
		scanf_s("%d %d %d", &you1, &you2, &you3);

		if (you1 == com1)
			s += 1;
		else if (you1 == com2 || you1 == com3)
			b += 1;

		if (you2 == com2)
			s += 1;
		else if (you2 == com1 || you2 == com3)
			b += 1;

		if (you3 == com3)
			s += 1;
		else if (you3 == com2 || you3 == com1)
			b += 1;

		printf("%d번째 도전 결과: %dstrike, %dball!!\n", i, s, b);
		if (s == 3)
			break;
	}
	printf("\n");
	printf("Game Over!");
	return 0;
}