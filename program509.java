// Number of Files 

import java.io.*;
import java.util.*;

class program509
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
                File list[] = fobj.listFiles();

                System.out.println("Number  of file in that directory are : "+list.length);
                
            }   
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }   
    }
}

