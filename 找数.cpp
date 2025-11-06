#include<stdio.h>
int main()
{
	int i=0;
	int arr[]={1,22,3,4,5,6,7,8,9,10};
	int c=7;
	scanf("%d",&c);
	int sz=sizeof(arr)/sizeof(arr[0]);
	for (i=0;i<sz;i++)//只能找连续数组 
	{
		if(i==c)
		{
			printf("我TM找到你了:%d",i);
			break;
		}
	}
	if(i!=c)
	printf("找不到啊"); 
 } 
