#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i;
	printf("Enter The string Here:-");
	gets(str);

	printf("Strings or words after Slipt by space are :-\n");
  for(i=0;str[i]!=NULL;i++)
  {
	  if(str[i]==' ')
	{
		printf("\n");
	}
	else
	{
	  printf("%c",str[i]);
	}	
	
  }
	

	return 0;
}