#include<stdio.h>
#include<string.h>
int main()
{
	char cstr1[50];
	char cstr2[50];
	
	printf("Input the first string:-");
	gets(cstr1);
	
	printf("Input the second string:-");
	gets(cstr2);
	
	printf("After concatenatation the string is:- %s %s",cstr1,cstr2);
	
	return 0;
}