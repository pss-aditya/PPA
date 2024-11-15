#include<iostream>
using namespace std;

class base
{
    public:
         void fun()   //defination
         {
            cout<<"inside the base\n";
         }
};

class derived : public base
{
    public:
        void fun() //redifination
        {
            cout<<"inside derived fun\n";
        }



};

int main()
{
    cout<<sizeof(base)<<"\n"; //1
    base bobj;
    bobj.fun();

    derived dobj;
    dobj.fun();




    return 0;
}