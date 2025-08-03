#include <iostream>
using namespace std;

struct toy
{
	int face;
	string name;
};
struct d
{
	int direction;
	int foot;
};

int main()
{
	int a,b,num=0;
	cin>>a>>b;
	toy t[a];
	d dn[b];
	for(int i=0;i<a;i++){
		cin>>t[i].face>>t[i].name;
	}
	for(int i=0;i<b;i++){
		cin>>dn[i].direction>>dn[i].foot;
	}
	for(int i=0;i<b;i++){
		if(dn[i].direction==0)
			if(t[num].face==0){
				num-=dn[i].foot;
				if(num<0)num=a-abs(num)%a;
			}
			else{
				num+=dn[i].foot;
				if(num>a-1)num=num%a;
			}
		else
			if(t[num].face==0){
				num+=dn[i].foot;
				if(num>a-1)num=num%a;
			}
			else{
				num-=dn[i].foot;
				if(num<0)num=a-abs(num)%a;
			}
	}
	cout<<t[num].name;
	return 0;
}
