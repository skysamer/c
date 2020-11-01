#include <stdio.h>

int ConvCase(int ch)
{
	int diff = 'a' - 'A';     // 소문자-대문자=32
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main(void)
{
	int ch;
	printf("문자 입력: ");
	ch = getchar();
	ch = ConvCase(ch);
	if (ch == -1)
	{
		puts("범위를 벗어난 입력입니다.");
		return -1;
	}
	putchar(ch);
	return 0;
}