#include<stdio.h>//standard input output
#include<stdlib.h>//standard library

int main()
{
    int *ptr = NULL;
    


    ptr = (int *)malloc(sizeof(int));


    //*ptr=42;


    //ptr =(int *)calloc(5,sizeof(int));


    ptr =(int *)realloc(ptr,7*sizeof(int));//case1
    ptr =(int *)realloc(ptr,3*sizeof(int));//case2
    

    ptr =(int *)realloc(NULL,5*sizeof(int));//Works like malloc

    ptr =(int*)realloc(ptr,0);//works like free manje memory deallocation
    


   // the use of void * in dynamic memory allocation
   // printf("address is:%p\n",(void*)ptr);
   // printf("value  is:%d\n",*ptr);

   

    return 0;
}