#include<stdio.h>
int main()
{
	int m=29;
	int *ab;
	ab=&m;
	
	printf("Address of m : %x\n ",&m);
	printf("value of m : %d \n\n",m);
	
	printf("Now ab is assigned with the address of m.\n");
	printf("Address ab of Pointer ab : %x\n",ab);
	printf("content of pointer ab : %d \n\n",m);
	
	m=34;
	printf("The Value of m assigned to 34 now.\n");
	printf("Address ab of Pointer ab : %x\n",ab);
	printf("content of pointer ab : %d \n\n",m);
	
	ab=7;
	printf("The pointer Variable ab is assigned with the value 7 now.\n");
	printf("Address  of  m : %x\n",&m);
	printf("content of pointer m : %d \n\n",ab);
	
	
	return 0;
}