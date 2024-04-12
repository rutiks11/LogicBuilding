
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
}

class program298
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

    }
}