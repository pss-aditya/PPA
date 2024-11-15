#include<iostream>
using namespace std;

class base1
{
    public:
    int i,j;
    base1()
    {
        cout<<"inside  base1 constructor\n";
        i=10;
        j=20;
    }
    ~base1()
    {
        cout<<"inside  base1 destructor\n";
    }
    void fun()
    {
        cout<<"inside fun of base1\n";
    }



};

class base2
{
    public:
    int x,y;
    base2()
    {
        cout<<"inside  base2 constructor\n";
        x=10;
        y=20;
    }
    ~base2()
    {
        cout<<"inside  base2 destructor\n";
    }
    void gun()
    {
        cout<<"inside fun of base2\n";
    }

};

class derived:public base2,base1
{
    public:
    int a,b;
    derived()
    {
        cout<<"inside derived constructor\n";
        a=50;
        b=60;

    }
    ~derived()
    {
        cout<<"inside derived constructor\n";

    }
    void sun()
    {
        cout<<"inside sun of derived\n";
    }
};



int main()
{
    derived dobj;

    cout<<sizeof(base1)<<"\n";//8
    cout<<sizeof(base2)<<"\n";//8
    cout<<sizeof(derived)<<"\n";//24



    return 0;
}
