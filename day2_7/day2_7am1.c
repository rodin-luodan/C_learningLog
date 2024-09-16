//使用sizeof函数，里面的表达式不会计算给变量赋值
//sizeof不会执行表达式中的内容，只会表达式最终的结果数据类型
//不会执行赋值动作，但是会判断复制后的结果的数据类型
#include <stdio.h>

int main()
{
	int a=10;
	
	printf("%lu\n",sizeof(a+=10));
	printf("使用sizeof后a的值为:%d\n",a);
	
	//考察使用printf函数后变量是否被赋值
	printf("%d\n",a+=10);
	printf("使用printf函数后a的值为:%d\n",a);
	
	return 0;
}
