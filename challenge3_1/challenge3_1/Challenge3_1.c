#include <stdio.h>

void Rotation(int (*arr)[4])     // ȸ����Ű�� �Լ�
{
	int temp[4][4];   // ������ �迭����
	int i, j;
	int n;
	for (i = 0; i < 4; i++)
	{
		n = 3;
		for (j = 0; j < 4; j++)
		{
			temp[i][n] = arr[j][i];
			n--;
		}

	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = temp[i][j];
		}
	}
}

int main(void)
{
	int arr[4][4] =
	{ {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
	int i, j;
	int* ptr = arr;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	Rotation(arr);             // ù ��° ȸ�� �� ���
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	Rotation(arr);            // �� ��° ȸ�� �� ���
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	Rotation(arr);                 // ������ �� ��° ȸ�� �� ���
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}