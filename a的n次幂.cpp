#include<stdio.h>
#include<math.h>
int main(){
	int a=2;
	int b=1;
	b=a;
	int n=0;
	int c=1;
	scanf("%d,%d",&a,&n);
	while((c<<1)<n){
		if(n==0){
			printf("1");
			break;
		}
		b*=b;
		c=c<<1;
	}
	b=b*pow(a,n-c);
	printf("%d",b);
	
} 
