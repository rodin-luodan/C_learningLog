//           为什么菱形的行数都是奇数    是这样的从右边数，观察*（1）  **（2+1）   ***（3+2）  也可以是 1  1+2  1+2+2  1+2+2+2
/*打印菱形              行数     空格数    *数  
  *                     1        2       1
 ***                    2        1       3
*****                   3        0       5             //上半部分
 ***                    4
  *                     5
*/
#include <stdio.h>

int main()
{
	int i;//行数
	int a;//输入要打印的菱形行数
	
	printf("请输入要打印的菱形的行数(必须为奇数)\n");
	scanf("%d",&a);
	
	//先打印上半部分  或者a/2+1 ((a+1)/2)
	for(i=1;i<=(a/2+1);i++)
	{
	    //先打印空格
		for(int j=1;j<=((a+1)/2)-i;j++)
		{			
			printf(" ");
		}              //2i-1
		for(int k=1;k<= (i-1)*2+1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	//打印下半部分   
/*打印菱形              行数     空格数    *数  
  *                     1        2       1
 ***                    2        1       3
*****                   3        0       5             //上半部分
 ***                    4        1       3
  *                     5        2       1
*/	
	for(;i<=a;i++)
	{                               //6-i
		//打印空格         ((a+1)/2) -(a+1-i)
		for(int k=1;k<= ((a+1)/2) -(a+1-i);k++)
		{
			printf(" ");
		}	
		
		for(int j=1;j<=2*((a+1-i))-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
