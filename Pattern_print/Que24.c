#include <stdio.h>

int main()
{
    int num=10;
   
    
    for( int i=1; i<=num; i++)
    {
        for( int j=1; j<=num-i; j++)
        {
        printf("  ");
		}
        
        for(int k=1;k<=i;k++)
        {
           printf(" * ");
        }
       
       printf("\n");
    }

    return 0;
}