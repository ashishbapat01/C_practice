#include<stdio.h>


int main()
{
	char Upper=0;
	
   printf("Enter Any Character:-");
   scanf("%c",&Upper);
   
   if(Upper>='A' && Upper<='Z')
   {
   	printf("The enter character is Uppercase letter");
   }
   else
   {
   	printf("The enter character is not Uppercase letter");
   }
	return 0;
	
}