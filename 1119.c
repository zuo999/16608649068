#include<stdio.h>
int main(void)
{
    int term=1,n,i;
    double sum=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    i=1;
    while(term>=1e-5)
    {
        term=term/i;
        sum+=term;
        i=i++;
    }
    sum+=1;
    printf("sum=%.5lf\n",sum);
    return 0;
}