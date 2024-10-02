#include <stdio.h>
#include <string.h>

/* 
  定义一个数组，包含五个整数，判断它是不是个完数  (用指针操作)
  完数:其公因子之和等于其本身(公因子不包含本身)
  比如整数6  6=1+2+3，6就是个完数
*/
int main()
{   
  int a[5];
  int i,j;
  int *p;
  int sum=0;
  
  printf("请输入五个整数\n");
  for(i=0;i<5;i++)
     scanf("%d",&a[i]);
  
  for(i=0;i<5;i++)
     {
       p=&a[i];
       for(j=1; j<(*p); j++)
       {
          if((*p)%j == 0)
             sum=sum+j;
            
       //printf("sum is:%d\n",sum);
       }
       if(sum == *p)
         printf("%d是个完数\n",*p);
       else
         printf("%d不是个完数\n",*p);  
         sum=0;
     }
  
  
  return 0;
}