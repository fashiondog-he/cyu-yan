#include<stdio.h>
#define maxsize 100
typedef int elemtype;
		//栈的顺序结构 
//栈的定义 
typedef struct {
	elemtype data[maxsize];
	int top;
}stack; 

//栈的初始化
void  initstack(stack*s){
	s->top=-1;
}

//判断是否为空栈
elemtype  is_empty(stack*s){
	if(s->top==-1){
		printf("是空栈\n");
		return 1;
	}
	else {
		return 0;
	}
} 
//压栈塞入元素
elemtype  pushstack(stack*s,elemtype e){
	if(s->top>=maxsize){
		printf("栈已满");
		return 0;
	}
	s->top++;		//相当于把top看成数组下标 
	s->data[s->top]=e;
	return 1;
} 
//出栈 top向下移一格
elemtype  popstack(stack*s,elemtype*e){
	if(s->top==-1){
		printf("是空的");
		return 0;
	} 
	*e=s->data[s->top];
	s->top--;
	return 1;
}
//获取栈顶元素
elemtype  gettop(stack*s,elemtype*e){
	if(s->top==-1){
		printf("是空的");
		return 0;
	}  
	*e=s->data[s->top];
	return 1;
}

int main(){
	stack s;
	initstack(&s);
	pushstack(&s,8);
	pushstack(&s,88);
	pushstack(&s,888);
	elemtype  e;
	popstack(&s,&e);
	printf("%d\n",e);
	gettop(&s,&e);
	printf("%d\n",e); 
}










