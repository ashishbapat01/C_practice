#include <stdio.h>

int main()
{
    char ab;

    
    printf("Enter any character: ");
    scanf("%c", &ab);


    
    if(ab=='a' || ab=='e' || ab=='i' || ab=='o' || ab=='u' || 
       ab=='A' || ab=='E' || ab=='I' || ab=='O' || ab=='U')
    {
        printf("'%c' is Vowel.", ab);
    }
    else if((ab >= 'a' && ab <= 'z') || (ab >= 'A' && ab <= 'Z'))
    {
        
        printf("'%c' is Consonant.", ab);
    }
    else 
    {
       
        printf("'%c' is not an alphabet.", ab);
    }

    return 0;
}