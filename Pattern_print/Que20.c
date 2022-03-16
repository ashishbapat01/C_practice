#include<stdio.h>
int main()
{
	int i=0,num=10;

	
	for(int i=0;i<10;i++)
	{
	   num=10;
		for(int j=i;j<10;j++)
		
		{
			if(i<=j)
			{
				printf("%d",num --);
			}
		
    	}
			printf("\n");
		 
	}
	return 0;
}