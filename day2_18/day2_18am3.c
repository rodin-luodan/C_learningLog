#include<stdio.h>
/*
 封装一个函数 int fun(int n) 
 该 函数 可 以把 1 到 n 之 间 ( 1<= 数字 <=n) 
 所有能被 6 整除的数,或者数字中 
 包含 6 的全部 找 到并 打印 出来 
*/

int fun(int);

int main()
{
    int n;
    
    printf("请输入一个整数\n");
    scanf("%d",&n);
    
    fun(n);
    
    return 0;
}    

int fun(int n)
{
   for(int i=1;i<=n;i++)
   {
   //保存一下这个数方便后面while里面打印
   int temp=i;
   //首先找到能被6整除的数
      if(i%6==0)//取余等于0即能被6整除
        //直接打印
        printf("%d能被6整除，满足条件\n",i);
      else  //寻找包含不能被6整除但是包含6的数
      {
        int temp2=i;
        while(temp2)
          {
             if(temp2%10==6)
             //如果个位取余等于6直接打印退出循环
             {
                printf("%d包含6，满足条件\n",temp);
                break;
             }
             else//寻找下一位
             {
              temp2=(temp2-temp2%10)/10;
             }
          }
      }  
        
   }  
   return 0;
      
}   





