#include <stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    int iSum = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;     
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Number of Digits are : %d\n",iRet);

    return 0;
}
