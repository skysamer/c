#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char str[100];
	

	printf("문자열 입력: ");
	gets(str);
	int len = strlen(str);

	for (i = len-1; i > 0; i--)
	{
		if (str[i] == ' ')
		{
			printf("%s ", &str[i + 1]);      // 띄어쓰기 뒤의 단어를 통째로 출력하기 위해 주소값을 출력한다. 
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);      // 첫 단어는 반복문으로 출력이 안되기에 따로 출력해준다. 
	return 0;
}