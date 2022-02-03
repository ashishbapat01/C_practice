#include<stdio.h>
int add();

int main()
{
	int sum;
	sum=add();
	printf("Sum is %d",sum);
}

int add()
{
	int a,b,c;
	printf("Enter Any two Number:-\n");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	
	return c;
	
}