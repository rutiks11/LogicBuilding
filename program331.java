// Accept two strings and check whether are anagram or not
// str1 : Marvellous
// str2 : osulMalver

import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int i,int j)
    {
        Arr = new int[i][j];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Elements : ");

        for(int i =0; i < Arr.length; i++)
        {
            for(int j =0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements : ");

        for(int i =0; i < Arr.length; i++)
        {
            for(int j =0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    
    public int Summation()
    {
        int iSum = 0;
        for(int i =0; i < Arr.length; i++)
        {
            for(int j =0; j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }

    public void SummationRow()
    {
        for(int i =0; i < Arr.length; i++)
        {
            int iSum = 0;

            for(int j =0; j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
            System.out.println("Summation of Row number "+ i + " : " + iSum);
        }
    }
}

class program331
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of rows ");
        iCol = sobj.nextInt();
        
        Matrix mobj = new Matrix(iRow,iCol);
        
        mobj.Accept();
        mobj.Display();

        int iRet = mobj.Summation();
        System.out.println("Summation of Matrix :: "+ iRet);

        mobj.SummationRow();
    }
}

