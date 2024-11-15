#include<iostream>
using namespace std;

class demo
{
    public: 
       int no1,no2,no3;
      //parameterized constructor with default arguments
       demo(int a=11 , int b=21 ,int c=51)
       {
         no1=a;
         no2=b;
         no3=c;
       }

};

int main()
{
    demo obj1(); // 11 21 51
    demo obj1(10); //10 21 51
    demo obj1(10,20); //10 20 51
    demo obj1(10,20,30); //10 20 30







    return 0;
}