#include<stdio.h>
int main()
{
    int n,i;
    printf("请输入一个大于或等于3的正整数\n");
    scanf("%d",&n);
    i=2;
    while(i<n)
    {   if(n%i==0)
        {
            break;
        }
        else
        {
            i++;
        }
    }
    if(i==n)
    {
        printf("%d是素数\n",n);
    }
    else
    {
        printf("%d不是素数\n",n);
    }
    return 0;
}
