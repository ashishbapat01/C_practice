#include<stdio.h>
void demo (int*p)
{
	*p+=20;
	printf("%d",*p);//30
}
void main()
{
	int a;
	printf("Enter Any Number");
	scanf("%d",&a);
	demo(&a);
	
	printf("a=%d",a);
}