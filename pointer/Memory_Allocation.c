#include<stdio.h>
int main()
{
	int size=0,evcount=0,oddcount=0;
	int *p;
	
	printf("Enetr the Size of array:- ");
	scanf("%d",&size);
	
	p=(int*)malloc(size*sizeof(int));

	
	if(p==NULL)
	{
		printf("\n Memory Not Alloacated");
	}
	else
	{
		printf("\n Memory allocated successfully");
		printf("\n Enter Array Element :- ");
		
		for(int i=0;i<size;i++)
		{
			scanf("%d",p+i);
		}
		
		for(int j=0;j<size;j++)
		{
			if(*(p+j)%2==0)
			{
				evcount++;
			}
			else
			{
				oddcount++;
			}
		}
		
		printf("\n Even Element are:- %d",evcount);
		printf("\n Odd element are :- %d",oddcount);
		
		free(p);
		
	}
	
	return 0;
}