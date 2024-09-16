#include <stdio.h>

int main()
{
	float a = 1.6;//二进制不可以精准表示
	float b = 1.5;//可以精准表示
	
	if(a==1.6)//某些小数在计算机里无法精准表示
	//左边的a是个变量，存放的是二进制的近似值
	//右边的1.6是个常量，精度更高一些 所以不相等
		printf("a 和 1.6相等\n");
	else
		printf("a 和 1.6不相等\n");
	
	if(b==1.5)
		printf("b和1.5是相等的\n");
	else
		printf("b和1.5是不相等的\n");
	
	printf("a的值为%f\n",a);//为什么a打印出来的值是1.600000，这是因为
	                       //printf函数有算法处理所以能打出来是这个值
	return 0;
}