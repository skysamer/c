#include <stdio.h>

// �Ʒ��� �迭�� �����Ǿ����Ƿ� �ڵ� 0���� �ʱ�ȭ
int record[5][5];        // �л����� ������ �����ϱ� ���� �迭

/*�л��� ������ �Է�*/
void WriteRecord(void)
{
	int sum;    // �л��� ������ �հ�
	int i, j;
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		printf("%d��° �л��� ���� �Է� \n", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("����%d: ", j + 1);
			scanf_s("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4] = sum;
	}
}

/*���� ������ �հ� �Է�*/
void WriteSumRecord(void)
{
	int sum = 0;      //���� ���� �հ�
	int i, j;

	for (j = 0; j < 4; j++)
	{
		sum = 0;
		for (i = 0; i < 4; i++)
			sum += record[i][j];
		record[4][j] = sum;
		record[4][4] += sum;
	}
}

/*�迭�� ����� �� ��ü ���*/
void ShowAllRecord(void)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d ", record[i][j]);
		printf("\n");
	}
}

int main(void)
{
	WriteRecord();
	WriteSumRecord();
	ShowAllRecord();
	return 0;
}