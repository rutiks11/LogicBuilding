// Approach 3

import java.util.*;

class Number
{
    public int Factorial(int iValue)
    {   
        int iMult = 1;

        for(int iCnt = 1; iCnt<=iValue; iCnt++)
        {
            iMult = iMult * iCnt;
        }
        return iMult;
    }
}
    class program279
    {
        public static void main(String args[])
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter Number : ");
            int iNo = sobj.nextInt();

            Number nobj = new Number();

            int iRet = nobj.Factorial(iNo);

            System.out.println("Factorial is : "+iRet);
        }   
}
