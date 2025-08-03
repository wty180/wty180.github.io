#include <stdio.h>
#define M 3
#define S 4
#define N 2

void multiply(int A[M][S], int B[S][N], int C[M][N])
{
    for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			C[i][j]=0;
			for(int k=0;k<S;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
}

int main()
{
    int i, j;
    int A[M][S], B[S][N], C[M][N];
    printf("Please input A:\n");
    for (i = 0; i < M; i ++)
        for (j = 0; j < S; j ++)
            scanf("%d",&A[i][j]);
    printf("Please input B:\n");
    for (i = 0; i < S; i ++)
        for (j = 0; j < N; j ++)
            scanf("%d",&B[i][j]);
    multiply(A,B,C);
    printf("C=\n");
    for (i = 0; i < M; i ++){
        for (j = 0; j < N; j ++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
    return 0;
}
