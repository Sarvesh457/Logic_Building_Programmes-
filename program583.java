import java.io.*;
import java.util.*;

class program583
{
    public static void main(String[] args) throws Exception
    {
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder : ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            System.out.println("folder is present");

            File fArr[] = fobj.listFiles();

            System.out.println("Number of files in the folder : "+fArr.length);

            for(int i = 0; i < (fArr.length);i++)
            {
                System.err.println("File Name :"+fArr[i].getName());
                System.err.println("File Size :"+fArr[i].length());
            }
        }
        else
        {
            System.out.println("There is no such folder are :");
        }
        sobj.close();
        
    }    
}