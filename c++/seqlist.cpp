#include <stdio.h>
#define MAX_NUMBER 100

typedef int type1;
typedef struct{
	type1 data[MAX_NUMBER];
	int lenth;
}seqlist;//顺序表的定义

void initlist(seqlist *p)
{
	p->lenth=0;
}//方法1：顺序表的初始化，即在内存中为顺序表的所有变量开辟内存空间

int main()
{
	seqlist list1;
	initlist(&list1);
}
