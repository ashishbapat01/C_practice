#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	printf("address before increment %d",p);
	p+=5;
	
	printf("\n Address after increment %d",p);
	
	return 0;
}