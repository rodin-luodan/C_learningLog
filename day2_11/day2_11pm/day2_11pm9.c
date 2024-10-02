#include <stdio.h>


/* 简单 写一个程序将一个字符串循环右移 n 位
  例如： 字符串 abcdef 循环右移 2 位是 efabcd 
              efabcd
              老师的想法
*/
int main()
{   
  char str[20]={0};
  int n;
  char str1[20]={0};
  int i;
  
  printf("请输入你要移位的字符串\n");
  scanf("%s",str);
  
  printf("请输入你要右移多少位\n");
  scanf("%d",&n);
  
  
  int k=0;                       //   abcdef
  for(i=0;i<strlen(str)-n;i++)   //     abcd
     {
        //先把str中的前几位移到str1中
        str1[i+n]=str[i];
     }
      
    //再将移出的位补到str1中  
   for(i=strlen(str)-n,k=0;i<strlen(str);i++,k++)   
     {
        str1[k]=str[i];
     }
      printf("移位%d位后的字符串为:%s\n",n,str1);
   
   
  return 0;
}