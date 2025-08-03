#include <stdio.h>

struct point
{
	int x;
	int y;
};

struct point create_point(int x,int y);

int main()
{
	struct point a;
	a=create_point(8,6);
	printf("%d,%d",a.x,a.y);
	return 0;
}

struct point create_point(int x,int y)
{
	struct point temp;
	temp.x=x;
	temp.y=y;
	return temp;	
}
