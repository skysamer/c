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

	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);

	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ('1' <= str[i] && str[i]<='9')
			sum += ConvToInt(str[i]);
	}
	printf("���ڿ��� ���Ե� ������ �� ��: %d\n", sum);
	return 0;
}