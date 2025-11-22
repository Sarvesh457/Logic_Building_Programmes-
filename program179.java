/*
    input :
        iRow 4
        iCol 4
    
    Output 
        a   b   c   d
        e   f   g   h   
        i   j   k   k
        m   n   o   p  
 */
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow ,int iCol)
    {   
        int i  = 0,j = 0;
        char ch = 'a';

        for(i  = 1 ; i <= iRow ; i++)                      //Outer Loop
            {
                
                for(j = 1; j <= iCol ; j++)                //Inner Loop // the counter j reset ever time when it comes from the outer 
                    {
                        System.out.printf("%c\t",ch);
                        ch++;
                    }
                    System.out.println();
            }
    }
}

class program179
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