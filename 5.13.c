#include <stdio.h>
int main()
{
   double x;
   printf("请输入一个数: \n");
   scanf("%lf", &x);
   double a=x;
   int i;
   for(i=0;i<1000;++i)
   {
       a=(a+x/a)/2;
   }
   printf("所输入数字的平凡根是%.5f\n", a);
   return 0;
}
