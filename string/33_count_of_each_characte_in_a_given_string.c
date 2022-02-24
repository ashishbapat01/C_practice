#include<stdio.h>
#include<string.h>
int main()
{
	char cstr[40];
	int icount=0,icount2;
	
	printf("\nEnter the string here:-");
	gets(cstr);
	
	for(int i=0;cstr[i]!=NULL;i++)
	{
		icount=0;
	
	for(int j=0;j<i;j++)
	{
	  if(cstr[j]==cstr[i])	
	  {
	  	icount++;
	  }
	}
	if(icount>0)
	{
		continue;
	}
	
	icount2=1;
	for(int k=i+1;cstr[k]!=NULL;k++)
	{
		if(cstr[i]==cstr[k])	
	  {
	  	icount2++;
	  }
		
	}
	printf("\n%c:-%d",cstr[i],icount2);
	
	}
	
   return 0;
}