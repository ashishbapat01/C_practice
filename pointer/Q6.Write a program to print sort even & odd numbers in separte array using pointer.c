#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int earr[10];
	int oarr[10];
	int *je=earr;
	int *ko=oarr;
	int *p=arr;
	int k = 0, j=0;
	
	printf("\nGiven Number:-");
	
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	for(int i=0;i<10;i++)
	{
		if((*p+i)%2==0)
		{
			*(je+j)=(*p+i);
			j++;
		}
		else
		{
			*(ko+k)=(*p+i);
			k++;
		}
	}
	
	printf("\nEven Number:-");
	for(int i=0;i<j;i++)
    	{
	     printf("%d ",earr[i]);	
    	}
    	
    printf("\nOdd Number:-");
	for(int i=0;i<k;i++)
	  {
	  	printf("%d ",oarr[i]);
	}	
	
	
	return 0;
}