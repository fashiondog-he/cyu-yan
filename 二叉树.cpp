#include <stdio.h>
#include <stdlib.h> 
typedef char elemtype;
//定义二叉树 
typedef struct Treenode{
	elemtype data;
	Treenode* lchild;
	Treenode* rchild;
}Treenode;
typedef Treenode* Bitree;

char str[]="ABDH#K###E##CFI###G#J##";
int idx=0;
//造树 
void creat_tree(Bitree*T){//二级指针 
	elemtype ch;
	ch=str[idx++];
	if(ch=='#')
	*T=NULL;		//解引用指针 
    else{
	*T=(Bitree)malloc(sizeof(Treenode));
	(*T)->data=ch;
	creat_tree(&(*T)->lchild);
	creat_tree(&(*T)->rchild);
	}
}
//前序遍历
void preorder(Bitree T){
	if(T==NULL){
		return ;
	}
	printf("%5c",T->data);
	preorder(T->lchild);
	preorder(T->rchild);
} 

//中序遍历
 void inorder(Bitree T){
	if(T==NULL){
		return ;
	}
	inorder(T->lchild);
	printf("%5c",T->data);
	inorder(T->rchild);
} 
//后序遍历
void postorder(Bitree T){
	if(T==NULL){
		return ;
	}
	postorder(T->lchild);
	postorder(T->rchild);
	printf("%5c",T->data);
} 

int main(){
	Bitree T;
	creat_tree(&T);
	
	preorder(T);//前 
	printf("\n");
	
	inorder(T);//中 
	printf("\n"); 
	
	postorder(T);//后 
	printf("\n");
}







