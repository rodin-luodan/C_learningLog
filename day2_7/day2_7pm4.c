/*
while 循环实现任意输入一个整数，编程得到这个整数总共多少位，
各个位分别是多少
123/10 --》12 --》12/10 --》1 1/10--》0
123%10 --》3 12%10 --》2 1%10--》1
*/
#include <stdio.h>

int main()
{
	int a;
	int count;
	printf("请输入一个整数\n");   //比如输入135
	scanf("%d",&a);
	
	while(a)
	{
		count++;
		printf("第%d位是%d\n",count,a%10);
		a/=10;
	}
	return 0;
}