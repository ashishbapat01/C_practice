#include<stdio.h>

int main()
{
	char str[100];
	
	printf("Enter the String here: ");
	scanf("%[^\n]c",&str);
	
	for(int i=0;str[i]!=NULL;i++)
	{
		printf("%c ",str[i]);
	}
	
	return 0;
	
}