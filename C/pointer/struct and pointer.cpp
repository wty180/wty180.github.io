#include <stdio.h>

typedef struct  
{
	int x;
	int y;
}point;

int main()
{
	point p;
	p.x=2;
	p.y=5;
	point *pp;
	pp=&p;//pp´æµÄÊÇµØÖ·
	(*pp).x=6;
	(*pp).y=8;
	printf("x=%d,y=%d",pp->x,pp->y);
	return 0;
}
