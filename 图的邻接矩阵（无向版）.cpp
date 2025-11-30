#include<stdio.h>

typedef char vertaxType;  //顶点类型
typedef int  edgeType;    //边的类型
#define maxsize 100		  //最大顶点数 

//图的邻接矩阵结构体定义 
typedef struct mat_grph {
	vertaxType ver[maxsize];		 //顶点定义 
	edgeType   arc[maxsize][maxsize];//边的定义 
	int ver_num;		//顶点个数 
	int arc_num;		//边的个数 
}mat_grph;		//结构体命名

//初始化 
void init_grph(mat_grph* G){
	//顶点数和边数 
	G->ver_num=4;
	G->arc_num=5;
	//顶点的命名
	G->ver[0]='0';
	G->ver[1]='1';
	G->ver[2]='2';
	G->ver[3]='3';
	//全重置成0初始化 邻接矩阵 
	for(int i=0;i<G->ver_num;i++){
		for(int j=0;j<G->ver_num;j++){
			G->arc[i][j]=0;
		}
	} 
	//添加边（无向图，要对称赋值）
	G->arc[0][1]= 1; G->arc[1][0]= 1; //vo-v1
	G->arc[0][2]= 1; G->arc[2][0]= 1; //v0-v2
	G->arc[0][3]= 1; G->arc[3][0]= 1; //v0-v3
	G->arc[1][2]= 1; G->arc[2][1]= 1; //v1-v2
	G->arc[2][3]= 1; G->arc[3][2]= 1; //v2-v3
}

//输出邻接矩阵
void print_grph(mat_grph G){
	printf("邻接矩阵:\n");
	for(int i=0;i<G.ver_num;i++){
		for(int j=0;j<G.ver_num;j++){
			printf("%4d",G.arc[i][j]);
		}
		printf("\n");
	} 	 
} 
int main(){
	mat_grph G;		//创建 邻接矩阵结构体
	init_grph (&G); //初始化邻接矩阵结构体 
	print_grph(G);  //输出邻接矩阵
	 
} 

 
 
 
