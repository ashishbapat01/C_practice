#include<stdio.h>
int main()
{
	int num1=0,num2=0;
	printf("Enter Any Number :- ");
	scanf("%d %d",&num1,&num2);
	
	switch(num1>num2)
	{
		case 1:
			printf("The Number %d is greater.",num1);
			break;
			
		case 0:
			printf("The Number %d is greater.",num2);
			
	}
	return 0;
	
}