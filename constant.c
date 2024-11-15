#include<stdio.h>

int main()
{
   int a=10;

   const int b =10;

a++;//allowed 
  // b++; //not allowed as b is constant

    return 0 ;
}