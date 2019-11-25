#include<stdio.h>
int main(void)
{
    int n,sum,term,tmp;
    for(n=100;n<1000;n++)
    {
        tmp=n;
        sum=0;
        while(tmp>0)
        {
            term=tmp%10;
            sum=sum+pow(term,3);
            tmp=tmp/10;
        }
        if(sum==n){
            printf("%d\n",n);
        }
    }
    return 0;
    }
