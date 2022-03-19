#include <stdio.h>

int main()
{
    int num=8;
   
    
    for( int i=1; i<=7; i++)
    {
    	
    	int num=1;
        for( int j=1; j<=7-i; j++)
        {
        printf(" ");
		}
        
        for(int k=1;k<=i;k++)
        {
           printf("%d ",i);
        }
       
       printf("\n");
      num++;
    }

    return 0;
}