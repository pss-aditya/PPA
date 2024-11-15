#include<iostream>
using namespace std;

class base
{
    public:
    int a,b;
    
    //1000
    int addition (int no1 ,int no2) //concrete method
    {
        return no1+no2;
    }
    
    
    virtual int subtraction(int no1 ,int no2)=0; //abstract method
};

class derived:public base
{
    public:
    int x,y;
    
    //2000
    int multiplication(int no1,int no2) //concrete method
    {
        return no1*no2;
    }
    
    //3000
    int subtraction(int no1,int no2) //concrete method
    {
        return no1-no2;
    }


};

int main()
{
    derived dobj;
    //base bobj; not allowed karan ki virtual ae mnun

    cout<<"additon is :"<<dobj.addition(10,11)<<"\n";
    cout<<"subtraction is :"<<dobj.subtraction(11,10)<<"\n";
    cout<<"multiplication is :"<<dobj.multiplication(11,10)<<"\n";
    
    cout<<"size of base class:"<<sizeof(base)<<"\n";
    cout<<"size of derived class:"<<sizeof(derived)<<"\n";

    return 0;
}