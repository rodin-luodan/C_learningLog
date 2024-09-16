//用三目运算符？:求三个数的最大值

#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("请输入三个整数\n");
	scanf("%d%d%d",&a,&b,&c);
	
	int ret1 = (a>b)?a:b;
	int ret2 = (ret1>c)?ret1:c;
	
	printf("最大值是:%d\n",ret2);
	return 0;
}
