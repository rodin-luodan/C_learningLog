/*
switch 键盘任意输入年，月，日， 告诉我这个日期是这个一年的第几天
1987 6 23
*/
#include <stdio.h>

int main()
{
		int year,month,day;
		
		printf("请输入年,月，日\n");
		scanf("%d%d%d",&year,&month,&day);
		
		//判断平年闰年
		int count;
		if((((year%4 == 0))&&(year%100 !=0)) || (year%400 == 0))
           	//如果是闰年
			count = 29;
		else
            count = 28;			
		
		switch(month)
		{
			case 1:
			       printf("这个日期是这个一年的第%d天\n",day);
			       break;
			case 2:
			       printf("这个日期是这个一年的第%d天\n",31+day);
			       break;
		    case 3:
			       printf("这个日期是这个一年的第%d天\n",31+count+day);
			       break;
			case 4:
			       printf("这个日期是这个一年的第%d天\n",31+count+31+day);
			       break;	   
			case 5:
			       printf("这个日期是这个一年的第%d天\n",31+count+31+30+day);
			       break;
			case 6:
			       printf("这个日期是这个一年的第%d天\n",31+count+31+30+31+day);
			       break;
			case 7:
			       printf("这个日期是这个一年的第%d天\n",31+count+31+30+31+30+day);
			       break;
			case 8:
			       printf("这个日期是这个一年的第%d天\n",31+count+31+30+31+30+31+day);
			       break;
			case 9:
			       printf("这个日期是这个一年的第%d天\n",31+count+31+30+31+30+31+31+day);
			       break;
			case 10:
			       printf("这个日期是这个一年的第%d天\n",31+count+31+30+31+30+31+31+30+day);
			       break;
			case 11:
			       printf("这个日期是这个一年的第%d天\n",31+count+31+30+31+30+31+31+30+31+day);
			       break;
			case 12:
			       printf("这个日期是这个一年的第%d天\n",31+count+31+30+31+30+31+31+30+31+30+day);
			       break;
		    default:
			       printf("没有该选项，请重新选择");
				   break;
		}
		printf("\n\n");
		
	
	return 0;
}