#include<stdio.h>
int main()
{
	int num=5,i=0,j=0,k=0;
	
	for(int i=1;i<=num;i++)
	{
	   num=5;
		for(int j=1;j<i;j++)
		{
			printf(" ");
		}
		  for(int k=1;k<=(num*2-(2*i-1));k++)
		  {
		  	printf("*");
		  }
		 printf("\n");
	     
	}
	return 0;
}