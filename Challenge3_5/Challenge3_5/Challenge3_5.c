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
		printf("������ %d, ������ %d, ���� %d: ", 1, 2, 3);
		scanf_s("%d", &num);
		computer = rand() % 3;
		if (num == 1)
			printf("����� ���� ����, ");
		else if (num == 2)
			printf("����� ���� ����, ");
		else if (num == 3)
			printf("����� �� ����, ");
		else
		{
			printf("���ڸ� ����� �Է��� �ּ���\n\n");
			continue;
		}


		if (computer == 0)
			printf("��ǻ�ʹ� ���� ����, ");
		else if (computer == 1)
			printf("��ǻ�ʹ� ���� ����, ");
		else if (computer == 2)
			printf("��ǻ�ʹ� �� ����, ");


		if (num == 1 && computer == 0)
		{
			printf("�����ϴ�!\n");
			d += 1;
		}
		else if (num == 1 && computer == 1)
		{
			printf("����� �̰���ϴ�!\n");
			s += 1;
		}
		else if (num == 1 && computer == 2)
		{
			printf("����� �����ϴ�!\n");
			break;
		}


		if (num == 2 && computer == 1)
		{
			printf("�����ϴ�!\n");
			d += 1;
		}
		else if (num == 2 && computer == 2)
		{
			printf("����� �̰���ϴ�!\n");
			s += 1;
		}
		else if (num == 2 && computer == 0)
		{
			printf("����� �����ϴ�!\n");
			break;
		}


		if (num == 3 && computer == 2)
		{
			printf("�����ϴ�!\n");
			d += 1;
		}
		else if (num == 3 && computer == 0)
		{
			printf("����� �̰���ϴ�!\n");
			s += 1;
		}
		else if (num == 3 && computer == 1)
		{
			printf("����� �����ϴ�!\n");
			break;
		}
	}

	printf("������ ���: %d��, %d�� \n", s, d);
	return 0;
}