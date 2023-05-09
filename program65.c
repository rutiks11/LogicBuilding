// accept number and print avg of digit

#include <stdio.h>

float DigitAverage(int iNo)
{   
    int iSum = 0;
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCnt++;
        iNo = iNo / 10;
    }

    return ((float)iSum / (float)iCnt);

}

int main()
{
    int iValue =0;
    float fRet = 0.0f;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    fRet = DigitAverage(iValue);

    printf("Average %f",fRet);
    
    return 0;
}