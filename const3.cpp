#include<iostream>
using namespace std;

class demo
{
    public:
        int no1,no2;

        demo(int a , int b)
        {
            no1=a;
            no2=b;
        }

        void fun()
        {
            no1++;
            no2++;
        }

        void gun() const
        {
           // no1++;
           // no2++;
        }
    


};

int main()
{
    demo obj1(10,20);
    const demo obj2(11,21);

    return 0;
}





