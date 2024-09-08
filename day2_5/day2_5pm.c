/*
第一题：
char b='b';
char c=b+5; //请问 c 是多少  g
第二题：
char a=300; 请问打印 a 的值是多少？？ 为什么？？  ，
考察数据溢出之后计算机是如何处理的
*/

#include <stdio.h>

int main()
{
	char b = 'b';
	char c =b+5;
	char a=300;
	
	printf("‘b’+5的值为:%c\n",c);
	printf("a=389,打印a的值为:%c\n",a);
	return 0;
}