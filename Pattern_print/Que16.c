#include <stdio.h>

int main()
{
    int i, j, rows, num=0;
    printf("Enter number of rows :- ");
    scanf("%d", &rows);

    
    for(i=1; i<=rows; i++)
    {
        num=1;
        for(j=i; j<=rows; j++)
        {
            printf("%d ",num++);
        }
       
       printf("\n");
      
    }

    return 0;
}