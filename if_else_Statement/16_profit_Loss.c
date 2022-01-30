#include <stdio.h>

int main()
{
    int cp,sp, ammount; 
    
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    
    if(sp > cp)
    {
       ammount = sp - cp;
        printf("Profit = %d", ammount);
    }
    else if(cp > sp)
    {
        ammount = cp - sp;
        printf("Loss = %d", ammount);
    }
    else
    {
      
        printf("No Profit No Loss.");
    }

    return 0;
}