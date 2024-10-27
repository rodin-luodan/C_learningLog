#include<stdio.h>
/*             行数      空格数      *号数
  *             1         2          1
 ***            2         1          3
*****           3         0          5
 ***            4         1          3
  *             5         2          1

*/
int main()
{
    int i,j,k,n;

    printf("请输入要打印的钻石层数(请输入奇数)\n");
    scanf("%d",&n);
    
    //先打印上半部分
    for(i=1;i<=n/2+1;i++)
    {
       //打印空格
       for(j=1;j<=n/2+1-i;j++)
       { 
          printf(" ");
       }
       //打印*号
       for(k=1;k<=2*i-1;k++)
       printf("*");
       
       printf("\n");
    }
    //打印下半部分
    for(;i<=n;i++)
    {
       //打印空格
       for(j=1;j<=n/2+1-(n+1-i);j++)
       {
          printf(" ");
       }
       //打印*号
       for(k=1;k<=2*(n+1-i)-1;k++)
       printf("*");
       
       printf("\n");
    }
    
    return 0;
}