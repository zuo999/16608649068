#include<stdio.h>
int main(void)
{
    int x,y;
    printf("Enter x:\n");
    scanf("%lf",&x);
    if (x<=50){
        y=0.53*x;
    }
    else{
        y=0.53*50+(x-50)*0.58;
    }
    printf("y=f(%f)=%.2f\n",x,y);
    return 0;
}