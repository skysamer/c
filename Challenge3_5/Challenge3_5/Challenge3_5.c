#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	int num;
	int computer;
	int s = 0, d = 0;
	srand((int)time(NULL));

	for (i = 0; i < 100; i++)
	{
		printf("바위는 %d, 가위는 %d, 보는 %d: ", 1, 2, 3);
		scanf_s("%d", &num);
		computer = rand() % 3;
		if (num == 1)
			printf("당신은 바위 선택, ");
		else if (num == 2)
			printf("당신은 가위 선택, ");
		else if (num == 3)
			printf("당신은 보 선택, ");
		else
		{
			printf("숫자를 제대로 입력해 주세요\n\n");
			continue;
		}


		if (computer == 0)
			printf("컴퓨터는 바위 선택, ");
		else if (computer == 1)
			printf("컴퓨터는 가위 선택, ");
		else if (computer == 2)
			printf("컴퓨터는 보 선택, ");


		if (num == 1 && computer == 0)
		{
			printf("비겼습니다!\n");
			d += 1;
		}
		else if (num == 1 && computer == 1)
		{
			printf("당신이 이겼습니다!\n");
			s += 1;
		}
		else if (num == 1 && computer == 2)
		{
			printf("당신이 졌습니다!\n");
			break;
		}


		if (num == 2 && computer == 1)
		{
			printf("비겼습니다!\n");
			d += 1;
		}
		else if (num == 2 && computer == 2)
		{
			printf("당신이 이겼습니다!\n");
			s += 1;
		}
		else if (num == 2 && computer == 0)
		{
			printf("당신이 졌습니다!\n");
			break;
		}


		if (num == 3 && computer == 2)
		{
			printf("비겼습니다!\n");
			d += 1;
		}
		else if (num == 3 && computer == 0)
		{
			printf("당신이 이겼습니다!\n");
			s += 1;
		}
		else if (num == 3 && computer == 1)
		{
			printf("당신이 졌습니다!\n");
			break;
		}
	}

	printf("게임의 결과: %d승, %d무 \n", s, d);
	return 0;
}