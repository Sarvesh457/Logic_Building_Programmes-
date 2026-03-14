import java.io.*;
import java.util.Scanner;

class program562
{
    public static void main(String[] args) throws Exception
    {
        boolean bRet = false;
        String FileName = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file : ");
        FileName = sobj.nextLine();

        FileWriter fwobj = new FileWriter(FileName);

        fwobj.write("Jay Ganesh..");
        
        sobj.close();
        fwobj.close();
    }    
}