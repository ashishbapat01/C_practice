#include<stdio.h>

int main()
{
    int arr[100];

    int size=0;

    printf("\nEnter the size of array do you want: ");
    scanf("%d",&size);

    printf("\nEnter the elements of array: ");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<size;j++)
    {
        if(arr[0]>arr[j])
        {
            arr[0] = arr[j];
        }
    }

    printf("\nSmallest element in array is %d",arr[0]);

    return 0;
}
