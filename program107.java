//OOP Design
import java.util.Scanner;

class ArrayX
{
    private int Arr[];
    private int iSize;

    public ArrayX(int no)
    {
        System.out.println("Inside Constructor");
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
        
    } //end of ArrayX class

    public void Display()
    {
        System.out.println("Array elements");
        int i = 0;

        for(i = 0;i < Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}
class program107
{
    public static void main(String A[])
    {    

        ArrayX aobj1 = new ArrayX(5);
        aobj1.Accept();
        aobj1.Display();

        ArrayX aobj2 = new ArrayX(7);
        aobj2.Accept();
        aobj2.Display();

    }
}