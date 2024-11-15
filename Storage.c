#include<stdio.h>

int Value=11;                     //extern
int Data;                         //extern

void Demo()                     
{                                 
     int i=20;                    //auto
     static int j =30;            //static
     register int k = 40;         //register
} 

int main()
{
    int *p=NULL;
    p=(int *)malloc(5*sizeof(int)); //Dyanmic Memory

    Demo();

    return 0;
}