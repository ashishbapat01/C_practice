#include<stdio.h>
int main()
{
	int a=56;
	float b=4.5;
	char c='k';
	void* ptr;
	
	ptr=&a;
	printf("\nprint value of 'a' is :- %d ",*((int*)ptr));
	
	ptr=&b;
		printf("\nprint value of 'b' is :- %f ",*((float*)ptr));
		
	ptr=&c;
		printf("\nprint value of 'c' is :- %c ",*((char*)ptr));
		
	return 0;
	   
}