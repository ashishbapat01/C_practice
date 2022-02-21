#include<stdio.h>


int main()
{
	char a;
	
	
	printf("Enter the  character  Digit:-");
	scanf("%c",&a);
	
	   if(a>='0' && a<='9'|| a>='A' && a<='F')
		{
			printf("\nThe Enter Character is Hexadecimal Digit");
		}
		else
		{
			printf("\nThe Enter Character is Not Hexadecimal Digit");
		}
		
	
	return 0;
}