#include <stdio.h>
#define HIT_NUM 7

int main(void)
{
#if HIT_NUM==5
	puts("HIT_NUM은 현재 5입니다.");
#elif HIT_NUM==6
	puts("HIT_NUM은 현재 6입니다.");
#elif HIT_NUM==7
	puts("HIT_NUM은 현재 7입니다.");
#else
	puts("HIT_NUM은 5, 6, 7이 확실히 아닙니다.");
#endif

	return 0;
}