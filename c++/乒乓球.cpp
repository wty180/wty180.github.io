#include <iostream>
using namespace std;

string s;//独立的字符串类型，不需要用字符数组来表示字符串
char c;
int a,b;

void mrank(int lim)
{
	for(char i:s){//遍历s中的字符i
			if(i=='W')a++;
			if(i=='L')b++;
			if(max(a,b)>=lim&&abs(a-b)>=2)
			{
				cout<<a<<":"<<b<<endl;
				a=0;
				b=0;
			}
		}
	cout<<a<<":"<<b<<endl;
	a=0;
	b=0;
}

int main()
{
	while(cin>>c){
		if(c=='E')break;
		s+=c;//依次读取字符串中的字符，遇到E结束0
	}
	mrank(11);
	printf("\n");
	mrank(21);
	return 0;
}
