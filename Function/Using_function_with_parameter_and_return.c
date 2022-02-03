#include<stdio.h>
int sub(int a,int b);

int main()
{
	int a=0,b=0;
	printf("Enter two Number :-\n");
	scanf("%d%d",&a,&b);
	
	printf(" substraction %d",sub(a,b));
	
	return 0;
}
int sub (int x,int y)
{
	int result=0;
	result=x-y;
	
	return result;
	
}