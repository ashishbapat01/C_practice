#include<stdio.h>

int main()
{
	int count=0,pcnt=0;
	
	int arr[10] = {4,3,5,6,10,9,13,15,18,19};
	
	printf("\nElements in array are: ");
	
	for(int k=0;k<10;k++)
	{
		printf("%d ",arr[k]);
	}
	
	printf("\n\nprime numbers are: ");
	
	for(int i=0;i<10;i++)
	{
		count=0;
		for(int j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				count++;
				break;
			}
    	}
		
		if(count==0)
		{
			printf(" %d ",arr[i]);
			pcnt++;
		}
	}
	
	printf("\n\nCount of prime number: %d",pcnt);
	
	return 0;
}          