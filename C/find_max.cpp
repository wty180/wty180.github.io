#include <stdio.h>
int main(){
	int a[3][3];
	int max,row,k;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	max=0;
	for(row=0;row<3;row++){
		if(a[row][row]>max){
			max=a[row][row];
			k=row;
		}
	}
	printf("max=%d ,row=%d",max,k+1);
	return 0;
}
