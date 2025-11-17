#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main(){
	int arr[1001];
	for(int i=1;i<=1000;i++){
		arr[i-1]=i;
	}
	 srand((unsigned int)time(NULL));
	arr[1000]=rand()%1001;
	
	int a=0;
	//异或：相同数异或为0；相异异或为1 
	for(int k=0;k<1000;k++){
		a=(a^k);
	}
	for(int j=0;j<1001;j++){
		a=(a^arr[j]);
	}
	
	printf("%d",a);
	
}
