#include<stdio.h>
int main()
{
	int a=1;
	char *p=(char*)&a;
	if(*p==1)
	printf("Ð¡¶Ë");
	else
	printf("´ó¶Ë");
}
