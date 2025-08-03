#include <stdio.h>
int main()
{
	int year,month_i;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int month1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	while(true){
		printf("Input year,month:");
		scanf("%d,%d",&year,&month_i);
		if(month_i<=0||month_i>12){
			continue;
		}
		if((year%4==0&&year%100!=0)||year%400==0){
			printf("The number of days is %d\n",month1[month_i-1]);
			break;
		}
		else
		{
			printf("The number of days is %d\n",month[month_i-1]);
			break;
		}
	}
	return 0;
}
