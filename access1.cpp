#include<iostream>
using namespace std;

class base //class chya aat konta hi acess specifier access kru shakto class chya baher te nhi jamt jr private , protected asl tr
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;
    public:
    base()
    {
        int i=10;
        int j=20;
        int k=30;
    
    }
     void gun()
    {
        cout<<i<<"\n"; //allowed
        cout<<j<<"\n"; // allowed
        cout<<k<<"\n"; //allowed
    }
 

};

class derived:public base
{
    public:
    void fun()
    {
        cout<<i<<"\n"; //allowed
        cout<<j<<"\n"; //not allowed
        cout<<k<<"\n"; //allowed protector aplya derived class sathi thevelal asto mnun tyla te access krtta yeil
    }
 
};

int main()
{
    base bobj;

    cout<<bobj.i<<"\n"; //allowed
    cout<<bobj.j<<"\n"; //not allowed
    cout<<bobj.k<<"\n"; //not allowed ha banvla hota derived class sathi pan main ha derived class nahi ye mnun error yeil

    return 0;
}