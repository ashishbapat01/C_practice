#include<stdio.h>
#include<string.h>
int main()
{
	char str[26];
	int vowel=0,conc=0;

	printf("Enter the string here:-");
	//scanf("%[^\n]c",str);
	gets(str);
	
	for(int i=0;str[i]!=NULL;i++)
	{
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
		if(str[i]=='a' || str[i]=='e'||str[i]=='i' ||str[i]=='o' ||str[i]=='u'||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='o' ||str[i]=='U') 
		 {
		 	vowel++;
		 }
		 else
		 {
		 	conc++;
		 }
	  }
	}
	printf("The total number of vowel in the string:- %d \n",vowel);
	printf("The total number of consonant in the string:- %d\n",conc);
	
	return 0;
}