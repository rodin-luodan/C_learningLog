//交换两个数  异或  加减法  中间变量

#include <stdio.h>

int main()
{
	int a;
	int b;
	
	printf("请输入两个数\n");
	scanf("%d%d",&a,&b);
	printf("交换两个数之前%d  %d\n",a,b);
	
	//异或交换
	a=a^b;
	b=a^b;
	a=a^b;
	printf("交换两个数之后%d  %d\n",a,b);
	return 0;
}
