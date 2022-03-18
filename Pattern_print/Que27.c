#include <stdio.h>

int main()
{
    int i=8;
   char ch='A';
    
    for( int i=1; i<=8; i++)
    {
    	
    
        for( int j=1;j<=8-i; j++)
        {
        printf(" ");
		}
        
        for(int k=1;k<=i;k++)
        {
           printf(" %c ",ch);
        }
       
       printf("\n");
     ch++;
    }

    return 0;
}