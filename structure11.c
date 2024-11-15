#include<stdio.h>
#pragma pack(1)
struct demo
{
    int i;   //4
    float f; //4
    char ch; //1
    double d; //8 
            //summation :-17


};


union hello
{
    int i;  //4
    float f; //4
    char ch; //4
    double d; //8 union mdhi largest element assign hota 


};




int main()
{
    struct demo dobj1;
    union hello hobj;
    printf(" Size of Structure is : %d\n",sizeof(dobj1));
    printf(" Size of Structure is : %d\n",sizeof(hobj));
 
  hobj.i  = 97;
 // hobj.f  = 10.00;

  printf("%d\n",hobj.i);

    return 0;
}