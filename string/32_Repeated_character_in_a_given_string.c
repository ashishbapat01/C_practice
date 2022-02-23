#include<stdio.h>
#include<string.h>
int main()
{
	char cstr[40];
	int cnt=0;
	
	printf("Enter The String Here:-");
	gets(cstr);
	
	
	printf("The first repetitive character is:-");
	
	for(int i=0;cstr[i]!=NULL;i++)
	{
		for(int j=0;cstr[j]!=NULL;j++)
		{
			if(cstr[i]==cstr[j] && i!=j)
			{
				cnt++;
				printf("%c",cstr[i]);
			}
		
		}
		if(cnt==1)
		{
			break;
		}
	}
	return 0;
}