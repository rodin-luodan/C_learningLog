#include <stdio.h>
#include <string.h>

/* 
 求 a+aa+aaa+aaaa+aa...a 的值 比如： a 是 3 ，
  总共 5 项 ( 变量 n 表示 ) 3+33+333+3333+33333
  结果 是？ ？ 要求 a 和 n 从键盘输入
  思路  3*(1+11+111+1111+11111)
*/
int main()
{   
  int a,n;
  int i,sum;
  
  printf("请输入a的值\n");
  scanf("%d",&a);
  printf("请输入n的值\n");
  scanf("%d",&n);
  
  int num[n];
  num[0]=a;
  int temp=a;
  sum=a;
  
  for(i=1; i<n;i++)
  {
    temp=temp*10+a;
  //  printf("temp is:%d\n",temp);
    num[i]=temp;
    sum =sum+temp;
  }
  
 for(i=0; i<n;i++)
  {
     if(i==n-1)
       printf("%d的结果为:%d\n",num[i],sum);
     else
       printf("%d+",num[i]);  
  }
     
  //printf("最终的结果为：%d",a*sum);
  return 0;
}