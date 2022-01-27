#include <stdio.h>

int main()
{
    char aj;

    
    printf("Enter any character: ");
    scanf("%c", &aj);


    if(aj>= 'A' && aj <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", aj);
    }
    else if(aj >= 'a' && aj <= 'z')
    {
        printf("'%c' is lowercase alphabet.", aj);
    }
    else
    {
        printf("'%c' is not an alphabet.", aj);
    }

    return 0;
}