#include<stdio.h>
int sreach( int arr[],int  k,int  sz)
{
	int  left=0;
	int  right=sz-1;
	int mid=(left+(right-left))/2;
while(left<=right)
 {
		if(arr[mid]>k)
	{
		right=mid-1;
	}
	else if(arr[mid]<k)
	{
		left=mid+1;
	}
	else 
	{
		return mid;
	}

 }
 return -1;
	mid=(left+(right-left))/2;
}

int  main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,};
	//找数组中的一个数
	int k=0;
	
	int sz=(sizeof(arr))/(sizeof(arr[0]));
	
	scanf("%d",&k);
	int s=0;
	s=sreach(arr,k,sz);
	 if(s==-1)
	 {
	 	printf("没找到"); 
	 }
	 else
	 {
	 	printf("%d",s);
	 }
	 
	
}
