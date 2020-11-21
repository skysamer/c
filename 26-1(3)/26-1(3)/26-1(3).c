#include <stdio.h>
#define MAX(x, y) ((x)>(y) ? (x) : (y))

int main(void)
{
	int i, s;
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &i, &s);

	printf("더 큰 숫자: %d \n", MAX(i, s));
	return 0;
}