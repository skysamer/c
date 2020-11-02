#include <stdio.h>

struct employee
{
	char name[20];
	char num[20];
	int money;
};

int main(void)
{
	struct employee arr[3] = {
		{"¿ÃªÛπŒ", "940624-1157422", 27},
		{"±«¡§ºˆ", "941108-1496035", 27},
		{"¿Ã¡§√∂", "940909-1134567", 27}
	};
	int i;
	for (i = 0; i < 3; i++)
		printf("%s %s %d \n", arr[i].name, arr[i].num, arr[i].money);
	return 0;
}