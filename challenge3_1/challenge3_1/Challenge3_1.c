#include <stdio.h>

void Rotation(int (*arr)[4])     // 회전시키는 함수
{
	int temp[4][4];   // 임의의 배열설정
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

	Rotation(arr);             // 첫 번째 회전 후 출력
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	Rotation(arr);            // 두 번째 회전 후 출력
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	Rotation(arr);                 // 마지막 세 번째 회전 후 출력
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