#include <stdio.h>
int  main()
{
	int a=0;
	int i=1;
	int max = 0;
	//假设第一个为最大值
	scanf("%d",&max);
	while (i<4)//一共几个数i《几 
	{
		scanf("%d",&a);
		if(a>max)//如果第2个数大 
		max=a;//就把它赋值给max 
		i++;//依次循环 
		
	 } 
	 printf("%d\n",max);
	 return 0;
}
