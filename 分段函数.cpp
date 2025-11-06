#include <stdio.h>
int main ()
{
	int x=0;
	int y=0;
	//shu ru 
	scanf("%d", &x);
	//¼ÆËã
	if(x<0)
	y=1;
	else if(x==0) 
	y=0;
	else if(x>0)
	y=-1;
	//Êä³ö
	printf("%d\n",y); 
	return 0;
}
