#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int SpaceBar(char str[])
{
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			return i;
	}
	return -1;      // ���� ���ڰ� �������� �ʴ� ����� ��ȯ
}

int CompName(char str1[], char str2[])
{
	int space1 = SpaceBar(str1);
	int space2 = SpaceBar(str2);

	if (space1 != space2)
		return 0;
	else
		return !strncmp(str1, str2, space1);
}

int CompAge(char str1[], char str2[])
{
	int space1 = SpaceBar(str1);
	int space2 = SpaceBar(str2);
	int age1, age2;

	age1 = atoi(&str1[space1 + 1]);
	age2 = atoi(&str2[space2 + 1]);

	if (age1 == age2)
		return 1;
	else
		return 0;
}

int main(void)
{
	char str1[20];
	char str2[20];

	printf("ù ��° ��� ���� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("�� ��° ��� ���� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (CompName(str1, str2))
		puts("�̸��� �����մϴ�.");
	else
		puts("�̸��� �������� �ʽ��ϴ�.");

	if (CompAge(str1, str2))
		puts("���̰� �����ϴ�.");
	else
		puts("���̰� ���� �ʽ��ϴ�.");
	
	return 0;

}