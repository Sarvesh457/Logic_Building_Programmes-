import java.io.*;

class program557
{
    public static void main(String[] args) throws Exception
    {
        File fobj = new File("Demo.txt");

        boolean bRet = fobj.createNewFile();

        if (bRet == true)
        {
            System.err.println("File gets created succesfully");
        }
        else
        {
            System.err.println("Unable to created File");
        }
    }    
}