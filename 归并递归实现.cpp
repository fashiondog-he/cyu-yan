#include<stdio.h>
#define A 10000
void merge_sort(int arr[],int left,int right){
    if (left >= right)
        return;
        
	int mid=left+(right-left)/2;
	merge_sort(arr,left,mid);
	merge_sort(arr,mid+1,right);
	
	int tmp[A];
	int k=0;
	int i=left;
	int j=mid+1;
	    // 合并两个有序区间到临时数组
	while(i<=mid&&j<=right){
		if(arr[i]<=arr[j]){
			tmp[k++]=arr[i++];
		}
		else{
			tmp[k++]=arr[j++];
		}
	}
	// 拷贝左区间剩余元素
	while(i<=mid){
		tmp[k++]=arr[i++];
	}
	// 拷贝右区间剩余元素
	while(j<=right){
		tmp[k++]=arr[j++];
	}
   // 将临时数组的元素拷贝回原数组的 [left, right] 区间
    for (int c = 0; c < k; c++) {
        arr[left + c] = tmp[c];
    }
}

int main(){
	int n=0;
	printf("请输入数组中数的个数");
	scanf("%d",&n);
	int arr[n];
	 
	
	printf("请输入数组的数");
	for(int a=0;a<n;a++){
		scanf("%d",&arr[a]); 
	} 

	merge_sort(arr,0,n-1);
	
	for(int b=0;b<n;b++){
		printf("%d  ",arr[b]); 
	} 
}
