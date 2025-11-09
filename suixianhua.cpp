#include<stdio.h>
#include<math.h>
int main()
{
	int i=0;
	//这里不能定义sum和n每次循环应重置 
	for(i=0;i<=10000;i++)
	{
			int sum=0;
			int n=1;
		int tmp=i;
		while (tmp/10)
		{
			n++;
			tmp/=10;
		}
		tmp=i;
		while(tmp)
		{
			int b=pow(tmp%10,n);
			tmp/=10;
			sum+=b;
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
		return 0;
}

