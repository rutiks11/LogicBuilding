// Final

import java.util.*;
import java.io.*;

class program517
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];

        System.out.println("-------------Marvellous Packer-Unpacker------------");

        System.out.println("Unpacking activity of Application is Started.......");

        System.out.println("Enter the file name which contains the packed data : ");
        String PackFile = sobj.nextLine();

        try
        {
            // File chya object la dene
            File Packobj = new File(PackFile);

            // File Open for Reading Purpose
            FileInputStream inobj = new FileInputStream(Packobj);

            inobj.read(Header,0,100);

            String HeaderStr = new String(Header);
            System.out.println(HeaderStr);

            String Tokens[];
            Tokens = HeaderStr.split(" ");

            System.out.println("File Name :"+ Tokens[0]);
            System.out.println("File Length :"+ Tokens[1]);
            
            // Create file With the Token[0]
            File newfileobj = new File(Tokens[0]);
            newfileobj.createNewFile();

            FileOutputStream outobj = new FileOutputStream(newfileobj);

            int FileSize = Integer.parseInt(Tokens[0]);
            byte Buffer[] = new byte[Integer.parseInt(Tokens[1])];

            inobj.read(Buffer,0,FileSize);

            outobj.write(Buffer,0,FileSize);
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured "+obj);
        }
    }
}