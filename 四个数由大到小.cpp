#include<stdio.h>
int main( )
{
	int a,b,c,d;
	int m1,m2,m3,m4;
	scanf("%d%d%d%d",&a,&b,&c,&d); 
	int e=0;
	if(a>b)
	{
		e=a;
		a=b;
		b=e;
	}
	if(a>c)
	{
		e=a;
		a=c;
		c=e;
		 
	}
	if(a>d)
	{
		e=a;
		a=d;
		d=e;
	}
	if(b>c)
	{
		e=b;
		b=c;
		c=e;
	}
	if(b>d)
	{
		e=b;
		b=d;
		d=e;
		
	}
	if(c>d)
	{
		e=c;
		c=d;
		d=e;
		
	}
	printf("由小到大：%d  %d  %d  %d",a,b,c,d);
	return  0;
}
