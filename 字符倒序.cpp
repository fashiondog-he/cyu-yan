#include<stdio.h>
#include<string.h>

/*int main()
{
	char arr[]="abcdefgh";
	//µ¹Ðò,a,h»» b,g»».... 
	int  left=0;
	int  right=strlen(arr)-1;
	while(left<right)
	{
		int tem=arr[left];
		arr[left]=arr[right];
		arr[right]=tem;
		left++;
		right--;
	}
	printf("%s\n",arr);
	return 0;
	
}*/
int reverse(char arr[],int left,int right)
{
	
		char tem=arr[left];//char  ±íÊ¾×Ö·û 
		arr[left]=arr[right];
		arr[right]=tem;
	if(left<right)
	reverse (arr,left+1,right-1);
///////////µÝ¹é£¡£¡£¡£¡£¡ 
	
}
int main()
{
		char arr[]="abcdefgh";
	//µ¹Ðò,a,h»» b,g»».... 
	int  left=0;
	int  right=strlen(arr)-1;
	reverse(arr);
	printf("%s\n",arr);
	
	
	
}
 	
 	
