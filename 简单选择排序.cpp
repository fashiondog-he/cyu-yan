#include<stdio.h>
int turn(int*b,int*c){
	int tem=*b;
		*b=*c;
		*c=tem;

}
int main()
{
	int arr[10]={11,32,32,43,45,65,70,86,79,0};
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(arr[i]>arr[j]){
			turn(&arr[i],&arr[j]);
			}
		
		}
		
	}
	for(int a=0;a<10;a++){
		printf("%d\n",arr[a]);
	}
}
