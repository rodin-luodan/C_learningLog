#include<stdio.h>

int main()
{
   char a[10];
   a[2]='s';  //这种不算是初始化，其它未赋值位置为随机值
   
   for(int i=0;i<9;i++)
	   printf("ascii值为:%d,%c\n",a[i],a[i]);

}