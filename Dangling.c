#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p=NULL;

    p=(int *)malloc(5*sizeof(int));

    free(p);

    //now p is a dangling pointer 
    return 0;
}