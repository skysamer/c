#include <stdio.h>

int main(void)
{
	FILE* asd = fopen("mystory.txt", "rt");

	if (asd == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	char str[100];
	int i;

	for (i = 0; i < 5; i++)
	{
		fgets(str, sizeof(str), asd);
		printf("%s", str);
	}
	fclose(asd);
	return 0;
}