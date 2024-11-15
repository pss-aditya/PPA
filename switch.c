#include<stdio.h>
int main()
{
    int Standard=0;
    printf("enter the standard\n");
    scanf("%d",&Standard);

    switch(Standard)
    {
        case 1:
        printf("exam at 8am\n");
        break;

        case 2:
        printf("exam at 9am\n");
        break;

        case 3:
        printf("exam at 10am\n");
        break;

        case 4:
        printf("exam at 11am\n");
        break;
        
        default:
        printf("you  entered wrong choice\n");
    }

    return 0;
}