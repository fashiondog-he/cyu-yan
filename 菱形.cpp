#include<stdio.h>
int main()
{
	int i=0;
	int line=0;
	scanf("%d",&line);
	//打印上半部分
	for(i=0;i<line;i++)
	{
		//打印空格
		int j=0;
		for(j=0;j<line-i;j++)
		{
			printf(" ");
		}
		//打印* 
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	 } 
	 
	 	for(i=0;i<line;i++)//下半段 
	{
		//打印空格
		int j=0;
		for(j=0;j<=i+1;j++)
		{
			printf(" ");
		}
		//打印* 
		for(j=0;j<2*(line-i-1)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	 } 
 } 
