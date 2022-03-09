#include<stdio.h>

int main()
{
    int arr[100],size=0;

    printf("\nEnter the size of an array: ");
    scanf("%d",&size);

    printf("\nEnter the elements of an array: ");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    //For sorting even and odd elements of an array

    printf("\n\nEven elements are: ");

    for(int j=0;j<size;j++)
    {
        if(arr[j]%2==0)
        {
            printf("%d ",arr[j]);
        }
    }

    printf("\n\nOdd elements are: ");

    for(int j=0;j<size;j++)
    {
        if(arr[j]%2!=0)
        {
            printf("%d ",arr[j]);
        }
    }

    return 0;
}
