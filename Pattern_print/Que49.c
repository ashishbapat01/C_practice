#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,num=5,n=9;
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=num*2-(2*i-1);k++)
		{
			printf("%d",n);
		}
		printf("\n");
		n=n-2;
		
     }
     
     return 0;
		
}