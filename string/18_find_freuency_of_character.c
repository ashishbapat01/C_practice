#include<stdio.h>
#include<string.h>
int main()
{
	char cstr[50],csample;
	int ccount=0;
	
	printf("Enter String here:-");
	gets(cstr);
	printf("\nInput the character to find frequency:-");
	scanf("%c",&csample);
	
	for(int i=0;cstr[i]!=NULL;i++)
	{
		if(cstr[i]==csample)
		{
			ccount++;
		}
	}
	printf("The frequency of character is %c and count is %d ",csample,ccount);
	return 0;
}