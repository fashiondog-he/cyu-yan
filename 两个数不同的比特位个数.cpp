#include <stdio.h>
int count_deff_bit(int m,int n)
{
	int count=0;
	int i=0;
	//^相同为0，相异为1
	i=m^n;
	//统计1的个数 
	while(i) 
	{
		i=(i&(i-1));
		count++;
	}
	return count;
}
int main ()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int ret=count_deff_bit(m,n);
	printf("%d",ret);
	
	 
}




//if(((m>>i)&1)!=((n>>i)&1))
//		{
//			count++;
//		}
