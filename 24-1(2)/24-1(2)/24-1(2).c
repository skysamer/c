#include <stdio.h>

int main(void)
{
	FILE* dsa = fopen("mystory.txt", "at");

	if (dsa == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	fputs("#즐겨먹는 음식: 탕수육 \n", dsa);
	fputs("#취미: 축구 \n", dsa);

	fclose(dsa);
	return 0;
}