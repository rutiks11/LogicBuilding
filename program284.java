// Approach 3
// Count of digits

import java.util.*;

class Digits
{
    int CountDigits(int iValue)
    {
        int iCount = 0;

        while(iValue != 0)
        {
            iCount++;
            iValue = iValue / 10;
        }
        return iCount;
    }
}

class program284
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Digits nobj = new Digits();
        int iRet = nobj.CountDigits(iNo);

        System.out.println("Multiplication of Even Factors is "+ iRet);
    }
}