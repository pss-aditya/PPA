#include<iostream>
using namespace std;

class demo
{
    public:
    int Addition(int a, int b)
    {
        return a+b;
    }
    double Additon(double a,double b)
    {
        return a+b;
    }
    int Addition(int a ,int b, int c)
    {
        return a+b+c;
    }
};

int main()
{
    demo obj;

    cout<<obj.Addition(10,11)<<"\n";
    cout<<obj.Addition(10.90,11.99)<<"\n";
    cout<<obj.Addition(10,11,98)<<"\n";

  

    return 0;
}




/*

void fun(int a,int b);               fun@2ii
void fun(int  a , int b ,int c);     fun@3iii

void fun(int  a , int b );     fun@2ii
void fun(float  a , float b);  fun@2ff

void fun(int a, float b, double c); fun@2ifd
void fun(double a, float b, int c); fun@dfi

void fun(int a,int b);
int fun(int a,int b);






*/