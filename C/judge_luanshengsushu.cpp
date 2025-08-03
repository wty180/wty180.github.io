#include <stdio.h>

int isprime(int a);

int main()
{
	int n;
	printf("please input n");
	scanf("%d",&n);
	if(isprime(n)&&isprime(n-2)){
		printf("%d,%dÊÇÂÏÉúËØÊı",n,n-2);
	}
}

int isprime(int a)
{
	for(int i=2;i<a;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
