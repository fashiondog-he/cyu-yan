#include <stdio.h>
int main()
{
	int  age=0;
	printf("请输入年龄:"); 
	scanf("%d",&age); 
	if(age<18)
	{
		printf("未成年\n");
		printf("不能饮酒\n");
		 
	}
	else if(age<=28 && age>=18)
	{
		printf("你是青年\n"); 
	}
	
	else
	{
		printf("已经成年好多年了\n");
		printf("是个大人了\n"); 
	}
}
