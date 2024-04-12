// Approach 1

import java.util.*;

class program277
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        int iNo = sobj.nextInt();

        int iMult = 1;

        for(int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iMult = iMult * iCnt;
        }

        System.out.println("Factorial is :"+ iMult);
    }
}