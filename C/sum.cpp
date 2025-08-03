#include<stdio.h>
#define N 10
void InputArray(int a[][N], int m, int n);
void CalSumAndMean(int a[][N], int m, int n, int *sum, float *mean);
/*�Ӽ�������һ��m��n�еĶ�ά����*/
void InputArray(int a[][N], int m, int n)
{
    int i, j;
    printf("Input elements of %d*%d array:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)  // ��ȫ�ڲ�ѭ��
        {
            scanf("%d", &a[i][j]);  // ��ȫ�������
        }
    }
}
int main()
{
    int m, n, iSum = 0;//iSum���ڱ����ά����a���������ܺ�
    float fMean = 0.0f;   //fMean���ڱ����ά����a�������ľ�ֵ
    int a[N][N];
    
    printf("Input size of 2-D array m,n:\n");
    scanf("%d,%d", &m, &n);
    InputArray(a, m, n);  // ��ȫ��������
    CalSumAndMean(a, m, n, &iSum, &fMean);  // ��ȫ��������
    printf("sum=%d, mean=%.2f\n", iSum, fMean);
    return 0;
}
/*���ܣ�����m��n�еĶ�ά����a���������ܺ����ֵ
������int *sum ���ڽ��ն�ά����a���������ܺ�
      float *mean ���ڽ��ն�ά����a�������ľ�ֵ
*/
void CalSumAndMean(int a[][N], int m, int n, int *sum, float *mean)
{
    int i, j, count;
    count = 0;
    *sum = 0;  // ��ʼ���ܺ�Ϊ0
     
    // ����������ά�������������
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] > 0)
            {
                *sum += a[i][j];  // �ۼ�����
                count++;  // ͳ����������
            }
        }
    }
    
    // ����ƽ��ֵ��ע����������
    if(count > 0)
    {
        *mean = (float)*sum / count;  // ��ȷ�����ֵ
    }
    else
    {
        *mean = 0.0f;  // ���û����������ֵΪ0
    }
    
    return;
}
    
