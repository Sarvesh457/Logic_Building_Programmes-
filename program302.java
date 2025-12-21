import java.util.*;

class program302
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

        String key = null;

        while (eobj.hasMoreElements())                              //issue
        {
            key =(String)eobj.nextElement();
            System.out.println("key : "+key);
            System.out.println("Value : "+hobj.get(key));
        }
    }
}