#include <stdio.h>
#define MAX_NUMBER 100

typedef int type1;
typedef struct{
	type1 data[MAX_NUMBER];
	int lenth;
}seqlist;//˳���Ķ���

void initlist(seqlist *p)
{
	p->lenth=0;
}//����1��˳���ĳ�ʼ���������ڴ���Ϊ˳�������б��������ڴ�ռ�

int main()
{
	seqlist list1;
	initlist(&list1);
}
