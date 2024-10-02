#include <stdio.h>
#include <string.h>

/* 
  去除重复的字符  
  例如输入google->gole
         google->gole
         gooogle   
      第二种办法用两个字符串实现
*/
int main()
{
      char a[20]={0};
      char o[20]={0};
      int lable=0;//0表示没有重复字符
      int k,i;
      
      printf("请输入字符串\n");//google
      scanf("%s",a);
      
      for( i=0;i<strlen(a);i++)
         {
            //将字符串a中的字符与o字符串挨个比较
            //第一次直接写入即可
           for( k=0;k<strlen(o);k++)
           { 
                //错误事例全部写成o(i)==a[k]
             if(o[k]==a[i])
             {
                lable=1;
                break;
             }
             
           }
           if(lable==0)
           {
              
              // printf("%c",);
              o[k]=a[i];
           }
           else
           lable=0;
         }
      printf("%s\n",o);
      return 0;
}