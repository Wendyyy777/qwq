#include <stdio.h>
int main()
{
int a,b;
printf("请输入两个数：");
scanf("%d,%d",&a,&b);
int m = a > b ? a:b;
while(m)
{
    if(m%a==0&&m%b==0)
        break;
    else m++;
}

    printf("最小公倍数为：%d\n",m);
return 0;
}
