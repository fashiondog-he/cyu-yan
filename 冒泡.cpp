#include<stdio.h>
void bubble_sort(int arr[],int sz)//arr是首元素地址，在函数中不能用其求szarr是指针 
{
	int i=0;
	for(i=0;i<sz-1;i++)//冒泡趟数 
	{
		int j=0; 
		for(j=0;j<=sz-1-i/*   -i可以提高效率 每次循环都把拍好的数字省略了；减小了运算*/
		;j++)//冒泡程序
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			 } 
		 } 
		 
	}
	
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	//降序
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz) ;
	//冒泡排序,的算法对数组进行排列 
	//把数组打印出来 
	int a=0;
	for(a=0;a<sz;a++)
	{
		printf("%d ",arr[a]);
	}
	
	
	
	
	return 0;
}
