#include <stdio.h>

int main()
{
    int i=0;
   char ch='A';
    
    for( int i=1; i<=10; i++)
    {
    	
    	ch='A';
        for( int j=1; j<=10-i; j++)
        {
        printf(" ");
		}
        
        for(int k=1;k<=i;k++)
        {
           printf("%c ",ch++);
        }
       
       printf("\n");
      ch;
    }

    return 0;
}