#include<stdio.h>
#define len 5
void sort(int x[],int n);
int main(void)
{
    int a[len],max,i;
    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,len);
    for(i=0;i<len;i++)
    {
    printf("%5d",max);
    }
    return 0;
}
void sort(int x[],int n)
{
    int i,j,tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[j]>x[i]){
                tmp=x[j];
                x[j]=x[i];
                x[i]=tmp;
            }
        }
    }
}