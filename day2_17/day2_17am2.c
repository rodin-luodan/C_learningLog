#include <stdio.h>
#include <string.h>

/* 
  定义一个 char 类型的二维数组 char buf[6][20], 
  要求使用指针操作去除掉字符串中所有的 
  非英文字母 ( 只要不是英文字母的全部剔除 ) 
  思路有两种 第一种采用 char * 指针去访问这个二维数组 
           第二种采用数组指针 char (*p)[20] p[i][j]
   这是第二种采用char (*)[20]数组指针去访问
*/
int main()
{   
  char a[6][20]={"h","2orlhs4f","hello","g67c"};
  char (*p)[20]=a;//&a[0]
  int i,j,k;
  
  for(i=0;i<6;i++)
  {
   printf("字符串未处理前输出为%s\n",p[i]);//*(p+i)
  }
  
  
  //非英文字母全部删除
  for(i=0; i<6; i++)
  {
     
   //printf("p的地址为:%p\n",p);
   //printf("for外%s\n",p[i]);
   //printf("p[i]的地址为:%p\n",p[i]);
  
   //printf("字符串测试输出为%s\n",p[i]);//*(p+i)
   
   for(j=0; j<strlen(a[i]);j++)//
   {
     //判断是否为英文字母
    //printf("for里%c\n",p[i][j]);
	//保存首地址
	
	//sleep(1);
     if(! ((a[i][j] >='a'&&a[i][j]<='z') || (a[i][j] >='A'&&a[i][j]<='Z')))
     {
        //剔除
        //printf("zzzzzz%c\n",p[i][j]);
		//printf("p的地址为:%p\n",p);
        for(k=j;k<strlen(*(p+i));k++)///注意这里不要写成strlen(*p)找bug找了半天哭死
        {
          a[i][k]=a[i][k+1];
        }  		
        j--;
     }
   }
  // p++;
  }
  printf("=================================\n");
  p=a;
  for(i=0;i<6;i++)
  {
   printf("字符串处理后输出为%s\n",*(p+i));
  }
  
  return 0;
}