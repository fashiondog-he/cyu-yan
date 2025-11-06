#include<stdio.h>
int main()
{
	char passward[20]={0};
	printf("请输入密码：");
	scanf("%s",passward);
	int   r=getchar();//不完善 
	while((r = getchar())!= '\n') 
	{
			;
	}
	printf("请确认密码：Y/N\n");
	int ch = getchar();
	if(ch=='Y')
	{
		printf("Yes\n");
	}
	else
	{
		printf("NO\n") ;
	}
}
