#include <stdio.h>

int fun(int a);

int main()
{
	int a,sum=0;
	printf("Please input an integer ");
	scanf("%d",&a);
	sum=fun(a);
	printf("sum=%d",sum);
	return 0;
}

int fun(int a)
{
	int sum=0,i=a;
	while(i>=1){
		sum+=i%10;
		i=i/10;
	}
	return sum;
}
