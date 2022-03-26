#include<stdio.h>

int main()
{
	int num=4,n=1;
	
	for(int i=1;i<=num;i++)
	{
		n=1;
		for(int j=1;j<i;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=(num * 2 - (2*i-1));k++)
		{
			printf("%d",n++);
		}
		printf("\n");
	}
	
	return 0;
}