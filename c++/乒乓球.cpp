#include <iostream>
using namespace std;

string s;//�������ַ������ͣ�����Ҫ���ַ���������ʾ�ַ���
char c;
int a,b;

void mrank(int lim)
{
	for(char i:s){//����s�е��ַ�i
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
		s+=c;//���ζ�ȡ�ַ����е��ַ�������E����0
	}
	mrank(11);
	printf("\n");
	mrank(21);
	return 0;
}
