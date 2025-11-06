#include <stdio.h>
int main()
{
	int i=1;
	int n=0;
	int  a=1;
	scanf("%d",&n);
	
	while(i<=n)
	{
		
		a=a*i;
		i++; 
	}
	printf("%d\n",a);
}
	
