// Armstrong Number


class Digits
{
    boolean CheckArmstrong(int iNo)
    {
        int iTemp = iNo;

        // Count number of digits

        int iCount = 0;
        while(iTemp != 0)
        {
            iCount++;
            iTemp = iTemp / 10;
        }

        iTemp = iNo;

        int iSum = 0, iPower =1 , iCnt = 0, iDigit = 0;

        while(iCnt =1 ; iCnt <= iCount; iCnt++)
        {
            iPower = iPower * iPower;
        }

        iSum = iSum + iPower;
        iPower =1;
        iNo = iNo / 10;

         if(iSum == iTemp)
        {    
            return true;
        }
        else
        {
            return false;
        }
    }
}


class program288
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();
        boolean bRet = dobj.CheckArmstrong(iNo);

        if(bRet == true)
        {
            System.out.println("Number is armstrong");
        }
        else
        {
            System.out.println("Number is not armstrong");
        }

    }
}

/*
    Input : 371
    3 ^ 3 + 7 ^ 3 + 1 ^ 3
    27  + 343   + 1
    371
*/