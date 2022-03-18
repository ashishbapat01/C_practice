 #include<stdio.h>
int main()
{
	int i=10;
    char ch='J';
	
	for(int i=0;i<10;i++)
	{
	   ch ='J';
		for(int j=i;j<10;j++)
		
		{
			if(i<=j)
			{
				printf("%c",ch --);
			}
		
    	}
			printf("\n");
		 
	}
	return 0;
}