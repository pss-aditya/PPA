#include<iostream>
using namespace std;

class Base
{
public:
      int i,j;
      Base()
      {
        cout<<"inside base constructor\n";
        i=10;
        j=20;
      }
      ~Base()
      {
        cout<<"inside base destructor\n";
      }
      void fun()
      {
        cout<<"inside base fun\n";
      }
      
};

class Derived:public Base
{
    public:
    int x,y;
    Derived()
      {
        cout<<"inside derived constructor\n";
        x=30;
        y=40;
      }
      ~Derived()
      {
        cout<<"inside derived destructor\n";
      }
    void gun()
    {
        cout<<"inside derived gun\n";
    }

};

class derivedX:public Derived
{
    public:
    int a,b;
    derivedX()
    {
        cout<<"inside derived x constructor\n";
        a=50;
        b=60;
    }
    ~derivedX()
    {
        cout<<"inside derived x destructor\n";
    }
    void sun()
    {
        cout<<"inside derived x sun\n";
    }


};

int main()
{
   //Base bobj;
   derivedX dobj;

   cout<<"inside main function\n";
   cout<<"size of base class"<<sizeof(Base)<<"\n"; //8
   cout<<"size of base class"<<sizeof(Derived)<<"\n"; //16
   cout<<"size of base class"<<sizeof(derivedX)<<"\n"; //24

   cout<<dobj.i<<"\n"; //10
   cout<<dobj.j<<"\n"; //20
   cout<<dobj.x<<"\n";//30
   cout<<dobj.y<<"\n";//40
   cout<<dobj.a<<"\n";//50
   cout<<dobj.b<<"\n";//60

  dobj.fun(); //inside fun of base
  dobj.gun();//inside gun of base
  dobj.sun();//inside sun of base
 
//destructors:derivedx-->Derived-->Base

   //cout<<sizeof(bobj)<<"\n";
   //cout<<sizeof(dobj)<<"\n";

    return 0;
}