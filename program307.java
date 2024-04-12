// String Remove WhiteSpace

import java.util.*;

class StringX
{
    public String RemoveWhiteSpace(String str)
    {
        return str.replaceAll("\\s","");
    }
}

class program307
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();      // Reference of String

        StringX obj = new StringX();
        String sret = obj.RemoveWhiteSpace(name);

        System.out.println("Result is : "+sret);
    }
}