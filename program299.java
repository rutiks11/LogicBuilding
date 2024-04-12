// String

import java.util.*;

class StringX
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        
        int iCount = 0;

        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {   
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();
        
        int iCount = 0;

        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {   
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program299
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();      // Reference of String

        StringX obj = new StringX();
        int iRet = 0;

        iRet = obj.CountSmall(name);    
        System.out.println("Number of small characters are :: "+ iRet);

        iRet = obj.CountCapital(name);    
        System.out.println("Number of small characters are :: "+ iRet);

    }
}