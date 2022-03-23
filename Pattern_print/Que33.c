#include<stdio.h>
int main()
{
	int num=5;
	char ch='A';
	
	for(int i=1;i<=5;i++)
	{
		ch='A';
		for(int j=1;j<=5;j++)
		{
			if(i<=j)
	    	{
			printf("%c",ch++);
	     	}
	     	else
	     	{
	     		printf(" ");
			 }
		}
		printf("\n");
	}
	return 0;
}