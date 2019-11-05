#include <stdio.h>
int main(void)
{
    int N;
    printf("Enter N:\n");
    scanf("%d", &N);
    if ((N % 4 == 0 && N % 100 != 0) || (N % 400 == 0))
    {
        printf("yes \n");
    }
    else
    {
        printf("no \n");
    }

    return 0;
}
