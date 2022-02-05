#include<stdio.h>
int sub(int a,int b);

int main()
{
	int x=0,y=0;
	printf("Enter two Number :-\n");
	scanf("%d%d",&x,&y);
	
	sub(x,y);
	
	return 0;
}
int sub (int a,int b)
{
	int result=0;
	result=a-b;
	
	printf("substrsction is %d .",result);
	
}