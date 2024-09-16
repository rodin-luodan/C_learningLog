//验证ubuntu操作系统是算术右移还是逻辑右移

#include <stdio.h>

int main()
{
	char a=-70;//char 默认类型是有符号整型
    //a+=1;
    //printf("char+1结果是:%d\n",a);
	a = a>>2;
    
	printf("a左移两位的结果是:%d\n",a);//验证结果是-3,证实
	                                //应该是算术右移
	return 0;
}