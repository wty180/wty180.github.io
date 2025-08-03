#include <stdio.h>

int main()
{
	int a[]={1,2,3,4};
	int *p=a;
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
		printf("%d\n",*(p+i));
	}
}
