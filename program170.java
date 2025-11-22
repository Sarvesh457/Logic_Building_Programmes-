/*
    input :
        iRow 4
        iCol 4
    
    Output 
        *   #   *   #
        *   #   *   #
        *   #   *   #
 */
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow ,int iCol)
    {   
        int i  = 0,j = 0;

        for(i  = 1 ; i <= iRow ; i++ )                      //Outer Loop
            {
                for(j = 1 ; j <= iCol ; j++)                //Inner Loop // the counter j reset ever time when it comes from the outer 
                    {
                        if((j % 2) == 0)                            // if else in the inner loop even and odd logic
                            {
                                System.out.print("#\t");
                            }
                        else
                            {
                                System.out.print("*\t");
                            }
                    }
                    System.out.println();
            }
    }
}

class program170
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0,iValue2 = 0;

        System.out.println("Enter the Number of Row:-");
        iValue1 = sobj.nextInt();
        
        System.out.println("Enter the Number of Column:-");
        iValue2 = sobj.nextInt();
        
        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);

        
    }
    
}