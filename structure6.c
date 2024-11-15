#include<stdio.h>
struct demo
{
  int no;
  float  f;
  int arr[3];
  int x;


};

int main()
{
  struct demo obj;
  


  obj.no=11;
  obj.f=90.99;
  obj.x=21;

  obj.arr[0]=10;
  obj.arr[1]=20;
  obj.arr[2]=30;


   return 0;
}