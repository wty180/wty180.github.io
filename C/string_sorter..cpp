#include <stdio.h>

int main()
{
	char strings[8][20];
	
	for(int i=0;i<8;i++)
	{
		scanf("%s",strings[i]);
	}
	for(int i=0;i<8;i++)
		{
			printf("%s\n",strings[i]);
		}
}
