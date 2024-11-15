class Base
{
    public int A,B;

    
    public void Fun()
    { System.out.println("inside void base fun:"); }
    public void Gun()
    { System.out.println("inside void base gun:"); }
    public void Run()
    { System.out.println("inside void base run:"); }
    public void Sun()
    { System.out.println("inside void base sun:"); }

}

class Derived extends Base  //class Derived : public Base         he asa lihla asta c++ mdhi
{
     public int X,Y;
 
     public void Fun()
     { System.out.println("inside derived fun:"); }
     public void Sun()
     { System.out.println("inside derived sun:"); }
     public void Mun()
     { System.out.println("inside derived mun:"); }
     public void Bun()
     { System.out.println("inside derived bun:"); }

}
class RMD // runtime method dispatch
{
     public static void main(String Arr[])
     {
       Base bobj = new Derived();
       bobj.Fun();  //derived fun
       bobj.Gun();  //base gun
       bobj.Sun();  //derived sun
       bobj.Run();  //base run
       //bobj.Mun();  //error
       //bobj.Bun();  //error

     }
}

//Base bobj = new Base() no casting
//Derived dobj = new Derived()  no casting
//Derived dobj = new Base() down casting