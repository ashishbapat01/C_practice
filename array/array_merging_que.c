#include<stdio.h>
int main()
{
	int arr1 [5]={10,20,30,40,50};
	int arr2 [5]={11,22,33,44,55};
	int arr3 [10],j=0,i=0;
	
	
	for(i=0;i<5;i++)
	{
		arr3[i]=arr1[i];
    }
	
	for(j=0;j<5;j++)
	{
	    arr3[i]=arr2[j];
		i++;
    }
     printf("after merging\n");
    for(int k=0;k<10;k++)
    {
     printf("%d ",arr3[k]);	
	}
   
  	return 0;
}