#include<stdio.h>
int main()
{
	int m=300,*p=&m;
	double fx=300.600006,*q=&fx;
	char cht ='z',*ch=&cht;
	
	printf("Using & Operator :\n");
	printf("--------------------------------\n");
	printf("address of m = %x\n",&m);
    printf("address of fx = %x\n",&fx);
   	printf("address of cht = %x\n\n",&cht);
   	
   	printf("Using & and * Operator :\n");
	printf("--------------------------------\n");
	printf("Value at address m = %d\n",*p);
	printf("Value at address fx = %f\n",*q);
	printf("Value at address cht = %c\n\n",*ch);
	
	printf("Using only pointer variable :\n");
	printf("--------------------------------\n");
	printf(" address of  m = %x\n",*p);
	printf(" address of fx = %x\n",*q);
	printf(" addressof  cht = %x\n\n",*ch);
	
	printf("Using Only  Pointer  Operator :\n");
	printf("--------------------------------\n");
	printf("Value at address m = %d\n",*p);
	printf("Value at address fx = %f\n",*q);
	printf("Value at address cht = %c\n\n",*ch);
   	
   	
}