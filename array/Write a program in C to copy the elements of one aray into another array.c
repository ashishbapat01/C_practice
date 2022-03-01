#include<stdio.h>

int main()
{
    int Oriarr[5],Coparr[5];

    printf("\nEnter the elements of array: ");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&Oriarr[i]);
    }

    for(int j=0;j<5;j++)
    {
        Coparr[j] = Oriarr[j];
    }

    printf("\nCopying the elements of original array to the other array : ");

    for(int i=0;i<5;i++)
    {
        printf("%d ",Coparr[i]);
    }


    return 0;
}
