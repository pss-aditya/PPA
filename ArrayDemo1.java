class ArrayDemo1
{
    public static void main(String A[])
    {
        int Arr1[]={10,20,30,40}; //static

        System.out.println(Arr1[0]);
        System.out.println(Arr1[1]);
        System.out.println(Arr1[2]);
        System.out.println(Arr1[3]);

        //int Arr2[4]={10,20,30,40};

        System.out.println(Arr1.length);//length ni kiti elements ahe kalta size nhi kalat
 
        int Arr2[] = new int[4];  // dynamic
        Arr2[0]=10;
        Arr2[1]=20;
        Arr2[2]=30;
        Arr2[3]=40;
         
        System.out.println(Arr2.length);
 
 
 
     }

}