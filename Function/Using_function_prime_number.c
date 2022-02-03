#include<stdio.h>
int primeno(int n);

int main()
{
	int num=0;
	printf("Enter any Number:- ");
	scanf("%d",&num);
	primeno(num);
	
	return 0;
}
int primeno(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	 if(n==i)
	 {
	 	printf("The number %d is prime number.",n);
	 }
	 else
	 {
	 	printf("The number %d is not prime number.",n);
	 }
}