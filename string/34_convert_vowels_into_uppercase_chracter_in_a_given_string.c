#include<stdio.h>
#include<string.h>

int main()
{
	char str[20],a=0;
	int i=0;
	
	printf("\nEnter the string here:-");
	gets(str);
	
	printf("\nAfter converting vowels into upper case character in a given string:- ");
	
	
	for(i=0;str[i]!=NULL;i++)
	{
	  	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	      {
	      	printf("%c",str[i]-32);
		  }
		  else
		  {
		  	printf("\%c",str[i]);
		  }
	}

   return 0;
}