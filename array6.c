#include<stdio.h>
 
 int main()
 {
    int arr[3][4]={10,20,30,40,50,60,70,80,90,100,110,120};

printf("%d\n",sizeof(arr)); //48

printf("%d\n",arr[1][0]);   //50
printf("%d\n",arr[2][1]);  //100
printf("%d\n",arr[1][1]);  //60
printf("%d\n",arr[0][2]); //30
printf("%d\n",arr[1][3]); //80
printf("%d\n",arr[2][3]); //120
printf("%d\n",arr[0][3]); //40




    return 0;

 }