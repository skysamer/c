#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char str[100];
	

	printf("���ڿ� �Է�: ");
	gets(str);
	int len = strlen(str);

	for (i = len-1; i > 0; i--)
	{
		if (str[i] == ' ')
		{
			printf("%s ", &str[i + 1]);      // ���� ���� �ܾ ��°�� ����ϱ� ���� �ּҰ��� ����Ѵ�. 
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);      // ù �ܾ�� �ݺ������� ����� �ȵǱ⿡ ���� ������ش�. 
	return 0;
}