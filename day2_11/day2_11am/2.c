#include<stdio.h>
#include<string.h>
#define MAX_STRING 30

void main()
{
	int i=0,j=0,k=0,label;
	char o[MAX_STRING];
	char n[MAX_STRING];

	for(i=0;i<=MAX_STRING-1;i++)
		n[i]=0;
	printf("please input a string:\n");
	scanf("%s",o);

	//�ӵ�һ���ַ���ʼ����
	for(i=0;i<strlen(o);i++)
	{
		//�ж��ַ�����o�Ƿ����ַ�����n���ظ��ַ��ı�־,1Ϊû���ظ���0Ϊ�ظ�
		label=1;
		//�����ַ�����n��n�ĳ���Ϊstrlen(n)
		for(j=0;j<strlen(n);j++)
		{
			if(o[i]==n[j])
			{
				label=0;
				break;
			}
		}
		if(label)
		{
			n[k++]=o[i];
		}
	}
	n[k]='\0';     //���ַ�����nһ��������־�������Ļ�ϵͳ�Զ���
	printf("\neliminate duplicate:\n%s\n",n);
}