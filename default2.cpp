#include<iostream>
using namespace std;

void display(int a =10 , int b =20, int  c =30)
{
    cout<<a<<"\t"<<b<<"t"<<c<<"n";
}
int main()
{
    display();
    display(11);
    display(11,21);
    display(11,21,51);

    return 0;
}