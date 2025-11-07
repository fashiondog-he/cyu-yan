#include<stdio.h>
int main()
{
	int i=0;
	int n=0;
	int j=0;
	printf("请输入n的值\n"); 
	scanf("%d",&n);
	int arr[n]={0};
	printf("请输入n中的值\n"); 
	for(i=0;i<n;i++)
	{
		int arr[n]={0};
		scanf("%d",&arr[i]);
	 } 
	 int del=0;
	 printf("请输入要删除的值"); 
	 scanf("%d",&del);
	 for(i=0;i<n;i++)
	 {
	 	
	 	if(arr[i]!=del)
	 	{
	 		arr[j]=arr[i];
	 		j++;
		 }
	 }
	 int a=0; 
	for(a=0;a<=j;a++)
	{
		 printf("%d",arr[j]);
	}
	return 0;
}
