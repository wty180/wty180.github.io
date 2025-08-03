#include  <stdio.h>
unsigned int  MyStrlen(char *pStr);/*  函数声明  */
int main()
{
	char   a[80];
	unsigned int  len;
	printf("Please enter a string:");
	gets(a);  /*   输入字符串   */
	len=MyStrlen(a);      /* 调用函数，计算字符串实际字符个数 */
	printf("The length of the string is: %u\n", len); 
	return 0;
}

/* 函数功能：用字符指针作函数参数，计算字符串的长度 */
unsigned int  MyStrlen(char *pStr)
{ 
	unsigned int len=0;      /* 声明计数变量 */
	for (;*pStr!='\0';pStr++)       /* 循环控制条件  */
	{
		len++;                 /* 统计不包括'\0'在内的字符个数 */
	}
	return len;        /* 返回实际字符个数 */
}
