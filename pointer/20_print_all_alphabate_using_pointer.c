#include<stdio.h>

int main()
{
	char arr[26];
	int i=0,j=0;
	int *ptr=&arr;
	
	for(j='A';j<='Z';j++)
	{
		*(ptr)=j;
		printf("%c ",*(ptr));
		i++;
	}
	return 0;
}