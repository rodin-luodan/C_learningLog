/*打印九九乘法表                 i 行    
1*1=1                            1
1*2=2 2*2=4                      2
1*3=3 2*3=6 3*3=9                3
1*4=4 2*4=8 3*4=12 4*4=16        4
......
*/
#include <stdio.h>

int main()
{
	int i,j;//i为行
	
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-2d ",j,i,j*i);
		}
		printf("\n");
	}
}
