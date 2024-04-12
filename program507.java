// File length

import java.io.*;
import java.util.*;

class program507
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);  

        System.out.println("Enter the file name that you want to check file size ");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            System.out.println("File name is : "+fobj.length());
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }   
    }
}

