#include<stdio.h>
#include<windows.h>

int main()
{
	system("color ab");
    int arr[10],evencount=0,oddcount=0;

    printf("\nEnter the elements in an array: ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    //For counting all odd and even elements of array

    for(int j=0;j<10;j++)
    {
        if(arr[j]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }

    printf("\n\nCount of even elements is : %d",evencount);

    printf("\n\nCount of odd elements is: %d",oddcount);

    return 0;
}
