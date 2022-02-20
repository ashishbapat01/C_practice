#include<stdio.h>
#include<string.h>
int main()
{
	char cstr[30];
	
	printf("Enter the string here:-");
	gets(cstr);
	
	for(int i=0;cstr[i]!=NULL;i++)
	{
		if(cstr[i]>='A' && cstr[i]<='Z')
		{
			printf("%c",cstr[i]+32);
		}
		else if(cstr[i]>='a' && cstr[i]<='z')
		{
			printf("%c",cstr[i]-32);
		}
		else if(cstr[i]==' ')
		{
			printf(" ");
		}
	
	}
	return 0;
}