#include<stdio.h>

struct date
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 15;
};

int main()
{
    struct date obj;

    int i,j,k;



    printf("Enter day: \n");
    scanf("%d",&i);
    obj.day = i;



    printf("Enter month: \n");
    scanf("%d",&j);
    obj.month = j;



    printf("Enter year: \n");
    scanf("%d",&k);
    obj.year = k;

    printf("%d %d %d",obj.day,obj.month,obj.year);

    return 0;
}
