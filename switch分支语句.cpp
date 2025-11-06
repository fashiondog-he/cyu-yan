#include <stdio.h>
int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("周一");
			break;
		case 2:
			printf("周二") ;
			break;
		case 3:
			printf("周三");
			break;
		case 4:
			printf("周四");
			break;
		case 5:
			printf("周五");
			break;
		case 6:
		case 7:
		printf("周末");
		break;
		default:
		printf("这是星期，你输入错误");
		break; 
	}
}
