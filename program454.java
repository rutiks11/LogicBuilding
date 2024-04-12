import java.io.*;
import java.util.*;


class program454
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter File Name :: ");
        String FileName = sobj.nextLine();

        File fobj = new File("FileName.txt");

        if(fobj.createNewFile())
        {
            System.out.println("File Successfully Created\n");
        }
        else
        {
            System.out.println("Unable to create File\n");        
        }
    }
}