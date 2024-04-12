// String

import java.util.*;

class program296
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();      // Reference of String

        System.out.println("Your name is : "+name);
        System.out.println("Length of string : "+name.length());

        for(int iCnt = 0; iCnt < name.length(); iCnt++)
        {
            System.out.println(name.charAt(iCnt));
        }
    }
}