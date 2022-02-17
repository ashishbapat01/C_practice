#include<stdio.h>

int main()
{
	char str1[100],str2[100];
	int length=0,length1=0,num=0;
	
	printf("Enter the first String here: ");
	gets(str1);
	
	printf("Enter the second String here: ");
	gets(str2);
	
	
	for(int i=0;str1[i]!=NULL;i++)
	{
	  length++;
	}
	for(int i=0;str1[i]!=NULL;i++)
	{
	  length1++;
	}
	
	for(int i=0;str1[i]!=NULL,str2[i]!=NULL;i++)
	{
		if(str1[i]==str2[i] && length==length1)
		{
			num=0;
		}
		else
		{
			num=1;
			break;
		}
	}
	 if(num==0)
	 {
	 	printf("\nString Are Equal");
	 }
	 else if (num==1)
	 {
	 	printf("\nstring Are Not Equal");
	 }
	return 0;
	
}