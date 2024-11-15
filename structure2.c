#include<stdio.h>
//structure declaration
#pragma pack(1)
struct demo
{
  int no;
  float f;
  double d;
  int i;



};

int main()
{
  //object creation of structure
  struct demo obj1;
  struct demo obj2;
  
  printf("%d\n",sizeof(obj1));  
  printf("%d\n",sizeof(obj2));  

  obj1.no=11;
  obj1.f=3.27;
  obj1.d=2.99999;
  obj1.i=21;

 obj2.no=101;
 obj2.f=10.90;
 obj2.d=90.999;
 obj2.i=111;



    return 0;
}