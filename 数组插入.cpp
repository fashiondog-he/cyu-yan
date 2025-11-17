#include<stdio.h>
int main (){
	char arr[100];
	scanf("%s",arr);
	
	int a=0;
	char b=0;
	scanf("%d,%c",&a,&b);
	
	int sz=sizeof(arr)/sizeof(arr[0]);
	
	for(sz;sz>a-1;sz--){
		arr[sz-1]=arr[sz-2];
	}
	
	arr[a-1]=b;
	
	for(int i=0;i<10;i++){
		printf("%c",arr[i]);
	}
}

