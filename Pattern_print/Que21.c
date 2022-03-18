#include<stdio.h>
int main()
{
	int i=10;
    char ch='J';
	
	for(int i=0;i<10;i++)
	{
	     
		for(int j=0;j<10;j++)
		
		{
			if(i<=j)
			{
				printf("%c",ch);
			}
		
    	}
			printf("\n");
		   ch--;
	}
	return 0;
}