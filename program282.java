// Approach 3
// Factorial of Even Number

import java.util.*;

class Number
{
    public int EvenFact(int iValue) 
    {
        int iMult = 1 ;
        for(int iCnt =1; iCnt <= iValue; iCnt = iCnt+ 2)
        {
            if((iValue % iCnt) == 0)
            {
                    iMult = iMult * iCnt;
            }
        }
        return iMult;
    }
}

class program281
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Number nobj = new Number();
        int iRet = nobj.EvenFact(iNo);

        System.out.println("Multiplication of Even Factors is "+ iRet);
    }
}