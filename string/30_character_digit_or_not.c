#include<stdio.h>


int main()
{
	char a;
	
	
	printf("Enter the character  Digit:-");
	scanf("%c",&a);
	
	   if(a>='0' && a<='9')
		{
			printf("\nThe Enter Character is Digit");
		}
		else
		{
			printf("\nThe Enter Character is Not Digit");
		}
		
	
	return 0;
}