import java.io.*;
import java.util.*;

class program578
{
    public static void main(String[] args) throws Exception
    {
        
        Scanner sobj = new Scanner(System.in);
        
        File fobj = new File("Marvellous");

        if(fobj.exists())
        {
            System.out.println("folder is present");
        }
        else
        {
            System.out.println("There is no such folder");
        }
        sobj.close();
        
    }    
}