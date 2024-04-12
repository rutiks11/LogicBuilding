// Sum of Digits 

import java.util.*;

class Digits
{
    public int sumOfDigits(int iValue)
    {
        int iSum = 0;

        if(iValue < 0)
        {
            iValue = -iValue;
        }

        while(iValue != 0)
        {
            iSum = iSum + (iValue %10);
            iValue = iValue / 10;
        }
        return iSum;
    }
}

class program285
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number ");
        int iNo = sobj.nextInt();

        Digits obj = new Digits();
        
        int iRet = 0;

        iRet = obj.sumOfDigits(iNo);

        System.out.println("Sum of Digits is :: "+iRet);
    }
}