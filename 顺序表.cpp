#include<stdio.h>
#define maxsize  100
typedef int elemtype;
//类型重命名相当于int可以用elemtype代替 
//定义 
typedef struct{
	elemtype data[maxsize];
	int   length;
}seqlist;
//初始化顺序表 
void initdata(seqlist *L){
	L->length=0;
}

/////////////注意这里有个动态分布内存空间地址 初始化
/*typedef struct{
	elemtype *data[maxsize];
	int   length;
	}seqlist;*/
/*void initdata(){
	seqlist*L=(seqlist*)malloc(sizeof(seqlist));
	L->data= (elemtype*)malloc(sizeof(elemtype)*maxsize);
	L->length=0;
	return L;
}*/	
	

//在顺序表尾端添加元素
int addseqlist(seqlist*L,elemtype e){
	if((L->length)>=maxsize){
		printf("顺序表已满");
		return 0; 
	}
	L->data[L->length]=e;
	L->length++;
	return 1; 
} 
//遍历顺序表 
void listelem(seqlist *L){
	for(int i=0;i<L->length;i++){
		printf("%d\n",L->data[i]);
	}
	printf("\n");
} 
//插入数
int insertlist(seqlist*L,int pos,elemtype e){
	if(pos<L->length){
		for(int i=L->length;i>=pos;i--){
			L->data[i+1]=L->data[i];
		}
		L->data[pos-1]=e;
		L->length++;
	}
} 
//删除元素
int deleteelem(seqlist*L,int del,elemtype *e){
	*e=L->data[del-1];
	if(del<L->length){
		for(int i=del;i< L->length;i++){
			L->data[i-1]=L->data[i];
		}
	}
	L->length--;
	return 1;
} 
//查找元素 
int findelem(seqlist*L,elemtype e){
	for(int i=0;i<L->length;i++){
		if(L->data[i]==e){
			return i+1;
		}
	}

}
int main(){
	seqlist list;			//先定义 
	initdata (&list);		//初始化 
	addseqlist(&list,8); 	//后端加数 
	addseqlist(&list,88);	
	addseqlist(&list,888);
	addseqlist(&list,8848);
	
	int pos,e;				//精准插数 
	printf("请输入要插入的位置：");
	scanf("%d",&pos);
	printf("请输入要插入的数字：");
	scanf("%d",&e); 
	insertlist(&list, pos,e);
	listelem(&list);
							//精准删除 
	int del,d; 
	printf("请输入要删除的位置：");
	scanf("%d",&del);
	deleteelem(&list,del,&d);
	printf("删除的数字是%d\n",d);
	listelem(&list);
							//查找
	int p,a;
	printf("请输入要查找的数\n");
	scanf("%d",&a); 
	p=findelem(&list,a);
	printf("在顺序表的第%d位",p);
}
