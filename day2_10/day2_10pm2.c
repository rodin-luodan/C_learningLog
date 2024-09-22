#include<stdio.h>
#include<string.h>

/* 从键盘输入任意一个数， 求出它的二进制，
 然后把这个二进制保存到 char binary[32] 中 
  2 752  0
  2 376  0
    188
   
*/
int main()
{
      char binary[32];
      int  a=0;
      int  i=0;
      
      printf("请输入一个整数\n");
      scanf("%d",&a);
      
      int midnum=a;
      while(a)
      {
         //对2取余即为要存的二进制数
        binary[i]=a%2+'0';
        printf("binary[%d]is %c\n",i,binary[i]);
        i++;
        printf("a的值为:%d\n",a);
        
        a=a/2;
      }
      
      if(midnum==0)
        binary[0]='0';
        //加上之前的代码逆序输出即可
      printf("%d的二进制数为%s\n",midnum,binary);
      return 0;
}