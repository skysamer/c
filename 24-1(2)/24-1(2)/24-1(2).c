#include <stdio.h>

int main(void)
{
	FILE* dsa = fopen("mystory.txt", "at");

	if (dsa == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputs("#��ܸԴ� ����: ������ \n", dsa);
	fputs("#���: �౸ \n", dsa);

	fclose(dsa);
	return 0;
}