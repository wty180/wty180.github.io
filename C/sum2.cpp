#include <stdio.h>

int main()
{
	int a,n;
	int sum=0;
	printf("Please input a,n:");
	scanf("%d,%d",&a,&n);
	int ai=a;
	for(int i=1;i<=n;i++){
		sum+=ai;
		ai=ai*10+a;
	}
	printf("sum=%d",sum);
	return 0;
}
