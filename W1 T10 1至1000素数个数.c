#include <stdio.h>
int main()
{
   int n,i,count=0,flag=1;
    for(n=2;n<=1000;n++)
   {
       for(i=2;i<n;i++)
        {   if(n%i==0)
            {flag=0;
            break; }
            else flag=1;
        }
       count+=flag;
   }
   printf("%d", count);
   return 0;
}
