#include<stdio.h>
#define len 5
void sort(int x[],int n);
int main(void)
{
    int a[len],i;
    printf("Enter an array:\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,len);
    for(i=0;i<len;i++)
    {
    printf("%5d",a[i]);
    }
    return 0;
}
void sort(int x[],int n)
{
    int i,j,k,tmp;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(x[j]>x[k]){
                k=j;
            }    
        }
        if(k!=i){
        tmp=x[i];
        x[i]=x[k];
        x[k]=tmp;
        }
    }
}
