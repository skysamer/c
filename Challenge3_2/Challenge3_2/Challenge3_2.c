#include <stdio.h>

int main(void)
{
	int arr[100][100];
	int i, j;
	int n;
	int x = 0, y = 0;         // �ݺ����� ���������� ������ ��� ����
	int num;
	int k = 1;                // ����� ��������, ���������� �������� ����
	int result=1;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	for (n = 0; n < num; n++)         // ù ��° ���� �켱������ �ϼ��ϱ� ���� �ݺ���
	{
		arr[x][y] = result++;
		y++;
	}
	y -= 1;

	for (i = num - 1; i > 0; i--)       //���� ��� �ݺ���
	{
		for (j = 0; j < i; j++)
		{
			x += k;
			arr[x][y] = result++;
		}
		k *= -1;
		for (n = 0; n < i; n++)
		{
			y += k;
			arr[x][y] = result++;
		}
	}

	for (i = 0; i < num; i++)               // ���!!
	{
		for (j = 0; j < num; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}