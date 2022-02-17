#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
    int	scount=1;
	
	printf("Enter the string here:");
	gets(str);
	
	
	
	if(str[0]==NULL)
	{
		scount=0;
	}
	else
	{
		for(int i=0;str[i]!=NULL;i++)
	    {
	    	
	    	if( str[i]==' ' )
	    	{
	    		scount++;
	    		
			}
		}
	}
	printf("\n count of word in string is  %d ",scount);	
	
	return 0;
}