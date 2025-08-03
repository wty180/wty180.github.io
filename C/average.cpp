#include <stdio.h>

int main(){
	double a[10]={1.0,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9};
	double sum=0,ave=0;
	for(int i=0;i<=9;i++){
		sum+=a[i];
	}
	ave=sum/10;
	printf("The average of array is %.2f\n",ave);
	return 0;	
}
