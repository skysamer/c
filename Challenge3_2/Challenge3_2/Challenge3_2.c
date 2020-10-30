#include <stdio.h>

int main(void)
{
	int arr[100][100];
	int i, j;
	int n;
	int x = 0, y = 0;         // 반복문을 돌리기위한 임의의 행렬 변수
	int num;
	int k = 1;                // 행렬의 오름차순, 내림차순을 설정해줄 변수
	int result=1;

	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);

	for (n = 0; n < num; n++)         // 첫 번째 행을 우선적으로 완성하기 위한 반복문
	{
		arr[x][y] = result++;
		y++;
	}
	y -= 1;

	for (i = num - 1; i > 0; i--)       //나선 행렬 반복문
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

	for (i = 0; i < num; i++)               // 출력!!
	{
		for (j = 0; j < num; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}