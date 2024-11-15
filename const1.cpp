#include<iostream>
using namespace std;



int main()
{
    int no1=1;

    const int no2=2;

    no1++;
    no2++; //not allowed

    no1=2;
    no2=2; // not allowed



    return 0;
}