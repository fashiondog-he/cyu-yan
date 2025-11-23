#include<stdio.h>
#include <stdlib.h>
typedef int elemtype;  

// 定义链栈的节点结构  和单链表类似 
typedef struct StackNode {
    elemtype data;          
    struct StackNode *next;
} StackNode;

// 定义链栈结构（用表头指针标记栈顶）
typedef struct {
    StackNode *top;  // 栈顶指针，指向链表的表头节点
    int size;        // 栈的当前元素个数(方便统计长度)
} LinkStack; 
// 链栈初始化
void InitLinkStack(LinkStack *L) {
    L->top = NULL;  // 栈顶指针置空，无节点
    L->size = 0;    // 元素个数初始为0
}
// 链栈入栈
int Push(LinkStack *L, elemtype e) {
    // 1. 创建新节点，分配内存
    StackNode *newNode = (StackNode *)malloc(sizeof(StackNode));
    
    // 2. 新节点存储数据，next指针指向旧栈顶
    newNode->data = e;
    newNode->next = L->top;  // 新节点连在旧栈顶前面

    // 3. 更新栈顶指针，新节点成为新栈顶
    L->top = newNode;
    L->size++;  // 元素个数+1
    return 1;
}
// 链栈出栈
int Pop(LinkStack *L, elemtype *e) {
    // 先判断栈是否为空
    if (L->top == NULL) {
        printf("栈为空\n");
        return 0;
    }

    // 1. 保存栈顶节点和数据
    StackNode *temp = L->top;  // temp指向当前栈顶节点
    *e = temp->data;           // 取出栈顶元素存入e

    // 2. 更新栈顶指针，指向原栈顶的next节点
    L->top = L->top->next;

    // 3. 释放旧栈顶节点的内存
    free(temp);
    L->size--;  // 元素个数-1
    return 1;
}
// 获取栈顶元素
int GetTop(LinkStack *L, elemtype *e) {
    if (L->top == NULL) {
        printf("栈为空\n");
        return 0;
    }
    *e = L->top->data;  // 直接取栈顶节点的数据
    return 1;
}

int main() {
    LinkStack L;
    InitLinkStack(&L);  // 初始化

    // 入栈
    Push(&L, 10);
    Push(&L, 20);
    Push(&L, 30);
    printf("入栈后栈的大小：%d\n", L.size);  

    // 出栈
    elemtype e;
    Pop(&L, &e);
    printf("出栈元素：%d\n", e);  
    printf("出栈后栈的大小：%d\n", L.size);  

    // 取栈顶元素
    GetTop(&L, &e);
    printf("当前栈顶元素：%d\n", e);  

}
