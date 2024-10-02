/*
任意输入一个字符串，要求去除掉这个字符串中重复的字符(重复字符只保留一个)；
google --》gole
*/
#include <stdio.h>
#include <string.h>

int  main()
{
	//定义字符串并初始化
	char str[20]={0};
	
	printf("请输入字符串\n");
	scanf("%s",str);
	
	//未处理前输出
	printf("未处理前字符串为:%s\n",str);
	
	//for循环处理重复字符
	int i,j;
	 
	for(i=0 ;i<strlen(str) ;i++)
	{
		for(j=i+1 ; j<strlen(str); j++)  //googgle   google
		{   
			//循环比较，如果相同字符往前移覆盖
			if(str[i]==str[j])//  0   3
			{   
			          //3  3        7
				for(int k =j; k<strlen(str)+1; k++)
				{
					//注意这里不要用str[k]=str[++k]; 这么做相当于没覆盖
					str[k]=str[k+1];
				    //printf("str[%d]的值为:%c\n",k,str[k]);
				}
				j--;//注意要后移，不然连续的会跳过googgle
			}
		    
		}
		
	}
	
	printf("处理后字符串为:%s\n",str);
	
	return 0;
}