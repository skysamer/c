#include <stdio.h>
#define STRING_JOB(a, b) #a "�� ������ "#b"�Դϴ�."

int main(void)
{
	printf("%s \n", STRING_JOB(�̵���, ������));
	printf("%s \n", STRING_JOB(�ѻ��, ��ɲ�));
	return 0;
}