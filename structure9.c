#include<stdio.h>
struct demo
{
  int no;
  struct demo *ptr;
};

int main()
{
   struct demo obj1;
   struct demo obj2;
   struct demo obj3;

   obj1.no=11;
   obj2.no=21;
   obj3.no=51;


 obj1.ptr=&obj2;
 obj2.ptr=&obj3;
 obj3.ptr=NULL;
  
  printf("%d\n",obj1.ptr);
  printf("%d\n",obj2.ptr);
  printf("%d\n",obj3.ptr);

  
    return 0;
}