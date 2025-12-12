import java.util.*;

class program295
{
    public static void main(String A[])
    {
        Vector <Integer> vobj = new Vector <Integer> ();            // generic  // in wraper class

        vobj.add(11);
        vobj.add(21);
        vobj.add(51);
        vobj.add(101);
        vobj.add(111);
        
        System.out.println(vobj);

        vobj.add(2,10);         // to add  at index

        System.out.println(vobj);

        System.out.println(vobj.capacity());            //show capacity

        System.out.println(vobj.contains(101));         // is there or not in boolean true or flase

        System.out.println(vobj.contains(211)); 
    }
}