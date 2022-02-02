#include<stdio.h>
int evenodd(int num)
{
	if(num%2==0)
	{

	return 0;
   }
else
  {
	return 1;
  }
	
}

int main()
{
	int n, result;
	printf("Enter Any Number :-");
	scanf("%d",&n);
     result=evenodd(n);
 
	
   if(result==0)
    {
	
			printf("The Number %d is a Even Number.",n);
	}
	else if(result==1)
	{
		printf("The Number %d is a Odd Number.",n);
	}

	
	return 0;
	
}
