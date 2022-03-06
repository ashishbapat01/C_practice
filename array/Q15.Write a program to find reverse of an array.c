#include<stdio.h>

int main()
{
    int arr[5],num=5;

    printf("\nEnter the elements in an array :");

    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nElements in an array are: ");

    for(int i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nReverse of an array is ");

    while(num!=0)
    {
        printf("%d ",arr[num-1]);
        num--;
    }



    return 0;
}
