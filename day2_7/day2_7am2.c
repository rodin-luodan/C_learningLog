//运算符优先级

#include <stdio.h>

int main()
{
	int a=10;
	int b;
	b = (10*a)++;//错误范例:左值应该是一个可以增加的变量操作数
	printf("a is :%d,b is :%d\n",a,b);//10,101
	return 0;
}
