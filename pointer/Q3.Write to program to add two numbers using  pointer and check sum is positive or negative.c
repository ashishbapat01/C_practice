#include<stdio.h>
int main()
{
	int n1=0,n2=0,i=0,sum=0;
	int *p=&n1;
	int *q=&n2;

	
	printf("\nEnter Any two Number :-");
	scanf("%d %d",&n1,&n2);
	
	sum=*p+*q;
	
	printf("sum is %d\n",sum);
	
	if(sum>0)
	{
		printf("Number is positive number");
	}
	else if (sum<0)
	{
		printf("number is Negative number");
	}
	
	return 0;
}