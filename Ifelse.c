#include<stdio.h>
int main()
{
    int no=0,result=0;
    printf("enter number:\n");
    scanf("%d",&no);

    result=no %2;

    if(result==0)
    {
        printf("it is even no:\n");
    }
    else
    {
        printf("it is odd no:\n");
    }

    return 0;
}