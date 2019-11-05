#include<stdio.h>
int main(void)
{
float x;
int t,y;
printf("Enter x,t:\n");
scanf("%f%d",&x,&t);
if(x<=3){
        y=10+(t/5)*2;
}
else if(x<=10){
        y=10+(x-3)*2+(t/5)*2;
        }
    else{
        y=24+(x-10)*3+(t/5)*2;
        }

    printf("y=%d\n",x,t,y);
    return 0;
}
