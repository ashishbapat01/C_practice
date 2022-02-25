#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2];
      
      printf("\nEnter the element first array:-");
      for(int i=0;i<2;i++)
         {
        	for(int j=0;j<2;j++)
         	{
         		printf("[%d %d]\t",i,j);
         		scanf("%d",&a[i][j]);
	        }
	          
	     }
	printf("\nEnter the element second array:-");
	for(int i=0;i<2;i++)
	     {
        	for(int j=0;j<2;j++)
	         {
	         	printf("[%d %d]\t",i,j);
	    	  scanf("%d",&b[i][j]);
	         }
	        
         }
	 printf("\nthe final result element  array:-\n");
	for(int i=0;i<2;i++)
	   {
	   	
	    for(int j=0;j<2;j++)
	       {
	   	      c[i][j]=a[i][j]+b[i][j];
	   
	   	    printf("%d\t",c[i][j]);
	    }
	   printf("\n");
     } 
	   return 0;
	
}