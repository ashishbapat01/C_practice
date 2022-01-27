#include <stdio.h>

int main()
{
    char as;

    
    printf("Enter any character: ");
    scanf("%c", &as);


    
    if((as >= 'a' && as <= 'z') || (as >= 'A' && as <= 'Z'))
    {
        printf("'%c' is alphabet.", as);
    }
    else if(as >= '0' && as <= '9')
    {
        printf("'%c' is digit.", as);
    }
    else 
    {
        printf("'%c' is special character.", as);
    }

    return 0;
}