#include <stdio.h>


/* 
  定义 i nt 数组， 任意输入 10 个整数， 
  对它们从小到大排序
  冒泡排序
  “沉底”排序
*/
int main()
{
      int a[10];
      int i=0;
      
      printf("请输入十个整数\n");
      
      for(;i<10;i++)
         scanf("%d",&a[i]);
         
       printf("未排序前输出为:");  
      for(i=0;i<10;i++)   
         printf("%d ",a[i]);
      printf("\n");
         
      //冒泡排序   
      int k,j;
      for(k=0;k<9;k++)
      {
        for(j=0;j<9-k;j++)
        {
            //如果大就交换位置
           if(a[j]>a[j+1])
              {
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j]^a[j+1];
                a[j]=a[j]^a[j+1];
              }
        }
      }
      
      printf("排序后输出为:");  
      for(i=0;i<10;i++)   
         printf("%d ",a[i]);
      printf("\n");
      
      return 0;
}