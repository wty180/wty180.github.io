#include <stdio.h>
int judge(char *a,char *b)
{
	int i,j,k;
	int len_a=0,len_b=0;
	k=0;
	for(;*a!='\0';a++)
	{
		len_a++;
	}
	for(;*b!='\0';b++)
	{
		len_b++;
	}
	for(i=0;i<len_a-len_b;i++)
	{
		k=i;
		for(j=0;j<len_b;j++)
		{
			if(a[k]!=b[j])
			{
				break;
			}
			k++;
		}
		if(j==len_b){
			return 1;
		}
	}
	return 0;
}
int main()
{
	char a[100],b[100];
	printf("Please input the first str:");
	scanf("%100s",a);
	printf("Please input the second str:");
	scanf("%100s",b);
	if(judge(a,b))
	{
		printf("YES\n" );
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
