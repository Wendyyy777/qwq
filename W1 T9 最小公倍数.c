#include <stdio.h>
int main()
{
int a,b;
printf("��������������");
scanf("%d,%d",&a,&b);
int m = a > b ? a:b;
while(m)
{
    if(m%a==0&&m%b==0)
        break;
    else m++;
}

    printf("��С������Ϊ��%d\n",m);
return 0;
}
