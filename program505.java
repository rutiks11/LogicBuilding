// File Exists or not

import java.io.*;
import java.util.*;

class program505
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);  

        System.out.println("Enter the file name that you want to create ");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            boolean bRet = fobj.exists();

            if(bRet == true)
            {
                System.out.println("File Exists");
            }
            else    
            {
                System.out.println("File is not Exists");
            }
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }   
    }
}

