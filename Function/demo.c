#include<stdio.h>
#include<stdbool.h>


bool CheackEven(int iNo)
{ 
   if((iNo%2)==0)
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{

   int ivalue=0;
   bool bRet=false;
   
   printf("Enter Any Number:- ");
   scanf("%d",&ivalue);

  bRet= CheackEven(ivalue);
  
  if(bRet==true)
  {
   printf("Number is even \n");
  }
  else
  {
   printf("Number is not even \n");
  }
return 0;
} 
