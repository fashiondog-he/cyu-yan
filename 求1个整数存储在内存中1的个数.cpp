#include<stdio.h>
int main ()
{
	int sum=0;
	int a=0;
	int b=0;
	scanf("%d",&a);
	for(b=0;b<32;b++)
	{
		int c=0;
		c=a&1;
		
		sum=sum+c;
		
		a=a>>1;
		
	
	 } 
	 printf("%d",sum);
	 return 0;
}
