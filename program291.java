// Accept number of elements allocate dynamically elements
// Display Number

// Approach 2

import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];      // Initialize the Variable
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the Elements : ");
        
        for(iCnt = 0 ; iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of Array : ");
        
        for(int iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
        } 
        System.out.println(); 
    }
}

class program291
{
    public static void main(String args[])
    {   
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter number of Elements : ");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept();
        aobj.Display();
    }
}