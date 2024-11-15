#include<stdio.h>
int main()
{
 int no=21;

 int *p=&no;

 int **q=&p;

 int ***c=&q;

 int ****d=&c;

 int *****i=&d;

 int ***a=&i;
 
 int ****l=&a;






    return 0;
}