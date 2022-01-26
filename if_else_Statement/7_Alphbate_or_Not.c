#include <stdio.h>

int main()
{
    char ab;

    printf("Enter any character: ");
    scanf("%c", &ab);


    if((ab >= 'a' && ab <= 'z') || (ab >= 'A' && ab <= 'Z'))
    {
        printf("Character is an ALPHABET.");
    }
    else
    {
        printf("Character is NOT ALPHABET.");
    }

    return 0;
}