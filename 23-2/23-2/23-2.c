#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct rectangle
{
	Point ld;
	Point ru;
}Rectangle;

int extent(Rectangle rec)
{
	printf("���簢���� ����: %d \n", (rec.ru.xpos - rec.ld.xpos) * (rec.ru.ypos - rec.ld.ypos));
}

int dot(Rectangle rec)
{
	printf("�� �ϴ�: [%d, %d] \n", rec.ld.xpos, rec.ld.ypos);
	printf("�� ���: [%d, %d] \n", rec.ld.xpos, rec.ru.ypos);
	printf("�� �ϴ�: [%d, %d] \n", rec.ru.xpos, rec.ld.ypos);
	printf("�� ���: [%d, %d] \n", rec.ru.xpos, rec.ru.ypos);
}

int main(void)
{
	Rectangle rec1 = { {2, 5}, {8, 9} };
	extent(rec1);
	dot(rec1);
	return 0;
}

