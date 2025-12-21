#include<stdio.h>

typedef char vertype; 
typedef int  elemtype; 

#define maxsize  100

typedef struct graph{
	vertype ver[maxsize];
	elemtype arc[maxsize][maxsize];
	int ver_num;
	int arc_num;
}graph;

//已访问过 
int visited[maxsize];

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
			G->arc[i][j]=0;
		}
	}
	
// 构建无向边（双向赋值，确保对称性）
    // A-B, A-F
    G->arc[0][1] = 1; G->arc[1][0] = 1;
    G->arc[0][5] = 1; G->arc[5][0] = 1;
    
    // B-C, B-G, B-I
    G->arc[1][2] = 1; G->arc[2][1] = 1;
    G->arc[1][6] = 1; G->arc[6][1] = 1;  
    G->arc[1][8] = 1; G->arc[8][1] = 1;
    
    // C-D, C-I 
    G->arc[2][3] = 1; G->arc[3][2] = 1;
    G->arc[2][8] = 1; G->arc[8][2] = 1;
    
    // D-E, D-G, D-H, D-I
    G->arc[3][4] = 1; G->arc[4][3] = 1;
    G->arc[3][6] = 1; G->arc[6][3] = 1;
    G->arc[3][7] = 1; G->arc[7][3] = 1;
    G->arc[3][8] = 1; G->arc[8][3] = 1;
    
    // E-F, E-H
    G->arc[4][5] = 1; G->arc[5][4] = 1;
    G->arc[4][7] = 1; G->arc[7][4] = 1;
    
    // F-G
    G->arc[5][6] = 1; G->arc[6][5] = 1;
    
    // G-H
    G->arc[6][7] = 1; G->arc[7][6] = 1;
	
	for(int i=0;i<G->ver_num;i++){
		for(int j=0;j<G->ver_num;j++){
			G->arc[i][j]=G->arc[j][i];
		}
	}
}
void dfs(graph G ,int i){
	visited[i]=1;
	printf("%c\n",G.ver[i]);
	for(int j=0;j<G.ver_num;j++){
		if(G.arc[i][j]==1 && visited[j]==0){
			dfs(G,j);
		}
	}
}
	
int main (){
	graph G;
	create_graph(&G);
	for(int i=0;i<G.ver_num;i++){
		visited[i]=0;
	}
	dfs(G,0);
}




