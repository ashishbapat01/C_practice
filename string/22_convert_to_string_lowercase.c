#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	
	printf("\nEnter String Here:- ");
	gets(str);
	
	printf("\nSring is :- %s",str);

	printf("\nLower case string is :- %s",strlwr(str));
	
	return 0;
}