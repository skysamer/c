#include <stdio.h>

int main(void)
{
	FILE* dsa = fopen("mystory.txt", "wt");
	if (dsa == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	fputs("#이름: 이상민 \n", dsa);
	fputs("#주민번호: 940624-1157422 \n", dsa);
	fputs("#전화번호: 010-6340-4587 \n", dsa);

	fclose(dsa);
	return 0;

}