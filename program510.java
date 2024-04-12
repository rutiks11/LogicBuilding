// File name and File size 

import java.io.*;
import java.util.*;

class program510
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

                for(int i = 0; i<list.length;i++)
                {
                    System.out.println("File name : " + list[i].getName()+ "File.size : " + list[i].length());
                }
            }   
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }   
    }
}

