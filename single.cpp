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

int main()
{
   //Base bobj;
   Derived dobj;

   cout<<"inside main function\n";

   cout<<dobj.i<<"\n";
   cout<<dobj.j<<"\n";
   cout<<dobj.x<<"\n";
   cout<<dobj.y<<"\n";

  dobj.fun();
  dobj.gun();



   //cout<<sizeof(bobj)<<"\n";
   //cout<<sizeof(dobj)<<"\n";

    return 0;
}