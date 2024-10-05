#include <stdio.h>
#include <string.h>
/* 定义一个 char 类型的二维数组 char name[5][20],
  你从键盘输入 5 个字符串表示 5 个人的名 字，
   编程实现用指针判断 5 个名字中是否包含了英文大小写以及数字，
    并且每个人的名字长度不能超 过 8 个字符人的名字要求： 
    小写字母， 大写字母， 数字字符三种都要包含
    如果名字符合要求就 打印出来， 不符合就打印缺少了那种字符 
    思路： 用指针去遍历字符串， 标记字符的类型  ( 大写， 小写， 数字字符 ) */
int main()
{   
  char name[5][20];
  char (*p)[20]=name;
  int i,j;
  int big=0;
  int small=0;
  int num=0;
  
  printf("请输入5个字符串名字,名字长度不超过8\n");
  for(i=0;i<5;i++)
  {
    scanf("%s",p[i]);
    //判断是否超过了8个字符
    if(strlen(p[i])>8)
    {
      printf("请重新输入名字\n");
      i--;
    }  
  }
  
  for(i=0;i<5;i++)
  {
     for(j=0;j<strlen(p[i]);j++)
     {
        //判断是否包含大小写及数字
        if(p[i][j]>='a'&&p[i][j]<='z')
           small=1;
        if(p[i][j]>='A'&&p[i][j]<='Z')
           big=1;
        if(p[i][j]>='0'&&p[i][j]<='9')   
           num=1;
     }      
     //判断完后看是否满足条件
     if(small==1&&big==1&&num==1)
        printf("名字符合条件,打印输出为:%s\n",p[i]);
     if(small==0)   
        printf("%s缺少小写字母\n",p[i]);
     if(big==0)   
        printf("%s缺少了大写字母\n",p[i]);
     if(num==0)   
        printf("%s缺少了数字\n",p[i]);
     //复位
     big=0;
     small=0;
     num=0;   
  }   
  return 0;
}