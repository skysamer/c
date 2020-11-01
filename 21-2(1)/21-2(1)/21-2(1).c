#include <stdio.h>
#include <string.h>

int ConvToInt(char c)
{
	int diff = 1 - '1';
	return c + diff;
}

int main(void)
{
	int sum = 0;
	int i;
	char str[100];

	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);

	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ('1' <= str[i] && str[i]<='9')
			sum += ConvToInt(str[i]);
	}
	printf("문자열에 포함된 숫자의 총 합: %d\n", sum);
	return 0;
}