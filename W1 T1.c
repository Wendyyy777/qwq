#include<stdio.h>
int main()
{
    int i,t;
    i=1;
    t=2;
    while(t<=5)
    {
        i=i*t;
        t=t+1;
    }
    printf("result:%d\n",i);
    return 0;
}
