#include<stdio.h>
int main()
{
	int a=1;
	int b=1;
	int c=0; 
	int i=1;
	
	for (i=1;i<=10;i++)
	{
		for(b=1;b<=i;b++)//
		{
			a=a*b;
		}
		c=c+a;
		a=1;
	}
	printf("%d\n",c);
}
