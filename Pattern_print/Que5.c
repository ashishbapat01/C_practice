#include<stdio.h>
int main()
{
	int num=10;
	char ch= 'A';
	
	for(int i=1;i<=num;i++)
	{
	 for(int j=1;j<=9;j++)
      {
	  
      	printf("%c",ch);
      if(ch=='K')
	 {
	 	ch='A';
	   
	 }	
   }
	 printf("\n");
	 	  ch++;
	}
	return 0;
}