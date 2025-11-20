/*
    iRow : 3
    iCol : 4
    
    $   $   $   $
    $   $   $   $
    $   $   $   $

 */

import java.util.*;

class Pattern 
{
    public void Display(int iRow ,int iCol)
    {
        int i = 0,j =0;

        for(i = 1;i <= iRow; i++ )      // Row Loop Outer
            {
                for(j = 1;j <= iCol; j++)       //Column Loop Inner
                {
                    System.out.print("$\t");                    
                }
                System.out.println();
            }
    }
}

class program165
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0,iValue2 = 0;

        System.out.println("Enter the Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Columns : ");
        iValue2 = sobj.nextInt();
        
        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);
    }
    
}