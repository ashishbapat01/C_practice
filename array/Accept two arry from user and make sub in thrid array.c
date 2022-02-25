#include<stdio.h>

int main()
{
    int arr1[100],arr2[100],arr3[100],sum=0,s=0;

    //For accepting the size of first array
    printf("\nEnter the size of both array: ");
    scanf("%d",&s);



    //For accepting elements of first array
    printf("\nEnter the elements of first array: ");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr1[i]);
    }

    //For accepting elements of second array
    printf("\nEnter the elements of second array: ");
    for(int j=0;j<s;j++)
    {
        scanf("%d",&arr2[j]);
    }

    //Making the subtraction of two array

    for(int i=0;i<s;i++)
    {
        arr3[i] = arr1[i] - arr2[i];
    }

    //After subtraction arr3 will be

    printf("\n\nElements of third array are: ");

    for(int j=0;j<s;j++)
    {
        printf("%d ",arr3[j]);

        sum+= arr3[j];

    }

    //Addition of elements of third array.

    printf("\n\nAddition of elements of third array is %d",sum);

    if(sum%2!=0)
    {
        sum+=1;
        printf("\n %d",sum);
    }

   /* if(sum<0)
    {
        sum = ~sum + 1;
    }

    printf("\n\nPositive sum is %d",sum);
*/

    return 0;
}
