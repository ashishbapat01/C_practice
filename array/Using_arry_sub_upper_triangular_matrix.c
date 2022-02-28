#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],arr3[3][3],i=0,j=0;
	
	printf("\nEnter The First element in array:-\n");
	for(i=0;i<3;i++)
	 {
	   for(j=0;j<3;j++)
	   {
	   	printf("[%d %d]",i,j);
	 	scanf("%d",&arr1[i][j]);
	   }
	 }
	
	printf("\nEnter The second element in array:-\n");
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	   	printf("[%d %d]",i,j);
	 	scanf("%d",&arr2[i][j]);
	   }
	 }
	
	printf("\nThe Final result is :-\n");
	for(i=0;i<3;i++)
    {
	   for(j=0;j<3;j++)
	   {
	   	arr3[i][j]=arr1[i][j] - arr2[i][j];
	 	printf("%d \t",arr3[i][j]);
	   }
	   printf("\n");
	}
	return 0;
}