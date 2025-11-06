     #include<stdio.h>
int main()
{	
	int count=0;
	
	int i=0;
	for(i=100;i<=200;i++)
	{
		int a=1;
		int j=0;//i去除j看看余数是否为零；为零跳过 
		for(j=2;j<=i-1;j++)//用2~i-1去试 
		{
			if(i%j==0)
			{
			a=0;
			 
			break;
			}//第一次时忘了加大括号--- 
		}
	
		if(a==1)
		{
			printf("%d ",i);
			count++;
		}
		
	}	
	printf("\n一共有%d素数\n",count);
	
}
