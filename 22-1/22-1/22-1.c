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
	printf("이름: "); scanf("%s", employee.name);
	printf("주민번호: "); scanf("%s", employee.num);
	printf("급여정보: "); scanf("%d", &(employee.money));

	printf("이름: %s \n", employee.name);
	printf("주민번호: %s \n", employee.num);
	printf("급여정보: %d \n", employee.money);
	return 0;
}