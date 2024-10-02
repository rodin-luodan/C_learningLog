#include <stdio.h>


/* 简单 写一个程序将一个字符串循环右移 n 位
  例如： 字符串 abcdef 循环右移 2 位是 efabcd 
              efabcd
              自己的想法，先把要移位的字符保存到temp
              其次再把保留的字符移位
              再把temp中的字符补回去
*/
int main()
{   
  char str[20]={0};
  int n;
  char temp[20]={0};
  int i;
  
  printf("请输入你要移位的字符串\n");
  scanf("%s",str);
  
  printf("请输入你要右移多少位\n");
  scanf("%d",&n);
  
  //保留要移位的字符  5-1
  int k=0;
  for(i=strlen(str)-n;i<strlen(str);i++)
     {
         temp[k]=str[i];
         k++;
     }
  
  //printf("%s\n",temp);
  //将原字符位移n位
  for(i=strlen(str)-n-1;i>=0;i--)
     {
        str[i+n]=str[i];
     }
 
// printf("%s\n",str);
   //将temp中的字符补进去
   for(i=0;i<n;i++)
      str[i]=temp[i];
      
      printf("%s\n",str);
   
   
  return 0;
}