#include<iostream>
using namespace std;

float CalculateArea(float rad , float pi = 3.14)
{
    float ans = 0.0f;
    ans=pi*rad*rad;
    return ans;
}

int main ()
{
   float ret = 0.0f;
   
   ret =CalculateArea(10.5f,3.14f);
   cout<<"area of a circle is:"<<ret<<"\n";
 

  ret =CalculateArea(10.5f);
  cout<<"area of a circle is:"<<ret<<"\n";

   ret =CalculateArea(10.5f,7.20f);
   cout<<"area of a circle is:"<<ret<<"\n";

    return 0;
}
