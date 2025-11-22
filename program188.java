/*
    input :
        iRow 4
        iCol 4
    
    Output 
        $   $   $   $
        $   $   *   $
        $   *   $   $
        $   $   $   $
        
        Digonal Pattern
 */
import java.util.Scanner;

class Pattern
{
    // Filter for square matrix
    public void Display(int iRow ,int iCol)
    {   
        int i  = 0,j = 0;

        if (iRow != iCol)
        {
            System.out.println("Invalid input");
            System.out.println("Row number and Column number should be same");

            return ;
        }
        for(i  = 1 ; i <= iRow ; i++)                      //Outer Loop
            {
                for(j = 1; j <= iCol ; j++)                //Inner Loop // the counter j reset ever time when it comes from the outer 
                    {
                        if (i == j || i == 1 || i == iRow || j == 1 || j == iCol)                        // or condition
                        {
                            System.out.print("$\t");
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

class program188
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