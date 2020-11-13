#include <stdio.h>
#include <stdlib.h>

int reverse(char* str)
{
	int i;
	for (i = 0; i < 100; i++)
	{

	}
}
int main(void)
{
	char* string = (char*)malloc(sizeof(char) * 100);
	printf("문자열 입력: ");
	gets(string);
	reverse(string);
	return 0;
}