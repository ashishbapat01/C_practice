#include<stdio.h>
int main()
{
  int no=0,fact=1;
   int *p=&no;
   
   printf("Enetr any Number:- ");
   scanf("%d",p);
   
   for(int i=1;i<=*p;i++)
   {
   	fact=fact*i;
   }
   printf("factorial number is %d ",fact);
   
  return 0;
}
