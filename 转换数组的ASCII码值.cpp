#include<stdio.h>
int main()

{
	int arr[]={23,44,43,56,33};
	int i=0;
	//先求数组个数 
	
	int sz=sizeof(arr)/sizeof(arr[0]);
	//while循环要打印的数组 
	while(i<sz)
	{
		printf("%c\n",arr[i]);
		i++;
	}
	return 0; 
 } 
