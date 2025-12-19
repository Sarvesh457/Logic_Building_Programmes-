import java.util.*;

class program301
{
    public static void main(String A[])
    {
        Hashtable <String,Integer> hobj = new Hashtable<String,Integer>();
    
        hobj.put("LSP",30000);
        hobj.put("PPA",27000);
        hobj.put("LB",28000);
        hobj.put("Python",30000);

        System.out.println(hobj);

        System.out.println(hobj.keys());        //gives keys
        
        Enumeration eobj = hobj.keys();         

        while (eobj.hasMoreElements())                              //issue
        {
            System.out.println(eobj.nextElement());
            System.out.println(hobj.get(eobj.nextElement()));
        }
    }
}