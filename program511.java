// Header - File Name Length of File

import java.io.*;
import java.util.*;

class program511
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);  

        System.out.println("Enter the name of Folder ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);
        String Header = null;

        try
        {
            boolean bRet = fobj.isDirectory();

            if(bRet == true)
            {
                File list[] = fobj.listFiles();

                for(int i = 0; i<list.length;i++)
                {
                    Header = list[i].getName() + " " + list[i].length(); 
                    System.out.println(Header);
                }
            }   
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }   
    }
}
