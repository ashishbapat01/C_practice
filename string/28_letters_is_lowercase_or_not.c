#include<stdio.h>


int main()
{
	char low=0;
	
   printf("Enter Any Character:-");
   scanf("%c",&low);
   
   if(low>='a' && low<='z')
   {
   	printf("The enter character is lowercase letter");
   }
   else
   {
   	printf("The enter character is not lowercase letter");
   }
	return 0;
}