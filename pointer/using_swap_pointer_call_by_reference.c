#include<stdio.h>

void swap(int *p,int *q);
int main()
{
	int a=0,b=0;
	printf("Enter value of a:-");
	scanf("%d",&a);
	
	printf("Enter value of b:-");
	scanf("%d",&b);
	swap(&a,&b);
}
void swap(int *p,int *q)
{
    int temp=*p;
    temp=*p;
    *p=*q;
    *p=temp;
    
    printf("value after swapping:-");
    printf("%d %d",*p,*q);
	
}
