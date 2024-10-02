#include <stdio.h>
#include <string.h>

/* 
动脑筋:统计字符串中连续出现字符次数最多的字符，
将其打印并输出其出现次数大小    pro版
*/
int main()
{   
  char str[20]={0};
  int i,j;
  int count=1;
  int bufcount[20]={0};  //数组用于将每个字符重复出现的次数保存起来
  char buf[20]={0};  //将每个字符保存起来
  int k=0;
  
   printf("请输入你想要统计的字符串\n");
   scanf("%s",str);
 
  for(i=0;i<strlen(str);i=j)
  {
     for(j=i+1;j<strlen(str);j++)
     {
         //将第一个字符与后面字符循环比较
        if(str[i] == str[j])
        {
           count++;
        }
        else
           break;
     }
     //统计结束后保留对应字符和重复次数
        bufcount[k]=count;
        buf[k]=str[i]; 
        k++;
        count=1;
  }
  
  //统计结束后看看结果
  printf("保留的字符依次是%s\n",buf);
  printf("连续出现的对应次数是:");
  for(i=0;i<strlen(buf);i++)
     printf("%d",bufcount[i]);
     printf("\n");
   //printf("连续重复出现次数最大的字符是:%c,出现次数为%d\n",maxstr,max);
  return 0;
}