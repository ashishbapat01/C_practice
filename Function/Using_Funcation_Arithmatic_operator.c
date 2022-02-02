#include<stdio.h>
int main()
{
	add();
	
	sub();
	
	mult();
	
	div();
}
void add()
{
	int a,b,c;
	printf("Enter Two no.\n");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	
	printf("Addition is %d \n",c);
	
}

void sub()

{
	int a,b,c;
	printf("Enter Two no.\n");
	scanf("%d%d",&a,&b);
	
	c=a-b;
	
	printf("Substraction is %d \n",c);	
}
void mult()
{
	int a,b,c;
	printf("Enter Two no.\n");
	scanf("%d%d",&a,&b);
	
	c=a*b;
	
	printf("Multiplication is %d\n ",c);
}
void div()
{
	int a,b,c;
	printf("Enter Two no.\n");
	scanf("%d%d",&a,&b);
	
	c=a/b;
	
	printf("Division is %d\n ",c);
	
}