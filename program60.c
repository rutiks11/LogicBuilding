// accept number and take search number from user and find frequency

#include <stdio.h>


int ChkDigit(int iNo, int iSearch)
{
    int iDigit = 0;
    int iCnt =0;
    
    // Filter
    if((iSearch < 0) || (iSearch > 9))
    {
        printf("Enter the digit in range 0 to 9");
        return 0;
    }

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo!= 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    printf("Enter Digit(0-9)\n");
    scanf("%d",&iValue2);

    iRet = ChkDigit(iValue1,iValue2);

    printf("Frequency of %d is in %d : %d",iValue2,iValue1,iRet);

    
    return 0;
}
