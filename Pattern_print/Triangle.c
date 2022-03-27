#include<stdio.h>
int main()
{
	int num=4;
	
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=num-i;j++)
		{
			printf("  ");
		}
		for(int k=1;k<2*i;k++)
		{
		if(k%2==0)
		{
			printf(" * ");
		}
		else
		{
			printf("%d",i);
		}
    	}
    		printf("\n");
	}
	return 0;
}