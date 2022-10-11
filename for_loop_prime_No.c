#include<stdio.h>
int main()
{
	int num=0,count=0;
	
	printf("Enter Any Number:-");
	scanf("%d",&num);
	
     for(int i=2;i<num;i++)
     {
     	if(num%i==0)
     	{
		 count++;
	    }
	 }
	if(count==0)
	{
		printf("\n Number is  prime.");
	}
	else
	{
		printf("\n Number is not prime.");
	}
		return 0;
}