#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,num=5;
	char ch='A';
	
	for(i=1;i<=num;i++)
	{
	
		for(j=1;j<=num-i;j++)
		{
			printf(" ");
		}
	for(k=1;k<2*i;k++)
	  {
		printf("%c",ch);
 	  }
 	  printf("\n");
	 ch=ch+2;
	}
	return 0;
}