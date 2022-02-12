# include<stdio.h>
void swap(int *n1,int *n2)
{
	int temp=0;
	 temp=*n1;
	 *n1=*n2;
     *n2=temp;
	
	printf("\n The value of after swapping:-%d %d",*n1,*n2);
}
int main()
{
	int n1=0,n2=0;
	
	printf("\nEnter Any Two Number:-");
	scanf("%d %d",&n1,&n2);
	
	printf("The value of before Swapping:- %d %d ",n1,n2);
	
	swap(&n1,&n2);
	
}