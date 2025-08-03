#include <iostream>
#include <cstring>
#define Max 501
using namespace std;

int main()
{
	char a[Max],b[Max];
	cin>>a>>b;
	int a1[Max]={0},b1[Max]={0},c1[Max]={0};
	int len_a=strlen(a),len_b=strlen(b);//sizeof获取的是总容量，取决于数组定义的大小，.size获取的是实际容量
	int maxn=max(len_a,len_b);
	for(int i=0;i<len_a;i++){
		a1[i]=a[len_a-1-i]-'0';
	}
	for(int i=0;i<len_b;i++){
		b1[i]=b[len_b-1-i]-'0';
	}
	for(int i=0;i<maxn;i++){
		c1[i]=a1[i]+b1[i];
	}
	for(int i=0;i<maxn;i++){
		c1[i+1]=c1[i+1]+c1[i]/10;
		c1[i]=c1[i]%10;
	}
	if(c1[maxn+1]!=0){
		maxn++;
	}for(int i=maxn-1;i>=0;i--){
		printf("%d",c1[i]);
	}
	return 0;
}
