#include <stdio.h>
int judge(int a,int b,int c){
	int num[9];
	for(int i=0;i<3;i++){
		num[i]=a%10;
		a=a/10;
	}
	for(int j=3;j<6;j++){
		num[j]=b%10;
		b=b/10;
	}
	for(int k=6;k<9;k++){
		num[k]=c%10;
		c=c/10;
	}
	int count[10] = {0};
	    for (int i = 0; i < 9; i++) {
	        count[num[i]]++;
	    }
	    for (int i = 1; i <= 9; i++) {
	        if (count[i] != 1) return 0; // 每个数字必须出现一次
	    }
	return 1;
}	
int main(){
	int nums[9]={1,2,3,4,5,6,7,8,9};
	int a,b,c;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			for(int k=0;k<9;k++){
				a=nums[i]*100+nums[j]*10+nums[k];
				b=a*2;
				c=a*3;
				if(judge(a,b,c)&&c<1000){
					printf("%d,%d,%d\n",a,b,c);
				}
			}
		}
	}
	return 0;
}
