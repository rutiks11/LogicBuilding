// String Lowercase

import java.util.*;

class StringX
{
    public String StrLower(String str)
    {
        // Step 1: Convert string into array
        char Arr[] = str.toCharArray();

        // Step 2 : Perform operations on array

        for(int iCnt=0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        }

        // Step 3: Convert array to string

        String ret = new String(Arr);

        return ret;
    }

    public String StrUpper(String str)
    {
        // Step 1: Convert string into array
        char Arr[] = str.toCharArray();

        // Step 2 : Perform operations on array

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }
        }

        // Step 3: Convert array to string

        String ret = new String(Arr);

        return ret;
    }
}

class program302
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();      // Reference of String

        StringX obj = new StringX();

        String sret = obj.StrLower(name);
        System.out.println("Converted string is : "+sret);

        String sret = obj.StrUpper(name);
        System.out.println("Converted string is : "+sret);
    }
}