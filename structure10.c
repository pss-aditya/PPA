#include<stdio.h>
struct demo
{
    int no; //4
    float f; //4
//total 8

};
struct PPA
{
    int X; //4
    struct demo dobj;//8 vrun ghetlai 8
    int Y;//4
     //total 16
};


int main()
{
    struct PPA obj;


    return 0;
}