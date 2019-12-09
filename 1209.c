#include<stdio.h>
#include<math.h>
int isPrime(int x)
{
    int i;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0){
            break;
        }
    }
    if(i>sqrt(x)){
        return 1;
    }else{
        return 0;
    }
}
int main(void)
{
int i,flag;
for(i=2;i<=100;i++)
{
flag=isPime(i);
if(flag==i){
    printf("%5d",i);
}
return 0;
}



