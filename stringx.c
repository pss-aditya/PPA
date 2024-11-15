#include<stdio.h>
#include<string.h>

int main()
{
     char Arr[]="Python";

     printf("length of string:%d\n",strlen(Arr));
     printf("size of the string is :%d\n",sizeof(Arr));
     
     printf("%c\n",Arr[2]);
     printf("%c\n",Arr[5]);
     printf("%c\n",Arr[1]);


     
    return 0;
}