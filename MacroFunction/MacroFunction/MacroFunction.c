#include <stdio.h>

#define SQUARE(x) x*x

int main(void)
{
	int num = 20;

	/*정상적 결과 출력*/
	printf("square of num: %d \n", SQUARE(num));
	printf("square of -5: %d \n", SQUARE(-5));
	printf("square of 2.5: %g \n", SQUARE(2.5));

	/*비정상적 결과 출력*/
	printf("square of 3+2: %d \n", SQUARE(3 + 2));
	return 0;
}