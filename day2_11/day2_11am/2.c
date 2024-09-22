#include<stdio.h>
#include<string.h>
#define MAX_STRING 30

void main()
{
	int i=0,j=0,k=0,label;
	char o[MAX_STRING];
	char n[MAX_STRING];

	for(i=0;i<=MAX_STRING-1;i++)
		n[i]=0;
	printf("please input a string:\n");
	scanf("%s",o);

	//从第一个字符开始遍历
	for(i=0;i<strlen(o);i++)
	{
		//判断字符数组o是否与字符数组n有重复字符的标志,1为没有重复，0为重复
		label=1;
		//遍历字符数组n，n的长度为strlen(n)
		for(j=0;j<strlen(n);j++)
		{
			if(o[i]==n[j])
			{
				label=0;
				break;
			}
		}
		if(label)
		{
			n[k++]=o[i];
		}
	}
	n[k]='\0';     //给字符数组n一个结束标志，不给的话系统自动补
	printf("\neliminate duplicate:\n%s\n",n);
}