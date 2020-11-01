#include <stdio.h>
#include <string.h>


int main(void)
{
	char str1[100];
	char str2[100];
	char str3[100];

	printf("문자열 입력 %d: ", 1);
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	printf("문자열 입력 %d: ", 2);
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;      // \n문자 삭제

	strcpy(str3, str1);
	strcat(str3, str2);

	printf("%s \n", str3);
	return 0;
}