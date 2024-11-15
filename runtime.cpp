#include<iostream>
using namespace std;

class base
{
    public:
         int i,j;

         void fun()   //defination
         {
            cout<<"inside the base fun\n";
         }

         void gun()
         {
            cout<<"inside base gun\n";
         }

         void sun()
         {
            cout<<"inside base sun\n";
         }

         void run()
         {
            cout<<"inside base run\n";
         }
};

class derived : public base
{
    public:
         int k,y;

         void fun() //redifination
         {   
            cout<<"inside derived fun\n";   
         }

         void gun()
         {   
            cout<<"inside derived gun\n";    
         }

         void sun()
         {   
            cout<<"inside derived sun\n";    
         }

         void mun()
         {   
            cout<<"inside derived mun\n";    
         }
};


int main()
{
    
    derived dobj; //hechi size 16

    base *bptr=NULL; //hechi size 8
     
    bptr=&dobj; // up casting
    
    bptr->fun(); //base ch fun run hoil
    bptr->gun(); //base run
    bptr->sun(); //base sun
    bptr->run(); //base run
    //bptr->mun(); //error ala pn ya mdhi bptr->mun manlyvr tyni dervied cha function check kela pahije tr te hot nahi tr itha yeta virtual chi concept pudha program mdhi
    






    return 0;
}