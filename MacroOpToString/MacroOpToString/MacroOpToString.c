#include <stdio.h>
#define STRING_JOB(a, b) #a "의 직업은 "#b"입니다."

int main(void)
{
	printf("%s \n", STRING_JOB(이동춘, 나무꾼));
	printf("%s \n", STRING_JOB(한상순, 사냥꾼));
	return 0;
}