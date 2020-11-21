#include <stdio.h>
// #define STNUM(y, s, p) ysp
// #define STNUM(y, s, p) y s p
#define STNUM(y, s, p) y##s##p

int main(void)
{
	printf("학번: %d \n", STNUM(10, 65, 175));
	printf("학번: %d \n", STNUM(10, 65, 075));
	return 0;
}