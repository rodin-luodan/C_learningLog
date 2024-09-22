#include <stdio.h>

int main()
{
	int i,j;
	int temp;
	//定义二维数组
	int a[4][4];
	printf("请输入16个整数!\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
			scanf("%d",&a[i][j]);
	}
	//打印一下原本的数据
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
			printf("%-5d",a[i][j]);
		//换行
		printf("\n");
	}
	
	printf("\n");
	//对称的位置互换
	for(i=0; i<4; i++)
	{
		  //还可以这么写for(j=i+1; j<4; j++)
		for(j=0; j<i; j++)
		{
			//a[i][j]和a[j][i]互换
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
	
	//打印一下交换之后的数据
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
			printf("%-5d",a[i][j]);
		//换行
		printf("\n");
	}
}