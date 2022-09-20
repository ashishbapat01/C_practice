#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=arr,count=0,pcount=0;
	int *q=count;

	printf("Given Array :-\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	for(int i=1;i<10;i++)
	 {
         count=0;
	 	
	 	for(int j=2;j<(*p+i);j++ )
	 	{
	 		if((*p+i)%j==0)
	 		{
	 			printf(" \n%d \n",*(p+i));
	 			count++;
	 			break;
			 }
		 }
		   if(count==0)
		   {
		   	pcount++;
		   }
	 }
	 printf("\nCount of Prime Number in array :- %d ",pcount);
   
	return 0;
}