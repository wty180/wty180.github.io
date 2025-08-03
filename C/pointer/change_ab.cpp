#include <stdio.h>

void swap(int *a,int *b);

int main()
{
	int a=0,b=0;
	scanf("%d,%d",&a,&b);
	swap(&a,&b);
	printf("%d,%d",a,b);
}

void swap(int *a,int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
}

