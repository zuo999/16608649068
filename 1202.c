#include<stdio.h>
int main(void)
{
    int cock,hen,chicken;
    for(cock=0;cock<=20;cock++)
    {
        for(hen=0;hen<=33;hen++)
        {
                chicken=100-cock-hen;
                if(5*cock+hen*3+chicken/3.0==100)
                {
                    printf("Cock:%d,hen:%d,chicken:%d\n",cock,hen,chicken);
                }
        }
    }
}