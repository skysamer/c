#include <stdio.h>

struct employee
{
	char name[20];
	char num[20];
	int money;
};
struct employee employee;

int main(void)
{
	printf("�̸�: "); scanf("%s", employee.name);
	printf("�ֹι�ȣ: "); scanf("%s", employee.num);
	printf("�޿�����: "); scanf("%d", &(employee.money));

	printf("�̸�: %s \n", employee.name);
	printf("�ֹι�ȣ: %s \n", employee.num);
	printf("�޿�����: %d \n", employee.money);
	return 0;
}