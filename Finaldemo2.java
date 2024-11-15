class Base
{
    public int No1;
    public int No2;

   final public void Fun()
    { 
        System.out.println("inside the void fun ");
    }
     public void Gun()
    { 
        System.out.println("inside the void gun ");
    }
}
class Derived extends Base
{
     public void Fun() //error
    { 
        System.out.println("inside the void fun ");
    }
     public void Gun()
    { 
        System.out.println("inside the void gun ");
    }

}



class Finaldemo2
{
    public static void main(String Arr[])
{
    //Base dobj = new Base();
    //dobj.Fun();
}

}