#include<iostream>
using namespace std;

class Demo
{
    public:
    int a;
    private:
    int b;
    public:
           Demo()
           {
            a=11;
            b=21;
           }
           void fun()
           {
            cout<<"value of a:"<<a<<"\n"; //allowed
            cout<<"value of b:"<<b<<"\n"; //allowed
           }    
};

int main()
{
    Demo obj;
   obj.fun();//allowed
   cout<<"value of a:"<<obj.a<<"\n";//allowed
   cout<<"value of b:"<<obj.b<<"\n";//not allowed



    return 0;
}