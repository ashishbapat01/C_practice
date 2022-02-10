#include<stdio.h>
int main()
{
/*	int arr[5]={1,2,3,4,5},sum=0;
	int *p=arr;
	
   for(int i=0;i<5;i++)
   {
   	sum = sum+*(p+i);
   }
	
	printf("%d",sum);

	*/
	
	
	int arr[5]={1,2,3,4,5},sum=0,i=0;
	int *p=arr;
	
    printf("\nEnter the element in array:-");
    
    for(i=0;i<5;i++)
    {
    	scanf("%d",&(*(p+i)));
    	sum = sum+ *(p+i);
   	}
   	printf("\nsum is %d",sum);
	return 0;
}