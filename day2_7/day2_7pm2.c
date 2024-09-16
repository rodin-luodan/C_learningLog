/*循环示例
*/
#include <stdio.h>

int main()
{
	int a=0;
	/* do
	{
		printf("hello world 打印了%d次\n",a);
	}while((a++)<5); */
	
	/*  while((a++)<5)//注意a++和++a,陷进
	 {             //a++ 会打印 1 2 3 4 5
		 printf("hello world 打印了%d次\n",a);
	 } */
	 
    /* for(a=0;a<5;a++)
		printf("hello world 打印了%d次\n",a); */
	
	 while(a<5)//注意a++和++a,陷进
	 {             //a++ 会打印 1 2 3 4 5
		 printf("hello world 打印了%d次\n",a);
		 a++;
	 }
	return 0;
}