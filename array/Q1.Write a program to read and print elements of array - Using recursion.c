#include<stdio.h>

int arr[10];


void arr1()
{
    static int s=0;


    scanf("%d",&arr[s]);
    s++;

    if(s<10)
    {
        arr1();
    }
}

void parr()
{
    static int p=0;

    printf("%d ",arr[p]);
    p++;

    if(p<10)
    {
        parr();
    }
}

int main()
{
    printf("\nEnter the elements of array: ");

    arr1();

    printf("\nElements in array are: ");

    parr();

    return 0;
}


