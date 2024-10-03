#include <stdio.h>
#include <string.h>

/* 
  基础题 输入字符串， 分别统计出其中
   英文字母、 空格、 数字和其它字符的个数 。
bug：空格字符无法处理输入的时候到空白字符就截止了
解决办法，使用gets(char *str)函数可以接收输入的空格
*/
int main()
{   
  char str[30]={0};
  int  a=0;//统计英文字母个数
  int  space=0;//统计空格个数
  int  num=0;//统计数字个数
  int other=0;//统计其它字符个数;
  
  printf("请输入字符串\n");
 // scanf("%s",str)
  //printf("%s\n",str);
  gets(str);
  
  
  for(int i=0;i<strlen(str);i++)
  {
     if( (str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
     {
        a++;
        
     }
     else if(str[i]==' ')
     {
       space++;
       
     }
     
     else if(str[i]>='0'&&str[i]<='9')
       num++;
     else
       other++;  
     
  }
  
  printf("统计的英文字母个数为:%d\n",a);
  printf("统计的空格个数为:%d\n",space);
  printf("统计的数字个数为:%d\n",num);
  printf("统计的其它字符个数为:%d\n",other);
  
  return 0;
}