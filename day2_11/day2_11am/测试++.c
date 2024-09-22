#include <stdio.h>

int  main()
{
	//定义字符串并初始化
	char str[20]="abcdefgjhijk";
	
	//for(int k =0;k<20 ;k++)
	int i=0;
	   str[0]=str[++i];
	 
	printf("%s\n",str);

	
	return 0;
}