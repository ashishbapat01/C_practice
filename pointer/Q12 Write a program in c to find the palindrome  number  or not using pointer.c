#include<stdio.h>
int main()
{
	int num=0,rem,rev=0,temp=0;
	int *p=&num;
	int *q=&rem;
	
	printf("Enter Any Number:-");
	scanf("%d",p);
	
	temp = (*p);
	
	while(*p!=0)
	
	{
		*q=(*p)%10;
		rev=rev*10+(*q);
		(*p)=(*p)/10;
	}
	printf("Reverse is %d",rev);
	
	if(rev==temp)
		
		{
			printf("\n Number is Palindrome.");
		}
	else
	{
		printf("\n Number is not palindrome.");
	}	
	
		return 0;
}