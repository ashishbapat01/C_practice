#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,num=5,n=5;
	
	for(int i=1;i<=num;i++)
	{   
	   
		for(int j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=num*2 -(2*i-1);k++)
		{
			printf("%d",n);
		}
		printf("\n");
		n--;
	}
	return 0;
}