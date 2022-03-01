#include<stdio.h>

int main()
{
    int arr[5],temp=0;

    printf("\nEnter the elements of an array: ");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nElements in array are: ");
    for(int j=0;j<5;j++)
    {
        printf("%d ",arr[j]);
    }

    printf("\n");

    for(int k=1;k<5;k++)
    {
        if(arr[0] < arr[k])
        {
            arr[0] = arr[k];
        }
    }

    printf("\nLargest element in array is %d",arr[0]);

    return 0;
}
