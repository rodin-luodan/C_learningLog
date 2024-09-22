/*
编写程序，把你输入的任何小数，转换成字符串保存到一个字符数组中
scanf("%f",) 15.23
*/

#include <stdio.h>
#include <string.h>

int  main()
{
	
	double num;
	//定义字符串并初始化
	char str[20]={0};
	
	printf("请输入一个小数\n");
	scanf("%lf",&num);
	
	//处理整数部分
	int a=(int)num;
	int i=0;
	while(a)
	{
		//51         数字转字符不要忘记处理
		str[i++]=a%10+'0';
		a=a/10;
	}
	
	//逆序51->15
	for(int j=0; j<strlen(str)/2; j++)
	{
		//异或交换  
		str[j]=str[j]^str[strlen(str)-j-1];
		str[strlen(str)-j-1]=str[j]^str[strlen(str)-j-1];
		str[j]=str[j]^str[strlen(str)-j-1];
	}
	//末尾加'.'
	str[i]='.';
	
	//printf("整数处理完输出的字符串为:%s\n",str);整数ok
	
	//处理小数部分 
	int m =7;
	double b;
	while(m--)//自己设置精度
	{
		//15.23  0.23
		b = num-(int)num;
	    //             0.23*10  //这里(int)b*10  未加括号错了先*10在强制转换
	    str[++i] = (int)(b*10) +'0';
		printf("str[%d]is:%c\n",i,str[i]);
		
		num = b*10;
	}
	
	//
	printf("输出的字符串为:%s\n",str);
	return 0;
}