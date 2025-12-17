import java.util.*;

class program297
{
    public static void main(String A[])
    {
        Vector <String> vobj = new Vector <String> ();            // generic    

        vobj.add("c");
        vobj.add("c++");
        vobj.add("Java");
        vobj.add("Python");
        vobj.add("C#");
        vobj.add("Java");

        System.out.println(vobj);

        vobj.add(2,"LSP");         // to add at index

        System.out.println(vobj);

        System.out.println(vobj.capacity());            //show capacity

        System.out.println(vobj.contains("LSP"));         // is there or not in boolean true or fla

        System.out.println(vobj.contains("Linux")); 

        vobj.remove(6);                             //remove

        System.out.println(vobj);

        Iterator iobj = vobj.iterator();                //like counter vobj

        while(iobj.hasNext())                               // is there next or not
            {
                System.out.println(iobj.next());
            }

        vobj.clear();
    }

    
}