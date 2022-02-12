#include<stdio.h>
int main()
{
	int i=0,j=0,ans=0,num=0,n=0,a=0;
	int *p;
	int *q;
    p=&ans;
    q=&num;
	
	printf("Enter Any Number:- ");
	scanf("%d",&num);
	a=num;
	
	
	while(*q>0)
	{
	j=(*q)%10;
    *p=(*p)+(j*j*j);
    *q=(*q)/10;
	}
	if(a==*p)
	{
		printf(" Number  Is a Armstrong number");
	}
	else
	{
		printf(" Number Is a Not  Armstrong number");
	}
    
  return 0;
	
}
