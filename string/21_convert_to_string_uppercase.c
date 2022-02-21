#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	
	printf("\nEnter The String here:-");
	gets(str);
	
	printf("\nString is :- %s ",str);
	printf("\nUpper case string is:-%s",strupr(str));
	return 0;
}