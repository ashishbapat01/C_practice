#include<stdio.h>

int main()
{
	char str[50];
	int len=0;
	int i=0,j=0;
	
	printf("Enter The String here :");
	scanf("%[^\n]c",str);
	
	
	while(str[i]!=NULL)
	{
		len++;
		i++;
	}
	printf("\nLength is %d",len);
	return 0;
}