#include<stdio.h>
int main()
{
	int arr1[2][2],arr2[2][2],arr3[2][2],i=0,j=0;
	
	  printf("\nEnter the first element in array:-\n");
	 for( i=0;i<2;i++)
	  {
	  	for( j=0;j<2;j++)
	   	{
	  	   printf("[%d %d]",i,j);
			 scanf("%d",&arr1[i][j]);	
		  }
	   }
	   
	   printf("\nEnter the Second element in array:-\n");
	  for( i=0;i<2;i++)
	   {
	   	for( j=0;j<2;j++)
	   	{
	   		printf("[%d %d]",i,j);
	   		scanf("%d",&arr2[i][j]);
		   }
		} 
		
       printf("\nFinal result  in array:-\n");
       
         for( i=0;i<2;i++)
	   {
	   	for( j=0;j<2;j++)
	   	{
	   		arr3[i][j]=arr1[i][j] * arr2[i][j];
	   		printf("[%d ]",arr3[i][j]);
	   		
		   }
		   printf("\n");
		} 
	return 0;
}