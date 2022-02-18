#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30],str2[30];
	int len=0;
	printf("\nEnter the string here:-");
	gets(str1);
	
	len=strlen(str1);
	
	for(int i=0;str1[i]!=NULL;i++)
	{
		 str2[i]=str1[i];
	}
	
	printf("\ncopied string here:-");
	
	puts(str2);
	
	printf("\nNumber of character copied:- %d\n\n",len);
	
	return 0;
}