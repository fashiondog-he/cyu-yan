#include<stdio.h>
int Digisum(int n)
{
	if(n>9)
	{
		return Digisum(n/10)+n%10;
		
	}
	else
	return n;
}

int main()
{
	unsigned int n=0;
	scanf("%u",&n);
	int sum=0;
	sum=	Digisum(n); 
	printf("%d",sum);
 } 
