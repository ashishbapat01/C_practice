#include<stdio.h>
int main()
{
	int i=0,j=0;
	
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
			
		}
		for(int k=0;k<=4;k++)
		{
			printf("*");
		}
		printf("\n");
		}
		return 0;
}