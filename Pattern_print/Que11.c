#include<stdio.h>
int main()
{
	int num=10,x=1;
	
	for(int i=0;i<num;i++)
	{
		x=1;
		for(int j=0;j<num;j++)
		{
			if(i>=j)
			{
				printf("%d",x++);
			}
		}
		printf("\n");
		
	}
	return 0;
}