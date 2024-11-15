#include<iostream>
using namespace std;

class base
{
    public:
         int i,j;

         virtual void fun() //1000
         {
            cout<<"inside the base fun\n";
         }

         void gun() //2000
         {
            cout<<"inside base gun\n";
         }

         virtual void sun() //3000
         {
            cout<<"inside base sun\n";
         }

         virtual void run() //4000
         {
            cout<<"inside base run\n";
         }
};

class derived : public base
{
    public:
         int k,y;

          virtual void fun()  //5000   // compiler derived class la vicharta do you have the fun function tr derived manta yes i have c++ mnta swathch ghe refer the diagram in ppa book 
         {   
            cout<<"inside derived fun\n";   
         }

         void gun() //6000
         {   
            cout<<"inside derived gun\n";    
         }

         virtual void mun() //7000
         {   
            cout<<"inside derived mun\n";    
         }                                                   // jr base mdhi toch fucntion virtual ahe tr optional ahe derived mdhi lihna

         void run() //8000
         {   
            cout<<"inside derived run\n";    
         }
};


int main()
{
    cout<<"size of base class:"<<sizeof(base)<<"\n"; //8
    cout<<"size of derived  class:"<<sizeof(derived)<<"\n"; //16

    derived dobj; //hechi size 16

    base *bptr=NULL; //hechi size 8
     
    bptr=&dobj; // up casting
    
    bptr->fun(); //base ch fun run hoil
    bptr->gun(); //base run
    bptr->sun(); //base sun
    bptr->run(); //base run
    //bptr->mun(); //error 






    return 0;
}