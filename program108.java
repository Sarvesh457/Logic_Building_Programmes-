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

    public float Average()
    {
        int i = 0,iSum = 0;

        for(i = 0;i < Arr.length ; i++)
        {
            iSum = iSum + Arr[i];

        }
        return(iSum/iSize);
    }
}
class program108
{
    public static void main(String A[])
    {    

        float fRet = 0.0f;

        ArrayX aobj1 = new ArrayX(5);
        aobj1.Accept();
        aobj1.Display();

        fRet = aobj1.Average();

        System.out.println("Avarage is "+fRet);

    }
}