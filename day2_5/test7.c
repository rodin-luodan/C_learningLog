#include <stdio.h>
/*实例程序，此程序输出为-129，缘由询问网友得知是该程序中a作为
函数传参给printf函数时，传char，扩展成int，高位的3字节全是0
因为作为函数参数，不足4字节，自动补成4字节，也就是char/short扩展成int
*/
int main()
{
    signed char a=-128;
    //printf("请输入一个数\n");
    //scanf("%c",&a);
     
	printf("char 大小为%lu个字节\n",sizeof(a));
    printf("%d-1的值为%d\n",a,a-1);	
	return 0;
}