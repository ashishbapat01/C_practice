#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],sm,cpy=0;
	int temp1=0,temp2=0;
	
	printf("Enter the string here :-");
	gets(str);
	
	for(int i=0;str[i]!=NULL;i++)
	{
		sm=str[i];
		temp1=0;
		for(int j=0;str[j]!=NULL;j++)
		{
			if(sm==str[j])
			{
				temp1++;
			}
		}
		if(temp1>temp2)
		{
			temp2=temp1;
			cpy=sm;
		}
	}
	printf("The Highest frequency of character %c\n ",cpy);
	printf("appers number of times: %d",temp2);
	
	return 0;
}