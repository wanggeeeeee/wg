#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n,a;
	printf("������һ��ֵ\n");	
	while(scanf("%d", &n))
	{
		if(n>1000||n<=0)
		{
			printf("����������\n");
			continue;
		} 
		a= sqrt(n);
		printf("%d\n",a);
		printf("������һ��ֵ\n");
	}    
	return 0;
}