#include<stdio.h>
#include<string.h>

int main()
{
    char	str[100];
    int alphabate=0,digit=0,spcharacter=0,space=0;
    
    printf("Enter the string here :- ");
    scanf("%[^\n]c",str);
    
    for(int i=0;str[i]!=NULL;i++)
    {
    	if(str[i]>='0' && str[i]<='9')
    	{
    		digit++;
		}
		 else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
        	alphabate++;
		}
	    else if(str[i]==' ')
		{
		   	space++;
		}
		else
		{
			spcharacter++;
		}
	}
	printf("Number of Alphabate the in String is:- %d\n",alphabate);
	printf("Number of Digit in the  string is:- %d\n",digit);
	printf("Number of Space in the  string is:- %d\n",space);
	printf("Number of Special character in the string is :- %d\n",spcharacter);
    
   return 0; 
}