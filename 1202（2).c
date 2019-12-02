#include<stdio.h>
average(double a,double b)
{
    return(a+b)/2;
}
int main(void)
{
    double x,y,aver;
    printf("Enter x,y:\n");
    scanf("%lf%lf,&x,&y");
    aver=average(x,y);
    printf("Average=%lf\n",aver);
    return 0; 
}