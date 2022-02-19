#include<stdio.h>
#include<string.h>
int main()
{
   char cstr[50];
   int poExt=0, sublen=0,i=0,tot=0;
   
   printf("Enter the string here:-");
   gets(cstr);
   
   printf("Input the position of start extraction:-");
   scanf("%d",&poExt);
   
   printf("Input the length of substring:-");
   scanf("%d",&sublen);
   
   poExt=(poExt-1);
   
   tot= poExt+(sublen-1);
   
   for(i=poExt;i<= tot;i++)
   {
   	
   	printf("%c",cstr[i]);
  }  
  return 0; 	
}
