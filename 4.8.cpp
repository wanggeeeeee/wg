#include <stdio.h>
int main()
{
	int n;
	printf("������һ��ֵ\n");	
	scanf("%d", &n);
	if(n<60)
		printf("�ɼ��ȼ�Ϊ:E\n");
	else if(n<70)
		printf("�ɼ��ȼ�Ϊ:D\n");
	else if(n<80)
		printf("�ɼ��ȼ�Ϊ:C\n");
	else if(n<90)
		printf("�ɼ��ȼ�Ϊ:B\n");
	else if(n<=100)
		printf("�ɼ��ȼ�Ϊ:A\n");
	else
		printf("wrong input\n");
	return 0;
}
