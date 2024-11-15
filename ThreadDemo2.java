class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is Running ");
    }
}

class ThreadDemo2
{
    public static void main(String Arr[])
    {
        System.out.println("Inside the main thread");

        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);

        tobj.start();
      
    }
}