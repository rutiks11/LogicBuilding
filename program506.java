// File Name

import java.io.*;
import java.util.*;

class program506
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

            String name = fobj.getName();

            System.out.println("File name is : "+name);
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }   
    }
}

