#include<stdio.h>
int main(void)
{
float x,t;
int y;
printf("Enter x,t:\n");
if(x<=3){
    if(t<5){
        y=10;
    }
    else{
        y=10+(t/5.0)*2;
    }
}
else{
    if(x>3,x<=13){
        if(t<5){
        y=10+(x-3)*2;
        }
        else{
        y=10+(x-3)*2+(t/5.0)*2;
        }
    }
    else{
        if(t<5){
        y=30+(x-13)*3;
        }
        else{
        y=30+(x-13)*3+(t/5.0)*2;
        }
    }
    }
    printf("y=%f\n",y);
    return 0;
}
