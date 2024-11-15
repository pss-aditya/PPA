import java.util.Scanner;

class ExceptionDemo3
{
    public static void main(String A[])
    {
        int no1=0,no2=0,ans=0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number :");
        no1=sobj.nextInt();

        System.out.println("Enter second number :");
        no2=sobj.nextInt();
        
        try
        {
            System.out.println("Inside try block");
            ans=no1/no2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch block");
            System.out.println(obj);
        }
        finally
        {
            System.out.println("Inside finally block");

        }
        System.out.println("Division is : " +ans);

    }
}