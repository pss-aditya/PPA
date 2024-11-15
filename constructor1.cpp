#include<iostream>
using namespace std;


class marvellous
{
  public:
  int no1;
  int no2;

  marvellous()
  {
    cout<<"inside default constructor\n";
    no1=0;
    no2=0;
  }

  marvellous(int a,int b)
  {
    cout<<"inside parameterised constructor\n";
    no1=a;
    no2=b;
  }

 ~marvellous()
 {
    cout<<"inside destructor\n";
 }
 void fun()
 {
    cout<<"inside fun\n";
 }

};


int main()
{
 marvellous mobj1;
 marvellous mobj2(21,34);
 
   

    return 0;
}