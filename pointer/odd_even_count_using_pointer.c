#include<stdio.h>
int main()
{
 int arr[5]={1,2,3,4,5};
 int *p=arr;
 int i,evcount=0,oddcount=0,temp=0;
 
   for(i=0;i<5;i++)
 {
 
    temp =*(p+i);
 
  if(temp%2==0)
   {
 	evcount++;
   }
 else
   {
 	oddcount++;
   }
 }
 
 printf("Even count is %d\n",evcount);
 printf("odd count is %d \n",oddcount);
  
  return 0;
}