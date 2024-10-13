#include <stdio.h>

char *testchar();

int main()
{
	char *p = testchar();
	
	printf("%s\n",p);
	return 0 ;
}

char *testchar()
{
	  char *p="abcdf";  //写的数组形式就是栈空间 这个p指向的是数据段的.rodata段
	  //char p[10]="abcdf";//warning: function returns address of local variable
	  return p;
}