#include<stdio.h>
int main()
{int i;
    for(i=2000;i<=2500;i++)
    {
        if(i%4==0 && i%100!=0 || i%400==0)
        {
            printf("%d��������\n",i);
        }
        else
        {
            printf("%d�겻������\n",i);
        }
    }
    return 0;
}
