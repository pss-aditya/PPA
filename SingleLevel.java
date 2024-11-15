class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Inside base constructor:");
    }
    public void Fun()
    {
        System.out.println("inside void fun:");
    }
}

class Derived extends Base  //class Derived : public Base         he asa lihla asta c++ mdhi
{
    public int X,Y;

    public Derived()
    {
        System.out.println("inside derived constructor");
    }
    public void Gun()
    {
        System.out.println("inside void gun:");
    }
}
class SingleLevel
{
    public static void main(String Arr[])
    {
        System.out.println("inside main method");

        
        Derived dobj = new Derived();

        dobj.Fun();
        dobj.Gun();


    }
}