#include  <stdio.h>
unsigned int  MyStrlen(char *pStr);/*  ��������  */
int main()
{
	char   a[80];
	unsigned int  len;
	printf("Please enter a string:");
	gets(a);  /*   �����ַ���   */
	len=MyStrlen(a);      /* ���ú����������ַ���ʵ���ַ����� */
	printf("The length of the string is: %u\n", len); 
	return 0;
}

/* �������ܣ����ַ�ָ�������������������ַ����ĳ��� */
unsigned int  MyStrlen(char *pStr)
{ 
	unsigned int len=0;      /* ������������ */
	for (;*pStr!='\0';pStr++)       /* ѭ����������  */
	{
		len++;                 /* ͳ�Ʋ�����'\0'���ڵ��ַ����� */
	}
	return len;        /* ����ʵ���ַ����� */
}
