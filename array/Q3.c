#include<stdio.h>
void main()
{
	int n,temp,rem,rev=0;
	printf("Enter No");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	{
		printf("no is palindrome");
	}
	else
	{
		printf("no is not palindrome");
	}

}