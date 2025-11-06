#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
int main()
{	
	char arr1[]="Cui Hao cried and said to me,I love liu Shuyao 1314 www!";
	char arr2[]="########################################################";
	int a=0;
	int r=strlen(arr2)-1;
	
	while(a<=r)
	{
		arr2[a]=arr1[a];
		arr2[r]=arr1[r];
		
		printf("%s\n",arr2);
		Sleep(300);//¼ä¸ôÊ±¼ä ºÁÃë 
		system("cls");
		a++;
		r--;
	}
	printf("%s\n",arr2);
	
}
//liu zhongyi cried and said to me,I love Pan yutong 1314 
