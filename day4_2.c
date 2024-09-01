/*
将输入的数比如123.323变成字符串输出
*/

#include <stdio.h>
#include <string.h>
int main()
{
	double a;
	char str[30]="";
	printf("请输入一个小数\n");
	scanf("%lf",&a);
	
	//先处理整数部分
	int b = (int)a;
	int c = 0;
	int i = 0;
	while(b)
	{
		
		str[i++] = b%10 + '0';
		b = b/10;
	}
	//整数部分321逆序输出为123
	printf("strlen str:%lu\n",strlen(str));
	for(int k = 0;k<strlen(str)/2;k++)         
	{
		char mid = str[k];
		str[k] = str[strlen(str)-k-1];
		str[strlen(str)-k-1] = mid;
	}
	str[i++]='.';
	//处理小数部分
    double d = a-(int)a;//0.323;
    //printf("float d = %lf\n",d);	
	int j =7;//保留7位有效数字  或者定义为float类型不会溢出，不用在这保留几位有效数字的做法
	while(j--)
	{
	    str[i++] = (int)(d*10) +'0';  //0.323->3.23->3
		d = d*10-(int)(d*10);
	}
	str[i]='\0';
	printf("小数转换为字符串输出为:%s\n",str);
	return 0;
}
