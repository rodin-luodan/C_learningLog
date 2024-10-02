#include <stdio.h>
#include <string.h>

/* 
 用 char 类型二维数组存放， 
 从键盘中任意输入 5 个字符串， 
 要求统计每个字符串中小写字 母的个数，
  并且按照小写字母的个数从小到大排序 
 ( 中等难度 ) 
*/
int main()
{    
    char str1[5][20]={0};
    int i,j;
    int count[5];//存储小写字母个数
    char strmid[20]={0};
    
    printf("请输入五个字符串\n");
    
    for(i=0;i<5;i++)
        scanf("%s",str1[i]);
    
    printf("字符串按小写字母个数未排序前：\n");
    
    for(i=0;i<5;i++)
        printf("%s\n",str1[i]);
    
    //统计小写字母个数到数组中     
    for(i=0;i<5;i++)    
       {
          for(j=0;j<strlen(str1[i]);j++)
              {
                 if(str1[i][j]>='a'&&str1[i][j]<='z')
                    count[i]++;
              }
       }
      //打印count统计数目
     // for(j=0;j<5;j++)  
      //  printf("%d \n",count[j]);
      
      //暴力排序 数组排完字符串跟着排(冒泡)
      for(i=0;i<4;i++)
        {
           for(j=0;j<4-i;j++)
             {
                if(count[j]>count[j+1])
                {
                   count[j]=count[j]^count[j+1];
                   count[j+1]=count[j]^count[j+1];
                   count[j]=count[j]^count[j+1];
                   //对应字符串暴力跟着交换strcpy
                   strcpy(strmid,str1[j]);
                   strcpy(str1[j],str1[j+1]);
                   strcpy(str1[j+1],strmid);
                   
                }
             }
        
        }
      
      printf("\n");
      printf("字符串按小写字母个数排序后：\n");
    
    for(i=0;i<5;i++)
        printf("%s\n",str1[i]);
    
      
    return 0;
}