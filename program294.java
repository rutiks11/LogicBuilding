// Accept number of elements allocate dynamically elements
// summation of Number

// Approach 2

import java.util.*;

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];      // Initialize the Variable
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the Elements : ");
        
        for(int iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of Array : ");
        
        for(int iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
        } 
        System.out.println(); 
    }
}

class MyArray extends ArrayX
{
    public MyArray(int iSize)
    {
        super(iSize);
    }

    public int summation()
    {
        int iSum = 0;

        for(int iCnt =0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}

class program293
{
    public static void main(String args[])
    {   
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter number of Elements : ");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);
        
        int iRet = 0;

        mobj.Accept();
        mobj.Display();
        
        System.out.println("Summation of all elements "+mobj.summation());
    }
}