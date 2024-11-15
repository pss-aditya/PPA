#include<stdio.h>
int main()
{

char c = 'D';
int i = 1234;
float f = 1.23;
double d = 1.234589;

printf("%d\n",sizeof(c));  //1
printf("%d\n",sizeof(i));   //4
printf("%d\n",sizeof(f));   //4
printf("%d\n",sizeof(d));   //8

return 0;

}