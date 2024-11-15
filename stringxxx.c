#include<stdio.h>
#include<string.h>

int main()
{
     char Arr[]="Python";
     char *str =Arr;
     
     //int icnt=0;
     while(*str!='\0')
     {
        printf("%c\n",*str);
        str++;
        //printf("%d\n",icnt);
        //icnt++;
     }
     
    

     


     
    return 0;
}