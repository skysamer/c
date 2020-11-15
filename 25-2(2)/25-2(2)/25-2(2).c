#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, s;
	int arrlen = 5;
	int* arr = (int*)malloc(sizeof(int) * arrlen);

	for (i = 0; i < arrlen; i++)
	{
		printf("정수 입력: ");
		scanf_s("%d", &arr[i]);
		if (arrlen==i+1)
		{
			arrlen += 3;
			arr = (int*)realloc(arr, sizeof(int) * arrlen);
		}
		if (arr[i] == -1)
		{
			break;
		}
			
	}
	for (s = 0; s < i; s++)
		printf("%d ", arr[s]);
	free(arr);
	return 0;
}