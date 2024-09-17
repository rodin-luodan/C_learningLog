/*
switch 做一个功能选择菜单，重复选择不同的功能
printf("请你选择如下功能!\n");
1. 登录
2. 借书
3. 还书
4. 修改账户密码
5. 查询
*/
#include <stdio.h>

int main()
{
	
	while(1)
	{
		printf("请你选择如下功能\n");
		printf("1. 登录\n");
		printf("2. 借书\n");
		printf("3. 还书\n");
		printf("4. 修改账户密码\n");
		printf("5. 查询\n");
		printf("6. 退出\n");
	
		int a;
		scanf("%d",&a);
		
		switch(a)
		{
			case 1:
			       printf("你选择了登录\n");
			       break;
			case 2:
			       printf("你选择了借书\n");
			       break;
		    case 3:
			       printf("你选择了还书\n");
			       break;
			case 4:
			       printf("你选择了修改账户密码\n");
			       break;	   
			case 5:
			       printf("你选择了查询\n");
			       break;
			case 6:
			       printf("已退出\n");
			       return 0;
		    default:
			       printf("没有该选项，请重新选择");
				   break;
		}
		printf("\n\n");
		
	}
	return 0;
}
