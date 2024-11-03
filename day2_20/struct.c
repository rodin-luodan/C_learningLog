#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
	char name[10];
	int age;
};

int main()
{
	//struct student stu1={"张三",18};
	
	struct student stu1;
	strcpy(stu1.name,"a");//错误，字符串赋值只能用strcpy
	stu1.age=20;
	
	//linux内核中很常见
	//优点  可以不按结构体定义的顺序赋值
	/* struct student stu2={
		.name="张三",
		.age=18,
	}; */
	
	/* struct student *stu3=malloc(sizeof(struct student));// 野指针Segmentation fault (core dumped)
	strcpy(stu3->name,"张三");
	stu3->age=18;
	
	free(stu3);
	stu3=NULL; */
	
	/* struct student *stu3=malloc(sizeof(struct student));
	strcpy((*stu3).name,"张三");
	(*stu3).age=18;
	
	free(stu3);
	stu3=NULL; */
	
	/* printf("name is %s\n",stu3->name);
	printf("age is %d\n",stu3->age); */
	
	//定义学生结构体数组  int buf[10];
	/* struct student array[10];
	array[0].age=18;
	strcpy(array[0].name,"李四");
	
	printf("%d   %s\n",array[0].age,array[0].name); */
	printf("struct student大小是%lu\n",sizeof(struct student));
	printf("struct student stu1大小是%lu\n",sizeof(stu1));
	
	
	return 0;
}