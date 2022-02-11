#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5}, i=0,j=0;
	int *p = arr;
	

	for(i=0;i<5;i++)
	{
	
	printf("\nelement in array:-",i);
	printf("%d",*p+i);
   }
 printf("\n");
	
	printf("The reverse order array element:-");
	for( j=4;j>=0;j--) 
	{
		printf("  %d ",*p+j);
		
	}

   return 0;
}