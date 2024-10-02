#include <stdio.h>
#include <string.h>

/* 
动脑筋:统计字符串中连续出现字符次数最多的字符，
将其打印并输出其出线次数大小
*/
int main()
{   
  char str[20]={0};
  int i,j;
  int count=1;
  int max=0;
  char maxstr=0;
  
   printf("请输入你想要统计的字符串\n");
   scanf("%s",str);
 
  for(i=0;i<strlen(str);i++)
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
     //统计结束后保留最大字符和重复次数
     if(count>max)
     {
        max=count;
        maxstr=str[i];
     }
     count=1;
  }
   printf("连续重复出现次数最大的字符是:%c,出现次数为%d\n",maxstr,max);
  return 0;
}