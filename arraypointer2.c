#include<stdio.h>
int main()
{

int arr[5]={10,20,30,40,50};
printf("%d\n",arr[2]); // he sagla 30 ae as array is consider as  a pointer
printf("%d\n",*(arr+2));
printf("%d\n",*(2+arr));
printf("%d\n",2[arr]);




    return 0;
}