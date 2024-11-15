#include<iostream>
using namespace std;
class Demo
{
    public:
         int a;
         int b;


         void fun()
         {
            cout<<"inside fun\n";
         }
         void gun()
         {
            cout<<"inside gun\n";

         }

};
int main()
{
    Demo obj;

    cout<<sizeof(obj)<<"\n"; //8

    obj.a=11;
    obj.b=21;

    obj.fun(); //inside fun
    obj.gun(); //inside gun

    cout<<obj.a<<"\n"; //11
    cout<<obj.b<<"\n"; //21


    return 0;
}