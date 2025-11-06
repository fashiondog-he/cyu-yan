#include<stdio.h>
double Pow(int a,int k)
{
	if(k>0)
	return a*Pow(a,k-1);
	else if (k==0)
	return 1;
	else 
	return 1.0/Pow(a,-k);
}
int main()
{
	int a=0;
	int k=0;
	scanf("%d%d",&a,&k);
	 double d=Pow(a,k);
	 printf("%lf",d);
}
