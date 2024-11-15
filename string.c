#include<stdio.h>
#include<string.h>

int main()
{

    char Arr[]= {'h','e','l','l','o','\0'};

    char brr[]="hello";
    
    printf("%d\n",sizeof(Arr));
    printf("%d\n",sizeof(brr));

    printf("length of string is %d\n",strlen(Arr));
    printf("length of string is %d\n",strlen(brr));


    return 0;
}