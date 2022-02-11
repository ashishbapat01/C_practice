#include<stdio.h>
int main()
{
	char ch='a',ah='z';
	char *p=&ch,*q=&ah; 
	
	for(char i=*p;i<=*q;i++)
	 {
	 	printf("%c",i);
	 }
	return 0;
}