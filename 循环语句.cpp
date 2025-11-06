#include<stdio.h>
main()
{
	int  line=0;
	printf("开始写\n");
	
	while (line<8000)
	{
		printf("飞舞:%d\n", line);
		line++;
	}
	if(line>=8000)
	
	{
	printf("干得漂亮"); 
	}
	else{
		printf("飞舞"); 
	}
	return 0;
}
