#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int sum=1;
	scanf("%d",&a);
	for(int j=1;j<=a;j++)
	{
		for(int i=1;i<=j;i++)
		{
		
			 sum*= i;
		}
	
		b+=sum;
		sum=1;
	}
	printf("%d",b);
}
