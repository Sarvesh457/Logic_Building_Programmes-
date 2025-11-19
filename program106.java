//OOP Design
import java.util.Scanner;

class ArrayX
{
    private int Arr[];
    private int iSize;

    public ArrayX(int no)
    {
        System.out.println("Inside Conscture");
        iSize = no;
        Arr = new int [iSize];
    }

    public void Accept()
    {
        int i = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of array");

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        
    }

    public void Display()
    {
        System.out.println("Array are");
        int i = 0;

        for(i = 0;i < Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}
class program106
{
    public static void main(String A[])
    {    
        ArrayX aobj1 = new ArrayX(5);
        System.out.println(aobj1.iSize);            //error

        //Bad Code(need of access specifier)
        aobj1.iSize = 11;                           //error
        aobj1.Arr = null;                           //error

        ArrayX aobj2 = new ArrayX(7);
        System.out.println(aobj2.iSize);            //error
    }
}