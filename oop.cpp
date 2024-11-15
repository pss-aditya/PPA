#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int no1;
        int no2;

        Arithematic(int A,int B)
        {
            no1=A;
            no2=B;
        }

        int Addition()
        {
            int Ans=0;
            Ans=no1+no2;
            return Ans;
        }

         int Subtraction()
        {
            int Ans=0;
            Ans=no1-no2;
            return Ans;
        }
};

int main()
{
 int value1=0,value2=0,ret=0;

 cout<<"Enter first no:\n";
 cin>>value1;

cout<<"Enter second no:\n";
 cin>>value2;

Arithematic obj(value1,value2);

ret=obj.Addition();
cout<<"Addition is:"<<ret<<"\n";

ret=obj.Subtraction();
cout<<"Subtraction is :"<<ret<<"\n";

    return 0;
}