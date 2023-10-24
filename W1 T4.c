#include<stdio.h>
int main()
{
    float sum=1;
    int deno=2;
    int sign=1;
    float term;
    while(deno<=100)
    {
        sign=-sign;
        term=(float)sign/deno;
        sum=sum+term;
        deno++;
    }
    printf("sum is %.6f",sum);
    return 0;
}
