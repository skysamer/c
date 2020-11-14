#include <stdio.h>

int main(void)
{
	FILE* src = fopen("pepescoots.png", "rb");
	FILE* des = fopen("dst.png", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����!");
	}
	
	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("���Ϻ��� �Ϸ�!");
				break;
			}
			else
				puts("���Ϻ��� ����!");

			break;
		}
		
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);
	return 0;
}