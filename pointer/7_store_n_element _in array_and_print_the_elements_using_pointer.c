#include<stdio.h>
int main()
{
	int arr[5]={5,7,2,9,8};
	int i=0;
	int *a=&arr;
	printf("Input 5 Number in array:-\n");

	for(i=0;i<(*a);i++)
	{
		printf("element - %d: %d\n",i,a[i]);
		
	}
	return 0;
}