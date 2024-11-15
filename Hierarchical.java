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
class DerivedX extends Base
{
    public int P,Q;
    
    public DerivedX()
    {
        System.out.println("inside derivedx constructor");
    }
    public void Sun()
    {
        System.out.println("inside derivedx sun");
    }

}
class Hierarchical
{
    public static void main(String Arr[])
    {

        System.out.println("inside main method");

       Derived dobj1 = new Derived();

       DerivedX dobj2 = new DerivedX();

       dobj1.Fun();
       dobj1.Gun();

       dobj2.Fun();
       dobj2.Sun();
       
    }
}