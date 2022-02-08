#include<stdio.h>
int main()
{
	int a=10,b=20,c=0;
	int *p=&a;
	int *q=&b;
	int *r=&c;
	
	*r=*p+*q;
	
	printf("%d",c);

	
	
	return 0;
}