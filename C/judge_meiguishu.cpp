#include <stdio.h>
#include <math.h>

int main()
{
	int num,sum=0;
	printf("please inpute m:");
	scanf("%d",&num);
	int k=num;
	for(int i=0;i<4;i++){
		sum+=pow(k%10,4);
		k=k/10;
	}
	if(sum==num){
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;	
}

