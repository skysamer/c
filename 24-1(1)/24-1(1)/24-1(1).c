#include <stdio.h>

int main(void)
{
	FILE* dsa = fopen("mystory.txt", "wt");
	if (dsa == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputs("#�̸�: �̻�� \n", dsa);
	fputs("#�ֹι�ȣ: 940624-1157422 \n", dsa);
	fputs("#��ȭ��ȣ: 010-6340-4587 \n", dsa);

	fclose(dsa);
	return 0;

}