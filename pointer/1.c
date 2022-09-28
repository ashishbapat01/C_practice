#include<stdio.h>
void main()
{
	int number=50;    
	int *p;      
	p=&number;
	printf("Address of number variable is %x\n",p); 
     
	printf("Address of p variable is %x \n",&p); 
	printf("Value of p variable is %d \n",*p);
 
}    