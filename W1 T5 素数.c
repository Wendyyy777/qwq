#include<stdio.h>
int main()
{
    int n,i;
    printf("������һ�����ڻ����3��������\n");
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
        printf("%d������\n",n);
    }
    else
    {
        printf("%d��������\n",n);
    }
    return 0;
}
