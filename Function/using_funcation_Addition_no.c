#include<stdio.h>
int main()
{
	add();
}
void add()
{
	int a,b,c;
	printf("Enter Two no.");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	
	printf("%d",c);
	return 0;
}