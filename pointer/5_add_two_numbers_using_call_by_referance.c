#include<stdio.h>
int ref(int *ptr,int *qtr)
{
   return (*ptr)+(*qtr);
}
int main()
{

     	int fn=0,sn=0,*p=&fn,*q=&sn,result=0;
     	
   printf("Input the first number : ");
   scanf("%d",p);
   printf("Input the second number : ");
   scanf("%d",q);
   
   result=ref(p,q);
   
	printf("The sum of %d and %d is  %d",*p,*q,result);
}
