#include<stdio.h>

typedef char vertype; 
typedef int  elemtype; 

#define maxsize  100
#define Max  0x7fffffff 


typedef struct graph{
	vertype ver[maxsize];
	elemtype arc[maxsize][maxsize];
	int ver_num;
	int arc_num;
}graph;


void create_graph(graph* G){
	G->ver_num=9;
	G->arc_num=15;
	G->ver[0]='A';
	G->ver[1]='B';
	G->ver[2]='C';
	G->ver[3]='D';
	G->ver[4]='E';
	G->ver[5]='F';
	G->ver[6]='G';
	G->ver[7]='H';
	G->ver[8]='I';
	for(int i=0;i<G->ver_num;i++){
		for(int j=0;j<G->ver_num;j++){
			if(i==j){
				G->arc[i][j]=0;
			}
			else{
				G->arc[i][j]=Max;
			}
		}
	}
	
// 构建无向边（双向赋值，确保对称性）
    // A-B, A-F
    G->arc[0][1] = 10; G->arc[1][0] = 10;
    G->arc[0][5] = 11; G->arc[5][0] = 11;
    
    // B-C, B-G, B-I
    G->arc[1][2] = 18; G->arc[2][1] = 18;
    G->arc[1][6] = 16; G->arc[6][1] = 16;  
    G->arc[1][8] = 12; G->arc[8][1] = 12;
    
    // C-D, C-I 
    G->arc[2][3] = 22; G->arc[3][2] =22;
    G->arc[2][8] = 8; G->arc[8][2] = 8;
    
    // D-E, D-G, D-H, D-I
    G->arc[3][4] = 20; G->arc[4][3] = 20;
    G->arc[3][6] = 24; G->arc[6][3] = 24;
    G->arc[3][7] = 16; G->arc[7][3] = 16;
    G->arc[3][8] = 21; G->arc[8][3] = 21;
    
    // E-F, E-H
    G->arc[4][5] = 26; G->arc[5][4] = 26;
    G->arc[4][7] = 7; G->arc[7][4] = 7;
    
    // F-G
    G->arc[5][6] = 17; G->arc[6][5] = 17;
    
    // G-H
    G->arc[6][7] = 19; G->arc[7][6] = 19;
}
void prim(graph* G){
	int i ,j,k;
	int min;
	int weight[maxsize];//候选边 放置备选的权值 
	int ver_index[maxsize];
	//值表示出发点，下标表示到达点 
	
	//先从A点开始
	weight [0]=0;//ver_index某点与下标的权重
	ver_index[0]=0;
	
	for(i=1;i<G->ver_num;i++){
		weight [i]=G->arc[0][i];
		ver_index[i]=0;
	} 
	
	for(i=1;i<G->ver_num;i++){
		min=Max;
		j=0;
		k=0;
		//找到最小的与之衔接 
		while(j<G->ver_num){
			if(weight[j]!=0&&weight[j]<min){
				min=weight[j];
				k=j;
			}
			j++;
		}
		printf("(%c,%c)权值是：%d\n",G->ver[ver_index[k]],G->ver[k],min);
			//起始点G->ver[] ,ver-index的值 	下标表示到达点
		weight[k]=0;//表示已经找过了
		
		//找新节点可连接的待选路径
		for(j=0;j<G->ver_num;j++){
			if(weight[j]!=0&&G->arc[k][j]<weight[j]){
				weight[j]=G->arc[k][j]; 
				ver_index[j]=k;
			}
		}
		
	}
}

int main(){
	graph G;
	create_graph(&G);
	prim(&G);
} 









