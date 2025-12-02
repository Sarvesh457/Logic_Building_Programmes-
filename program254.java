// Input : Hello

// Output : _ello

import java.util.*;

class StringX
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();

        Arr[0]= '_';


        return new String(Arr);                 // imp   change

    }
    
}
class program254
{
    public static void main(String A[])
    {
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter your String : ");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();

        sobj = strobj.Update(sobj);     //change (Not Prefable)

        System.out.println("Updated String:  "+sobj);
    }
}