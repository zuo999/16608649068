#include <stdio.h>
int main(void)
{
    int x;
    printf("Enter x:\n");
    scanf("%d",&x);
    printf("x:%d-%d-%d\n",x/100,(x%100)/10,x%10);
    return 0;
}


