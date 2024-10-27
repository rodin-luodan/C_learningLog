#include <stdio.h>
#include <string.h>
/*
利用回调函数简单实现不同红绿灯不同的驾驶状态
*/
void status(char *color)
{
   if(strcmp(color,"red")==0)
      printf("车子正在停车中\n");
   if(strcmp(color,"green")==0)
      printf("车子正在行驶\n");
   if(strcmp(color,"yellow")==0)
      printf("车子正在缓行\n");
}

void driver(void (*p)(char *color),char *color)
{
   p(color);
}

int main()
{
    int color;
    while(1)
    {
      printf("请输入红绿灯的颜色\n");
      printf("1.red\n");
      printf("2.green\n");
      printf("3.yellow\n");
      printf("4.退出\n");
      scanf("%d",&color);
      
      switch (color)
      {
         case 1:
              driver(status,"red");
              break;
         case 2:
              driver(status,"green");
              break;
         case 3:
              driver(status,"yellow");
              break;  
         case 4:
              return 0;        
      }
    printf("=================\n");
    printf("=================\n");
    }
    return 0;
}    

    