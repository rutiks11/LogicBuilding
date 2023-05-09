// accept number and take search number from user and find frequency even

#include <stdio.h>


int CountEvenDigit(int iNo)
{
    int iDigit = 0;
    int iCnt =0;
    
    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo!= 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigit(iValue);

    printf("Frequency of Even digit is in %d : %d",iValue,iRet);

    
    return 0;
}
