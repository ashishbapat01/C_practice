#include<stdio.h>
int main()
{
	int n1=0,n2=0,max=0;
	int *p=&n1;
	int *q=&n2;
	
	printf("\n Enter Any Two Number:-");
	scanf("%d %d",&n1,&n2);
	
   if(*p>*q)
   {
   	//max=*p;
   	printf("Maximum number is %d",*p);
   }
   else
   {
  // max=*q;
     printf("Maximum number is %d",*q);
   }
   
  
	
	return 0;
}