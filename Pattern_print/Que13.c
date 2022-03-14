#include<stdio.h>
int main()
{
	int num=10;
	char ch='A';
	
	for(int i=1;i<=num;i++)
	{
		ch='A';
		for(int j=1;j<=num;j++)
		{
			if(i>=j)
			{
				printf("%c",ch++);
			}
		}
		printf("\n");
		
		
	}
	return 0;
}