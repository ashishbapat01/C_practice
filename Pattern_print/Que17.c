#include<stdio.h>
int main()
{
	int i=10;
	char ch='A';
	
	for (int i=1;i<=10;i++)
	{
	
		for(int j=1;j<=10;j++)
		{
			if(i<=j)
			{
				printf("%c",ch);
			}
		}
		printf("\n");
		ch++;
	}
	return 0;
}