#include <stdio.h>
int main(void)
{
    int n,x;
    printf("Enter n:\n");
    scanf("%d",&n);
    x=(n>0)?n:-n;
    printf("Absolute is %d\n",x);
    return 0;
}