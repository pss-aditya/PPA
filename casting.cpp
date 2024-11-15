#include<iostream>
using namespace std;

class base
{
    public:
         int i,j;
         void fun()   //defination
         {
            cout<<"inside the base\n";
         }
};

class derived : public base
{
    public:
         int k,y;
         void fun() //redifination
         {
            cout<<"inside derived fun\n";
         }
};


int main()
{
    cout<<sizeof(base)<<"\n"; //1
    base bobj; //hechi size 8
    derived dobj; //hechi size 16

    base *bptr=NULL; //hechi size 8
    derived *dptr=NULL;

    bptr=&bobj;
    dptr=&dobj;
    bptr=&dobj;
    dptr=&bobj;
   




    return 0;
}