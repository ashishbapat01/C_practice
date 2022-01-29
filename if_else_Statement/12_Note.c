#include<stdio.h>
int main()
{ 
    int amt;
	int n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
	n2000=0,n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
	
	printf("Enter the Amount :-  ");
	scanf("%d",&amt);
	
	if(amt>=n2000)
	{
		n2000=amt/2000;
		amt -=n2000*2000;
		printf(" Note of 2000 :- %d \n",n2000);
	}
	
	if(amt>=n500)
	{
		n500=amt/500;
		amt -=n500*500;
		printf("Note of 500 :- %d \n",n500);
	}
	
	if(amt>=200)
	{
		n200=amt/200;
		amt -=n200*200;
		printf("Note Of 200 :- %d \n",n200);
	}
	
	if(amt>=100)
	{
		n100=amt/100;
		amt -=n100*100;
		printf("Note of 100 :-%d \n",n100);
	}
	
	if(amt>=50)
	{
		n50=amt/50;
		amt -=n50*50;
		printf("Note of 50 :- %d \n",n50);
	}
	
	if(amt>=20)
	{
		n20 =amt/20;
		amt -=n20*20;
		printf("Note of 20 :- %d \n",n20);
	}
	
	if(amt>=10)
	{
		n10=amt/10;
		amt -=n10*10;
		printf("Note of 10 :- %d \n",n10);
	}
	
	if(amt>=5)
	{
		n5=amt/5;
		amt -=n5*5;
		printf("Note of 5 :- %d \n",n5);
    }
    
    if(amt>=2)
	{
		n2=amt/2;
		amt -=n2*2;
		printf("Note of 2 :- %d \n",n2);
    }
	
	if(amt>=1)
	{
		n1=amt/1;
		amt -=n1*1;
		printf("Note of 1 :- %d \n",n1);
    }
    
    
    
	return 0;
}
	
