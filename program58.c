// Write the program accept number and search digit 8

#include <stdio.h>

int ChkDigitFrequency(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0;
    int iCnt = 0;

    while (iNo!=0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 8)
        {
            iCnt++;
        }
        iNo = iNo / 10;         // Self Updating Statement
    }
    
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = ChkDigitFrequency(iValue);

    printf("%d",iRet);
    
    return 0;
}
