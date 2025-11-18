#include<stdio.h>
void QuickSort(int arr[],int n){
	if(n<2) return ;//小于2就没必要排序了 
	int tem=arr[0];//中心轴取数组第一个元素
	int left=0;//左下标 
	int right=n-1;//右下标 
	int move=2;// 当前要移动的下标 1-左 2-右 
	while(left<right){
		if(move==2){
			//如果说right>tem right右移 
			if(arr[right]>tem){
				right--;
				continue;
			}
			//如果右下标的元素小于中心轴   把它放到左端
			arr[left]=arr[right];
			left++;    //左下标右移 
			move=1;    //下次移动左下标 
			continue; 
		}
		if(move==1){
			//如果说left<tem left左移 
			if(arr[left]<tem){
				left++;
				continue;
			}
			//如果左下标的元素大于中心轴   把它放到右端
			arr[right]=arr[left];
			right--;    //右下标左移 
			move=2;    //下次移动右下标 
			continue; 
		} 
	} 
	//循环结束left=right 把中心值塞回去
	arr[left]=tem; 
	QuickSort(arr,left);      //对中心轴左边进行排序 
	QuickSort(arr+left+1,n-left-1);  //对中心轴右边进行排序 
}
int main(){
	int arr[10]={52,22,32,44,56,65,78,79,0};
	QuickSort(arr,10);
	for(int i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	
}
