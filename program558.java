import java.io.*;
import java.util.Scanner;

class program558
{
    public static void main(String[] args) throws Exception
    {
        String FileName = null;
        Scanner sobj = new Scanner(System.in);

        System.err.println("Enter the name of file");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        boolean bRet = fobj.createNewFile();

        if (bRet == true)
        {
            System.err.println("File gets created succesfully");
        }
        else
        {
            System.err.println("Unable to created File");
        }

        sobj.close();
    }    
}