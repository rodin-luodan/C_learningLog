#include<stdio.h>
/*
封装一个函数，求n个数的最大值
*/

int getmax(int a[], int n)
{
   int max=a[0];
   int i=0;
   for(i=1;i<n;i++)
   {
      if(a[i]>max)
         max=a[i];
   }
   return max;
}

int main()
{
    int n,i;
    int a[n];
    int max;
    
    printf("请输入你想要的排序数的个数\n");
    scanf("%d",&n);
    printf("请输入每个数的大小，注意请输入%d个数\n",n);
    
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       
    max=getmax(a,n);   
    
    printf("你输入的%d个数中最大值是%d\n",n,max);
    
    return 0;
    
}