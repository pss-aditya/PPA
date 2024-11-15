#include<stdio.h>

int main()
{
  int a=10,b=10;
  int no1=0,no2=0;

  no1=a++;   // post increment  (first intialise then increment)
  printf("value of no1:%d\n",no1);
  printf("value of a:%d\n",a);

  no2=++b;  //pre increment    (first increment then initialise)
  printf("value of no2:%d\n",no2);
  printf("value of b:%d\n",b);




    return 0;

}