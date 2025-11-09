#include<stdio.h>
#include<math.h>
int main()
{
	int i=0;
	int sum=0;
	int n=0;
	for(i=0;i<=10000;i++)
	{
		int tmp=i;
		while (tmp)
		{
			tmp/=10;
			n++;
		}
		tem=i;
		while(tem)
		{
			int b=pow(tem%10,n);
			sum+=b;
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}	
}

