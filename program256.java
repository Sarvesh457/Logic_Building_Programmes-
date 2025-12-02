// Input : Hello

// Output : _ello

import java.util.*;

class StringX
{
    public String strToggalX(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();

        for(iCnt = 0;iCnt <Arr.length;iCnt++ )
            {
                if((Arr[iCnt] >='A') && (Arr[iCnt] <='Z'))
                    {
                        Arr[iCnt] = (char)(Arr[iCnt] + 32);           //imp   type cast
                    }
                else if ((Arr[iCnt] >='a') && (Arr[iCnt] <='z')) 
                {
                    Arr[iCnt] = (char)(Arr[iCnt] - 32);
                }
            }

        return new String(Arr);                 // imp   change

    }
    
}
class program256
{
    public static void main(String A[])
    {
        String sRet = null;
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter your String : ");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();

        sRet = strobj.strToggalX(sobj);     

        System.out.println("Updated String:  "+sRet);
    }
}