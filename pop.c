#include<stdio.h>

int Addition(int no1, int no2)//addition is a function which accepts 2 parameter both are integer and it returns integer
{
    int ans=0;
    ans=no1+no2;//business logic
    return ans;
}

int Subtraction(int no1, int no2)//sub vr addition tyar kela mnje define kela mng hela 2 value dena ahe 
{
    int ans=0;
    ans=no1-no2;//business logic
    return ans;
}



int main()
{
    int value1=0,value2=0,ret=0;

    printf("Enter first no:\n");
    scanf("%d",&value1);

    printf("Enter second no:\n");
    scanf("%d",&value2);

    ret=Addition(value1,value2);
    printf("Addition is:%d\n",ret);

     ret=Subtraction(value1,value2);
    printf("Subtraction is:%d\n",ret);




    return 0;
}