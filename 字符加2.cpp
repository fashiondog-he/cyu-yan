#include <stdio.h>
#include <string.h>
int main (){
	char arr[100];
	scanf("%s",arr);
	int len1=strlen(arr);
	for(int i=0;i<len1;i++){
		if(arr[i]<='x'&&arr[i]>='a')
		arr[i]+=2;
		if(arr[i]<='X'&&arr[i]>='A')
		arr[i]+=2;
		if(arr[i]=='y'||arr[i]=='z')
		arr[i]-=24;
		if(arr[i]=='Y'||arr[i]=='Z')
		arr[i]-=24;
		
	}
	for(int j=0;j<len1;j++)
	printf("%c",arr[j]);
	
}
 
