// Check Directory exists

import java.io.*;
import java.util.*;

class program508
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);  

        System.out.println("Enter the name of Folder ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        try
        {
            boolean bRet = fobj.isDirectory();

            if(bRet == true)
            {
                System.out.println("Its a directory");
            }
            else
            {
                System.out.println("Its not a directory");
            }
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }   
    }
}

