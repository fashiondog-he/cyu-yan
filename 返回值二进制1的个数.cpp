//返回值二进制中1的个数
#include<stdio.h>
int count_num_of_1(unsigned int n)
{
	int num=0;
	while (n)
	{
		 n=n&(n-1);			//if(n%2==1)
		num++;			//	{
					//	num++;
					//	}
					//	n/=2;
	}
	return num;
}
int main ()
{
	int a=0;
	scanf("%d",&a);
	int n =count_num_of_1(a);
	printf("%d",n);
	return 0;
 } 
