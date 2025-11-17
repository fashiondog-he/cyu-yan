#include <stdio.h>
#include<string.h>//int型最好不用strlen 
int main (){
	int arr[10]={1,22,33,4,5,6,75,78,9,0};
	int len=sizeof(arr)/sizeof(arr[0]);
	for(int i=len/2;i>0;i/=2){//外层不断缩小增量 
		for(int j=i;j<len;j+=i){//每组插入 
			int target=arr[j];
			int b=j-i;
			while(b>-1&&target<arr[b]){
				arr[b+i]=arr[b];//O(n^3)
				b-=i;
			}
			arr[b+i]=target;
		} 
	}
	for(int c=0;c<10;c++)
	printf("%d  ",arr[c]);
}
