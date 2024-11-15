class Demo
{
     public int No1;
     final public int No2; // const int No2=21 he asa lihto c++

     public Demo(int A,int B)
     {
        No1=A;
        No2=B;
     }
}




class Finaldemo3
 {
    public static void main(String Arr[])
 {
     Demo dobj = new Demo(11,21);

     System.out.println("value of No1:"+dobj.No1);
     System.out.println("value of No2:"+dobj.No2);
     
     dobj.No1++;
     System.out.println("value of No1:"+dobj.No1++);
     //dobj.No2++; //internally he asa dobj.No2=No2+1; asa krtoy ata he kelya mula 21 cha 22 hotay pan te apan initialise kryla jatoy manun te error yetay initailise error
 }

 }