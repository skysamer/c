#include <stdio.h>

void MaxAndMin(int** maxDptr, int** minDptr, int* arr, int size)
{
	int* max, * min;
	int i;

	max = min = &arr[0];
	for (i = 0; i < size; i++)
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}
	*maxDptr = max;
	*minDptr = min;
}

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("정수 입력 %d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(&maxPtr, &minPtr, arr, sizeof(arr) / sizeof(int));
	printf("최대: %d, 최소: %d \n", *maxPtr, *minPtr);
	return 0;
}