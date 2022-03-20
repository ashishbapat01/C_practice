#include<stdio.h>
int main()
{
	int num=5;
	
	for(int i=1;i<=5;i++)
	{   
	    num=1;
		for(int j=1;j<=5;j++)
		{
			if(i<=j)
			{
				printf("%d",num++);
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