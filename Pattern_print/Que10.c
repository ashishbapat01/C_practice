#include <stdio.h>
int main()
{
    int i=0, j=0, n=1;

   

    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
        	if(i>=j)
            printf("%d",n);
        }
         
        printf("\n");
      n++;
       
    }

    return 0;
}