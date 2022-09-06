#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	int **ptr=&p;
	// for printing the value 10.
	printf("%d",a);
	printf("%d",*p);
	printf("%d",**ptr);
	printf("%d",*(&a));
	printf("%d",**&p);
	printf("%d",***&ptr);
	
	printf("for printing address of variable a ");
	printf("%d",&a);
	printf("%d",***p);
	printf("%d",p);
	printf("%d",***&ptr);
	printf("%d",*ptr);
	return 0;
}