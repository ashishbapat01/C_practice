#include<stdio.h>
int main()
{
    int a=1;
    int b=2;
    int *const ptr;
    ptr=&a;
    ptr=&b;
    printf("value of ptr is : %d ",*ptr);
    return 0;
}
