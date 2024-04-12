// Approach 3
// sum of digits

import java.util.*;

class Digits
{
    public int sumOfDigits(int iValue)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            iSum = iSum + iDigit;
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