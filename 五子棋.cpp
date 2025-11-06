#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define LIN 3

//玩家胜利 *
//电脑胜利 #
//平局 Q  //满了返回1，没满返回0 
//继续 c 
char full(char board[ROW][LIN],int row, int lin)
{
	int i=0;
	int j=0;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<LIN;j++)
		{
			if(board[i][j]==' ')
			return 0;
		}
	}
	return 1;
}

char win(char board[ROW][LIN],int row, int lin)
{	//行 
	int i=0;
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		return  board[i][1];
	}
	//列 
	int j=0;
	for(j=0;j<lin;j++)
	{
		if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]&&board[1][j]!=' ')
		return  board[j][1];
	}
	//对角线
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ') 
	return board[1][1];
	
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!=' ') 
	return board[1][1];
	//满了
	if(full(board,ROW,LIN))
	{
		return 'Q';
	 } 
	 return 'C';
}
 



void computermove(char board[ROW][LIN],int row, int lin)
{
	printf("电脑下\n");
	
	int  x,y;
while(1)
{
		x= rand()%3;
	y= rand()%3; 
	if(board[x][y]==' ')
	{
		board[x][y]='#';
		break;
	}
}
}



void playermove(char board[ROW][LIN],int row, int lin)
{
	int x,y;

	while(1)
	{
		printf("请下棋：");
		scanf("%d%d",&x,&y) ;
		if(x>=1&&x<=ROW&&y>=1&&y<=LIN)//范围合法 
		{
			if(board[x-1][y-1]==' ')//没有被下过 
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
			printf("坐标非法，请重新输入："); 
			}
		}
		else
		{
		printf("坐标非法，请重新输入："); 
		}
	}
}



void qipan(char board[ROW][LIN],int row, int lin)
{
	int i,j;
	//打印数据 
	for(i=0;i<row;i++)
	{
		for(j=0;j<lin;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<lin-1)
			printf("|");
		}
		printf("\n");
		if(i<row-1)
		{
		for(j=0;j<lin;j++)
		{
			printf("---");
			if(j<lin-1)
			printf("|");
		}
		printf("\n");
		} 
	}
	//打印分割行 

}




void intboard(char board[ROW][LIN],int row,int lin)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<lin;j++)
		{
			board[i][j]=' ';
		}
	}
}




void game()
{
	char b;
	 char board[ROW][LIN]={0};
	//初始化 
	intboard(board,ROW,LIN);
	//打印棋盘qipan(board,ROW,LIN); 
while(1)
{
	//玩家下其
		playermove(board,ROW,LIN) ;
		qipan(board,ROW,LIN); 
		//判断输赢
		  b=win(board,ROW,LIN); 
		 if(b!='C')
		 {
		 	break;
		 }
		 
	//电脑下棋
		computermove(board,ROW,LIN);
		qipan(board,ROW,LIN); 
			 char b=win(board,ROW,LIN);  
			 if(b!='C')
		 {
		 	break;
		 }
}
	if(b=='*')
	printf("玩家胜利\n");
	else if(b=='#')
	printf("菜成啥了\n");
	else if(b=='Q')
	printf("平局\n");

	
	qipan(board,ROW,LIN); 
	
}




void mun()//菜单 
{
	printf	("*****************************\n");
	printf  ("****1.开始游戏，0退出********\n");
	printf  ("*****************************\n"); 
}

int main()
{
	srand((unsigned int)time(NULL));//生成随机数的起点 
	int a=0;

do
{
	mun();
		scanf("%d",&a);
	
		switch (a)
	{
		case 1:
		game();
			 
		break;	
		case 0:
			printf("游戏结束\n");
			break;
		default:
		printf("输入错误\n");
		
			 
	}
} while(a);
}
