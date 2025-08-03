#include <stdio.h>

int main(){
	int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int a;
	
	printf("Input a month:");
	scanf("%d",&a);
	if(a<0||a>12){
		return 0;
	}
	printf("The number of days is %d\n",m[a-1]);
	
	
	
	
	return 0;
}
