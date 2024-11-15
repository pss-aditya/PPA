#include<iostream>
using namespace std;

class demo
{
   public:
     int a,b;

      demo()
     {
        a=0;
        b=0;
     }
      demo(int i,int y)
      {
        a=i;
        b=y;
      }
      demo(demo &ref)
      {
        a=ref.a;
        b=ref.b;
      }
      ~demo()
      {
        cout<<"inside destructor\n";
      }
};
int main()
{
    demo obj1(11,21);
    demo obj2(obj1);

    cout<<obj1.a<<"\t"<<obj1.b<<"\n";
    cout<<obj2.a<<"\t"<<obj2.b<<"\n";
    return 0;
}