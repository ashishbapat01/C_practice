#include<stdio.h>
int main()
{
	int i=10;
	char ch='A';
	
	for(int i=0;i<10;i++)
	{
		ch='A';
		for(int j=0;j<10;j++)
		
		{
			if(i<=j)
			{
				printf("%c",ch++);
			}
		
    	}
			printf("\n");
		
	}
	return 0;
}