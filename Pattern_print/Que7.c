#include<stdio.h>
int main()
{
	int row=10;
	char alpha='J';
	
	for( int i=1;i<=row;i++)
	{
		
	 for(int j=1;j<=row;j++)	
		{
			printf("%c",alpha);
		}
		printf("\n");
	alpha--;
	}
	return 0;
}