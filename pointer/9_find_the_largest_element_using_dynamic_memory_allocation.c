#include<stdio.h>
int main()
{
	int arr[5]={5,7,2,9,8};
	int i;
	int *a=&arr;
	
	for(i=0;i<=4;i++)
	{
		printf("element - %d: %d\n",i+1,a[i]);
		
	}
	return 0;
}
