/*
用循环求出这种表达式的结果
1+1.0/2-1.0/3+1.0/4-1/5.........1.0/n
思路一： 加法和减法分开来计算
思路二：-1 的 n 次方表示正负号
n 从键盘输入
*/

#include <stdio.h>

int main()
{
	int n;
	double sum=1;
	int count =-1;
	
	printf("请输入一个整数\n");
	scanf("%d",&n);
	
	if(n == 1)
		printf("1+1.0/2-1.0/3+1.0/4-1/5.........1.0/n计算结果为:%d\n",n);
	else
	{
		for(int i=2;i<=n;i++)
		{
			count*=(-1);
			sum =sum+1.0/i*count;
		}
		printf("1+1.0/2-1.0/3+1.0/4-1/5.........1.0/n计算结果为:%lf\n",sum);
	}
	return 0;
}