#include<stdio.h>
#include <stdlib.h>
typedef  int  elemtype;
//定义链表 
typedef struct Node {
    elemtype data;      // 数据域
    struct Node *next;  // 指针域，指向下一个节点
} Node;

//初始化
Node *initlist(){
	//创建节点 
	Node*head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
}
//插入数据  头插法 
int headlist (Node* L,elemtype e){
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=e;		//目标节点数据 
	p->next=L->next;//把L的NULL赋值给p 
	L->next=p; 		//指向下一个节点的地址 
}
//尾插法
Node* get_tail(Node*L){//获取尾节点 
	Node*p=L;
	while(p->next!=NULL){
		p=p->next;//可以理解为p成为了下一个元素 
	}
	return p; 
} 
Node* taillist(Node* tail,elemtype e){
	Node*p=(Node*)malloc(sizeof(Node));
	p->data=e;			//目标节点数据  
	tail->next=p; 		//指向下一个节点的地址 
	p->next=NULL;		//把tail的NULL赋值给p
	return p; 			//p变为尾节点，重新赋值给tail 
}
//精准插入
int insertlist(Node*L,int pos,elemtype e){
	//检查一遍链表是否合法
	Node*p=L;
	for(int i=0;i<pos-1;i++){
		if(p->next==NULL)
		return 0;
		p=p->next;//p现在是要插入的前一个位置 （前驱节点） 
	} 
	//之后类似尾插但Null变成下个节点的位置 
	Node*q=(Node*)malloc(sizeof(Node));//要插入的新节点
	q->data=e;
	q->next=p->next;//注意顺序不能乱 先把后继赋值
	p->next=q;		//然后p指向q  防止后继找不到 
	return 1; 
} 
//删除节点
int dellist(Node*L,int pos){
	//同样检查一遍链表是否合法
	Node*p=L;
	for(int i=0;i<pos-1;i++){
		if(p->next==NULL){
			printf("删除位置不合法\n");
				return 0; 
		}
		p = p->next;
	} 
	Node*q=p->next;	//要删除的节点q 
	p->next=q->next;//p直接指向q的下一个 
	free(q);
	return 1;
} 
//获取链表长度
int listlength(Node*L){
	int len=0;
	Node*p=L->next;
	while(p!=NULL){
		p=p->next;
		len++;
	}
	return len;
} 

//遍历
int listnode(Node*L){
	Node*p=L->next;
	while(p!=NULL){
		printf("%d ",p->data) ;
		p=p->next;
	}
	printf("\n");
}  
//释放申请的内存
void freelist(Node*L){
	Node*p=L->next;
	Node*q;
	while(p!=NULL){
		q=p->next;
		free(p);
		p=q;
	}
	L->next=NULL;
	
} 
//找倒数的k个节点 
int findlistfs(Node*L,int k){
	Node*fast=L->next;
	Node*slow=L->next;
	for(int i=0;i<k;i++){
		fast=fast->next;
	} 
	while(fast!=NULL){
		fast=L->next;
		slow=slow->next;
	}
	printf("倒数第%d个节点的数是%d",k,slow->data);
	return 1;
} 
//删除链表的中心节点
void delmidlist(Node*L){
	Node*fast=L->next;
	Node*slow=initlist();
	int count=0; 
	while(fast!=NULL){
		fast=fast->next;
		fast=fast->next;
		slow=slow->next;
		count++;
	}
	dellist(L,count);
	printf("删除的中间节点是第%d个节点数字是%d");
} 

//删除绝对值相同的节点 -----空间换时间 
void removelist(Node* L,int n){
	Node*p=L;
	int a=0;	//做数组的下标 
	int* q=(int*)malloc(sizeof(int)*(n+1));
	for(int i=0;i<n+1;i++){//数组初始化为0 
		*(q+i)=0;
	}
	while(p->next!=NULL){
		//abs获取绝对值 
		a=abs(p->next->data);
		if(*(q+a)==0){
			*(q+a)=1;
		} 
		else{//不是0就说明前面已有相同绝对值 
			Node*tem=p->next;
			p->next=tem->next;
			free(tem);
		}
	}
	free(q);
} 
//反转单链表
void turndown(Node*head){
	Node*first=NULL;
	Node*second=head->next;
	Node*third;
	while(second!=NULL){
		third=second->next;
		second->next=first;
		first=second;
		second=third;
	}
	Node*h=initlist();
	h->next=first;
}
 

int main(){
	Node *list=initlist();
	Node *tail=get_tail(list);//找尾巴 
	tail=taillist(tail,18);
	tail=taillist(tail,88);
	tail=taillist(tail,888);
	listnode(list);
	insertlist(list,2 ,6);//在第2个位置插入6 
	listnode(list);
	dellist(list,3);	//删除第三个位置的88 
	listnode(list);
	int len=listlength(list);//链表长度 
	printf("%d",len);
	freelist(list);		//释放内存 
	return 0;
}

