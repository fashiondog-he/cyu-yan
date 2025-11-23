#include<stdio.h>
#include <stdlib.h>
#define maxsize 100
typedef int elemtype;  

//定义队列
typedef struct queue{
	elemtype data[maxsize];
	int front;		//对头 出 
	int rear ;		//队尾 入 
}queue;
//初始化 
void initqueue(queue*Q){
	Q->front=0;
	Q->rear =0;
}
//判断是否为空 
elemtype is_empty(queue*Q){
	if(Q->front==Q->rear){
		printf("是空的"); 
		return 1;
	}
	else{
		return 0;
	}
}
//出队
elemtype dequeue(queue*Q){
	if(Q->front==Q->rear){
	printf("是空的"); 
	return 1;
	}
	elemtype e=Q->data[Q->front];
	Q->front++;
	return  e;
} 
//是否满了 
int queuefull(queue*Q){
	if(Q->front>0){//是否有已经出队的元素 
		int tem=Q->front;
		for(int i=Q->front;i<=Q->rear;i++){
		Q->data[i-tem]=Q->data[i];
		}
		//把front指向现有的第一个元素 
		Q->front=0;
		Q->rear=Q->rear-tem;
		return 0;
	}
	else{
		printf("真的满了\n");
		return 1;
	}
} 
//入队 
elemtype pushqueue(queue*Q,elemtype e){
	if(Q->rear>=maxsize){
		if(queuefull(Q)){
			return 0;
		}
	}
	Q->data[Q->rear]=e;
	Q->rear++;
	return 1;
}

//获取对头元素
elemtype get_queue(queue*Q){
	if(Q->front==Q->rear){
	printf("是空的");
	return 1;
	}
	elemtype e;
	e=Q->data[Q->front];
	return e;
	
} 

int main(){
	queue q;
	initqueue(&q);
	
	pushqueue(&q,8);
	pushqueue(&q,88);
	pushqueue(&q,888);
	pushqueue(&q,8888);
	int T=get_queue(&q);
	printf("%d\n",T);
	printf("%d\n",dequeue(&q));
	printf("%d\n",dequeue(&q));	
	int T1=get_queue(&q);
	printf("%d\n",T1);	
}








