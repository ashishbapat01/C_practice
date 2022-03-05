#include<stdio.h>

int main()
{
    int arr[5];

    printf("\nEnter the elements in an array: ");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    //For printing negative numbers form array

    printf("\nAll negative elements in an array are: ");

    for(int i=0;i<5;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
    }



    return 0;
}
