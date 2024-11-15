import java.util.Scanner;

class ExceptionDemo1
{
    public static void main(String A[])
    {
        int no1=0,no2=0,ans=0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number :");
        no1=sobj.nextInt();

        System.out.println("Enter second number :");
        no2=sobj.nextInt();

        ans=no1/no2;

        System.out.println("Division is : " +ans);

    }
}