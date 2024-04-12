// Accept number of elements allocate dynamically elements
// Display Number

// Approach 1

import java.util.*;

class program290
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter number of Elements : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the Elements : ");
        int iCnt = 0;
        
        for(iCnt =0 ; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of Array ");
        for(iCnt =0 ; iCnt < Arr.length ; iCnt++)   // length
        {
            System.out.println(Arr[iCnt]);
        }

        sobj.close();
    }
}