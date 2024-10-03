#include <stdio.h>
#include <string.h>

/* 
 3. 写一个程序处理字符串 A ， 
 处理规则是 : 只要字符串 B 里面有的字符， 
 不论大小写，
 一律从 A 字符串中删除 ( 用数组或者指针实现 )
   fdjjfDFDdjfjdf - fdc
*/
int main()
{   
  char strA[20]={0};
  char strB[20]={0};
  int i,j,k;
  
  printf("请输入字符串A\n");
  scanf("%s",strA);
  printf("请输入字符串B\n");
  scanf("%s",strB);
  
  //将B里的字母挨个与A比较
  for(i=0; i<strlen(strB); i++)
  {
     for(j=0; j<strlen(strA);j++)
     {
        //首先判断B里面的是不是字母
        
        if((strB[i]>='a' && strB[i]<='z')||
          (strB[i]>='A'&&strB[i]<='Z'))
        {
           //循环比较是否相等或者是对应大小写字母
          
           if(strB[i]==strA[j] || strB[i]-strA[j]==32
             || strB[i]-strA[j]==-32)   
           {
              //满足条件则将其从A字符串中删除
              for(k=j;k<strlen(strA)+1;k++)
              {
                 strA[k]=strA[k+1];
                //printf("aaaaaaaaaa\n");
              }
              j--;
           }
        }
        else
        break;
     }
  
  }
  
  printf("处理后的A字符串is:%s\n",strA);
  printf("B字符串is:%s\n",strB);  
  
  return 0;
}