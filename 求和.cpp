#include <stdio.h>
   int  ADD (int x ,int y)
   
   {
   	int z=0;
   	z=x+y;
   	return  z;
   }
 int main()
 {
 int n1=0;
 
 int n2=0;
 //输入
 scanf("%d %d", &n1, &n2);
 //求和
 //int sum=n1+n2;
 int sum=ADD(n1, n2);
 //打印
  printf("%d\n",sum) ;
 
 return  0;
 
 }
 
