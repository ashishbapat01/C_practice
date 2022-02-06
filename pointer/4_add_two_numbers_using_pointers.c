#include<stdio.h>
int main()
{
	int fn=5,sn=6,*p=&fn,*q=&sn;
	
	printf("The sum of the entered numbers is : %d",*p+*q);
	
	return 0;
}