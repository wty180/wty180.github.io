#include<stdio.h>
#define N 10
void InputArray(int a[][N], int m, int n);
void CalSumAndMean(int a[][N], int m, int n, int *sum, float *mean);
/*从键盘输入一个m行n列的二维数组*/
void InputArray(int a[][N], int m, int n)
{
    int i, j;
    printf("Input elements of %d*%d array:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)  // 补全内层循环
        {
            scanf("%d", &a[i][j]);  // 补全输入语句
        }
    }
}
int main()
{
    int m, n, iSum = 0;//iSum用于保存二维数组a中正数的总和
    float fMean = 0.0f;   //fMean用于保存二维数组a中正数的均值
    int a[N][N];
    
    printf("Input size of 2-D array m,n:\n");
    scanf("%d,%d", &m, &n);
    InputArray(a, m, n);  // 补全函数调用
    CalSumAndMean(a, m, n, &iSum, &fMean);  // 补全函数调用
    printf("sum=%d, mean=%.2f\n", iSum, fMean);
    return 0;
}
/*功能：计算m行n列的二维数组a中正数的总和与均值
参数：int *sum 用于接收二维数组a中正数的总和
      float *mean 用于接收二维数组a中正数的均值
*/
void CalSumAndMean(int a[][N], int m, int n, int *sum, float *mean)
{
    int i, j, count;
    count = 0;
    *sum = 0;  // 初始化总和为0
     
    // 遍历整个二维数组计算正数和
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] > 0)
            {
                *sum += a[i][j];  // 累加正数
                count++;  // 统计正数个数
            }
        }
    }
    
    // 计算平均值，注意避免除以零
    if(count > 0)
    {
        *mean = (float)*sum / count;  // 正确计算均值
    }
    else
    {
        *mean = 0.0f;  // 如果没有正数，均值为0
    }
    
    return;
}
    
