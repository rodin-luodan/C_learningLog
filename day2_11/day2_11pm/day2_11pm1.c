#include<stdio.h>
#include<string.h>

//字符串逆序存放
//helloworld    dlrowolleh
//12345
//54321
int main()
{
      char a[10];
      
      printf("请输入一个字符串\n");
      scanf("%s",a);
      printf("交换前:%s\n",a);
      
      int i=0;
      //获取字符长度
      int count=strlen(a);
      printf("count=:%d\n",count);
      //逆序存放异或交换位置
      for(;i<count/2;i++)
      {
        a[i]=a[i]^a[count-1-i];
        a[count-1-i]=a[i]^a[count-1-i];
        a[i]=a[i]^a[count-1-i];
      }
      printf("交换后:%s\n",a);
      
      return 0;
}