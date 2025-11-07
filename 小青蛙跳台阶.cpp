#include<stdio.h>
int Fib(int n)
{	
	if(n<=2)
	return n;
	else 
	return Fib(n-1)+Fib(n-2);
	
}
int main()
{
	int n=0;
	//ÊäÈë
	scanf("%d",&n);
	
	//¼ÆËã
	int a=Fib(n);
	//Êä³ö 
	printf("%d",a);
}
