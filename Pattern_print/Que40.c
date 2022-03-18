#include<stdio.h>
int main()
{
	int num=5;
	char ch='A';
	
	for(int i=1;i<=num;i++)
	{
	 ch='A';
	 for(int j=1;j<=num-i;j++)
	 {
	 	printf(" ");
	 }
	 for(int k=1;k<2*i;k++)	
	 {
	 	printf("%c",ch++);
	 }
	 printf("\n");
	 
	}
	return 0;
}