import java.io.*;
import java.util.*;

class program504
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);  

        System.out.println("Enter the file name that you want to create ");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            boolean bRet = fobj.createNewFile();

            if(bRet == true)
            {
                System.out.println("File Succeessfully Created");
            }
            else    
            {
                System.out.println("Unable to create File");
            }
        }
        catch(IOException iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }   
    }
}

