#include <stdio.h>
int main()
{
   double x;
   printf("������һ����: \n");
   scanf("%lf", &x);
   double a=x;
   int i;
   for(i=0;i<1000;++i)
   {
       a=(a+x/a)/2;
   }
   printf("���������ֵ�ƽ������%.5f\n", a);
   return 0;
}
