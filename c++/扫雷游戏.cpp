#include <iostream>

using namespace std;

int main()
{
	int a,b,count;
	cin>>a;
	cin>>b;
	char ipt[a][b],ch_out[a][b];
	int data[a+2][b+2]={};
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cin>>ipt[i][j];
		}
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			if(ipt[i][j]=='*')data[i+1][j+1]=1;
		}
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			if(ipt[i][j]=='*')ch_out[i][j]='*';
			if(ipt[i][j]=='?')
			{
				count=data[i][j]+data[i][j+1]+data[i][j+2]+data[i+1][j]+data[i+1][j+2]+data[i+2][j]+data[i+2][j+1]+data[i+2][j+2];
				ch_out[i][j]=count+'0';
			}			
		}
	}
	for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				cout<<ch_out[i][j];
			}
			cout<<endl;
		}
	return 0;		
}
/*
1.将一个数字转化为对应数字的字符用count+'0'，即字符0+数字
2.
*/
