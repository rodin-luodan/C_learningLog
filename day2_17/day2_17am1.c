#include <stdio.h>
#include <string.h>

/* 
  定义一个 char 类型的二维数组 char buf[6][20], 
  要求使用指针操作去除掉字符串中所有的 
  非英文字母 ( 只要不是英文字母的全部剔除 ) 
  思路有两种 第一种采用 char * 指针去访问这个二维数组 
           第二种采用数组指针 char (*p)[20] p[i][j]
   这是第一种采用char *指针去访问
*/
int main()
{   
  char a[6][20]={"he223llo","1orl4","hello","g67c"};
  char *p=NULL;
  int i,j,k;
  
  for(i=0;i<6;i++)
  {
   p=a[i];
   printf("字符串未处理前输出为%s\n",p);
  }
  
  //非英文字母全部删除
  for(i=0; i<6; i++)
  {
   p=a[i];
   //printf("ggggg\n");
   for(j=0; j<strlen(p);j++)
   {
     //判断是否为英文字母
     if(!(p[j]>='a'&&p[j]<='z') || (p[j]>='A'&&p[j]<='Z'))
     {
        //剔除
        for(k=j;k<strlen(p)+1;k++)
        {
          p[k]=p[k+1];
        }  
        j--;
     }
   }
  }
  
  printf("==============================\n");
  for(i=0;i<6;i++)
  {
   p=a[i];
   printf("字符串处理后输出为%s\n",p);
  }
  
  
  
  
  return 0;
}