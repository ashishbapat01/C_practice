#include<stdio.h>
#include<string.h>
int main()
{
	char str[60],ch;
	int i;


	printf("Enter the string here:-");
	gets(str);
	
	printf("input Replace character:-");
    scanf("%c",&ch);
 
   printf("After replacing the space with %c the new string is:-",ch);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]==' ')
		{
			printf("%c",ch);
		}
		else
		{
			printf("%c",str[i]);
		}
		
	}
	
	return 0;
	
}