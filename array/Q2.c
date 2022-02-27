#include<stdio.h>
int perfect(int a);

int main()
{
	int sum=0,ss=0;
	
	int arr[10]={100,5,5,5,3,2,2,2,2,2,0};
	
	for(int i=0;i<10;i++)
	{
		sum=sum +arr[i];
	}
	
	perfect (sum);
	
	return 0;
}
int perfect(int a)
{
	int temp=0,as=0;
	temp=a;
	
	for(int f=1;f<a;f++)
	{
	    
		if(a%f==0)
		{
				 as=as+f;
		}
        
	}
	if(as==temp)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	
}