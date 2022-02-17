#include<stdio.h>

int main()
{
	char str[100];
	int count=0;
	
	printf("Enter the string here :");
	scanf("%[^\n]c",str);
	
	//length of string
	for(int i=0;str[i]!=NULL;i++)
	{
		count++;
		//printf("%c",str[i]);
	}
	
	for(int j=count;j>=0;j--)
	{
		printf("%c ",str[j]);
	}
	//printf("n%d count",count)
	//string in revers order
	
	return 0;
	
}