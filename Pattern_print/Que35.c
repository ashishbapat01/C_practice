#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,num=5;
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num-i;j++)
		{
			printf(" ");
		}
	for(k=1;k<2*i;k++)
	  {
		printf("%d",i);
 	  }
 	  printf("\n");
	
	}
	return 0;
}