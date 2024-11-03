#include <stdio.h>
#include <string.h>
/* 封装一个函数， 判断字符串A是不是字符串B的子串，
 如果是返回 A 在 B 中首次出现的 位置 (返回指针) 
 char *getstr(char *A,char *B）
 aabcdef  B   j
 abc      A   i
 */
char *getstr(char *A,char *B)
{
   int j,i;
   if(strlen(A)>strlen(B))
      return NULL;
   else
   {
      for(j=0;j<=strlen(B)-strlen(A);j++)
      {
          for(i=0;i<strlen(A);i++)
          {
             if(A[i]==B[i+j])
             {
               continue;
             }
             //只要有一个不符合就跳出
             else
             break;
          }
          //判断是不是最后一个位置，是的就返回
          if(i==strlen(A))
          {
             printf("第一次出现的下标是%d\n",j);
             return &B[j];
          } 
      }
   }   
   return NULL;
}

int main()
{
    char A[20]={0};
    char B[20]={0};
    
    
    printf("请输入字符串A\n");
    scanf("%s",A);
    printf("请输入字符串B\n");
    scanf("%s",B);
   // printf("A:%s B:%s\n",A,B);
    char *p=getstr(A,B);
    
    if(p==NULL)
       printf("A不是B的子串\n");
    else
       printf("A是B的子串,第一次出现的位置是%s\n",p);   
   
    return 0;
    
}