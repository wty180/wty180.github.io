#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_alp(char s[]);
int del(char s[]);

int main()
{
	int nums=0;
	char s[100];
	printf("please inpute a string");
	scanf("%s",s);
	printf("the count %d\n",count_alp(s));
	nums=del(s);
	printf("after %s",s);
}

int count_alp(char s[])
{
	int nums=0;
	for(int i=0;s[i]!='\0';i++){
		if(isalpha(s[i])){
			nums++;
		}
	}
	return nums;
}
int del(char s[])
{
	for(int i=0;s[i]!='\0';i++){
		if(isalpha(s[i])){
			for(int j=i;s[j]!='\0';j++){
				s[j]=s[j+1];
			}
			i--;
		}
	}
	return strlen(s);
}
