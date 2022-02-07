#include<stdio.h>
int max(int value1,int value2);
int main()
{
	int no1=0,no2=0,*p=&no1,*q=&no2,result;
	
	printf("Input first number : ");
	scanf("%d",p);
	printf("Input second number: ");
	scanf("%d",q);
	
	result=max(p,q);
	printf("%d is the maximum number",result);
	return 0;
}
int max(int value1,int value2)
{
	int *a=value1,*b=value2;
	
	if(*a>*b)
	{
		return *a;
	}
	else
	{
		return *b;
	}
}

