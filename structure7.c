#include<stdio.h>
struct demo
{  
    int no;
    float f;
    int *p;
    float *q;

};

int  main()
{
    struct demo obj;
    int  i =11;
    float marks=90.99;

    obj.no=51;
    obj.f=3.14;
    obj.p=&i;
    obj.q=&marks;
     
    printf("%d\n",*(obj.p));
    printf("%f\n",*(obj.q)); 



   return 0;
}