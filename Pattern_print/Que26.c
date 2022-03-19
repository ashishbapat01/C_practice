#include <stdio.h>

int main()
{
    int num=10;
   
    
    for( int i=1; i<=10; i++)
    {
    	
    	int num=1;
        for( int j=1; j<=10-i; j++)
        {
        printf(" ");
		}
        
        for(int k=1;k<=i;k++)
        {
           printf("%d ",num++);
        }
       
       printf("\n");
     
    }

    return 0;
}