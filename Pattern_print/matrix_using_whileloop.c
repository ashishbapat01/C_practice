#include<stdio.h>
int main()
{ 
   int i=1,j,num=3;
   
  while(i<=num)
  {
  	j=1;
  	while(j<=num)
  	{
  	printf("%d%d ",i,j);
	 j++; 	
    }
	  printf("\n");
	  i++;
  }
  
   return 0;	
}