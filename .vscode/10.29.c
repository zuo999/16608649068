#include<stdio.h>
int main(void)
{
    int a,b,c,d,sum;
    float aver;
    printf("Enter a,b,c,d:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);


    sum=a+b+c+d;
    aver=sum/4.0f;
    printf("Sum is %d,average is %.1f\n",sum,aver);
    return 0;
}
