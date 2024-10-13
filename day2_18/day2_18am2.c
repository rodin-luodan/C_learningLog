#include<stdio.h>
//简单递归函数封装
//封装一个递归函数求n+(n-1)+(n-2)…1的值
int fun(int n)
{
   if(n==1)
      return 1;
   else
      return n+fun(n-1);
}
int main()
{
    int n;
    printf("请输入一个n的值\n");
    scanf("%d",&n);
    
    fun(n);
    printf("n+(n-1)+(n-2)…+1的结果为%d\n",fun(n));
    return 0;
}
