#include<stdio.h>
#define N 2
#define M 3
int main(void)
{
    int a[N][M],i,j;
    printf("Enter an array:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
}