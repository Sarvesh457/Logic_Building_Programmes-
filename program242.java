// Input : Hello

// Output : H   e   l   l   o

import java.util.*;

class program243
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your String : ");
        String str = sobj.nextLine();

        
        System.out.println(str.charAt(0));           // function call is time consuming due to new stack frame
        System.out.println(str.charAt(1));  
        System.out.println(str.charAt(2));  
        System.out.println(str.charAt(3));  
        System.out.println(str.charAt(4));  
        
    }
}