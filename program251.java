// Input : Hello

// Output : 1

import java.util.*;

class StringX
{
    public int CountCaptial(String str)
    {
        int iCnt = 0,iCount = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            if (Arr[iCnt] <= 'A' && Arr[iCnt] >= 'Z') 
            {
                iCount++;
            }
            
        }
        return iCount;
    }
    
    
}
class program251
{
    public static void main(String A[])
    {
        int iRet = 0;
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter your String : ");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();

        iRet = strobj.CountCaptial(sobj);

        System.out.println("Occrance of Captial is: "+iRet);
    }
}