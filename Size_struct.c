#include<stdio.h>
#pragma pack(1)
struct Demo
{
 int a;
 int b;
 char c;
// double d;
// char e;

}obj;
int main()
{

   printf("%d",sizeof(obj));
    return 0;
}


