#include<stdio.h>
int isPrime(int x)
{
    int i;
    for(i=2;i*i<=x;i++)
    {
        if(x%i==0){
            return 0;
        }
    }
    return 1;
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



