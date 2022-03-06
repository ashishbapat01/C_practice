#include<stdio.h>

static int ea=0,oa=0;

int main()
{
    static int evencount=0,oddcount=0;

    int mainarr[100],evenarr[100],oddarr[100],size=0;

    printf("\n Enter the size of an array: ");
    scanf("%d",&size);

    printf("\n Enter the %d element in an array: ",size);

    for(int i=0;i<size;i++)
    {
        scanf("%d",&mainarr[i]);
    }

    printf("\n Elements of an array are: ");

    for(int i=0;i<size;i++)
    {
        printf("%d ",mainarr[i]);
    }

    //sorting the odd and even elements in two different array

    for(int j=0;j<size;j++)
    {
        ea;
        if(mainarr[j]%2==0)
        {
            evenarr[ea] = mainarr[j];
            evencount++;
            ea++;
        }

    }

    for(int k=0;k<size;k++)
    {
        oa;
        if(mainarr[k]%2!=0)
        {
            oddarr[oa] = mainarr[k];
            oddcount++;
            oa++;
        }

    }

    //For printing sorted array


    printf("\n %d even count\n %d odd count",evencount,oddcount);

    printf("\n\n Even array element is ");

    for(int e=0;e<evencount;e++)
    {
        printf("%d ",evenarr[e]);
    }

    printf("\n\n Odd array element is ");

    for(int o=0;o<oddcount;o++)
    {
        printf("%d ",oddarr[o]);
    }

    return 0;
}
